// Copyright (c) 2009-2012 Bitcoin Developers
// Copyright (c) 2015 Bean Core www.bitbean.org
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "init.h" // for pwalletMain
#include "bitbeanrpc.h"
#include "ui_interface.h"
#include "base58.h"

#define printf OutputDebugStringF

using namespace json_spirit;
using namespace std;

void EnsureWalletIsUnlocked();

class CTxDump
{
public:
    CBlockIndex *pindex;
    int64_t nValue;
    bool fSpent;
    CWalletTx* ptx;
    int nOut;
    CTxDump(CWalletTx* ptx = NULL, int nOut = -1)
    {
        pindex = NULL;
        nValue = 0;
        fSpent = false;
        this->ptx = ptx;
        this->nOut = nOut;
    }
};

Value importprivkey(const Array& params, bool fHelp)
{
    if (fHelp || params.size() < 1 || params.size() > 2)
        throw runtime_error(
            "importprivkey <BitBeanprivkey> [label]\n"
            "Adds a private key (as returned by dumpprivkey) to your wallet.");

    string strSecret = params[0].get_str();
    string strLabel = "";
    if (params.size() > 1)
        strLabel = params[1].get_str();
    CBitbeanSecret vchSecret;
    bool fGood = vchSecret.SetString(strSecret);

    if (!fGood) throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid private key");
    if (fWalletUnlockSproutingOnly)
        throw JSONRPCError(RPC_WALLET_UNLOCK_NEEDED, "Wallet is unlocked for sprouting only.");

    CKey key = vchSecret.GetKey();
    CPubKey pubkey = key.GetPubKey();
    CKeyID vchAddress = pubkey.GetID();
    {
        LOCK2(cs_main, pwalletMain->cs_wallet);

        pwalletMain->MarkDirty();
        pwalletMain->SetAddressBookName(vchAddress, strLabel);

        // Don't throw error in case a key is already there
        if (pwalletMain->HaveKey(vchAddress))
            return Value::null;

        pwalletMain->mapKeyMetadata[vchAddress].nCreateTime = 1;

        if (!pwalletMain->AddKeyPubKey(key, pubkey))
            throw JSONRPCError(RPC_WALLET_ERROR, "Error adding key to wallet");

        // whenever a key is imported, we need to scan the whole chain
        pwalletMain->nTimeFirstKey = 1; // 0 would be considered 'no value'

        pwalletMain->ScanForWalletTransactions(pindexGenesisBlock, true);
        pwalletMain->ReacceptWalletTransactions();
    }

    return Value::null;
}

Value importwallet(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 1)
        throw runtime_error(
            "importwallet <filename>\n"
            "Imports keys from a wallet dump file (see dumpwallet)."
             + HelpRequiringPassphrase());

    EnsureWalletIsUnlocked();
    if(!ImportWallet(pwalletMain, params[0].get_str().c_str()))
       throw JSONRPCError(RPC_WALLET_ERROR, "Error adding some keys to wallet");

    return Value::null;
}


Value dumpprivkey(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 1)
        throw runtime_error(
            "dumpprivkey <BitBeanaddress>\n"
            "Reveals the private key corresponding to <BitBeanaddress>.");

    EnsureWalletIsUnlocked();

    string strAddress = params[0].get_str();
    CBitbeanAddress address;
    if (!address.SetString(strAddress))
        throw JSONRPCError(RPC_INVALID_ADDRESS_OR_KEY, "Invalid BitBean address");
    if (fWalletUnlockSproutingOnly)
        throw JSONRPCError(RPC_WALLET_UNLOCK_NEEDED, "Wallet is unlocked for sprouting only.");
    CKeyID keyID;
    if (!address.GetKeyID(keyID))
        throw JSONRPCError(RPC_TYPE_ERROR, "Address does not refer to a key");
    CKey vchSecret;
    if (!pwalletMain->GetKey(keyID, vchSecret))
        throw JSONRPCError(RPC_WALLET_ERROR, "Private key for address " + strAddress + " is not known");
    return CBitbeanSecret(vchSecret).ToString();
}

Value dumpwallet(const Array& params, bool fHelp)
{
    if (fHelp || params.size() != 1)
        throw runtime_error(
            "dumpwallet <filename>\n"
            "Dumps all wallet keys in a human-readable format."
            + HelpRequiringPassphrase());

    EnsureWalletIsUnlocked();

    if(!DumpWallet(pwalletMain, params[0].get_str().c_str() ))
       throw JSONRPCError(RPC_WALLET_ERROR, "Error dumping wallet keys to file");

    return Value::null;
}
