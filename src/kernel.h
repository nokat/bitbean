// Copyright (c) 2012-2013 The PPBean developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef PPbean_KERNEL_H
#define PPbean_KERNEL_H

#include "main.h"

// MODIFIER_INTERVAL: time to elapse before new modifier is computed
extern unsigned int nModifierInterval;

// MODIFIER_INTERVAL_RATIO:
// ratio of group interval length between the last group and the first group
static const int MODIFIER_INTERVAL_RATIO = 3;

// Compute the hash modifier for proof-of-sprout
bool ComputeNextSproutModifier(const CBlockIndex* pindexPrev, uint64_t& nSproutModifier, bool& fGeneratedSproutModifier);

// Check whether sprout kernel meets hash target
// Sets hashProofOfSprout on success return
bool CheckSproutKernelHash(unsigned int nBits, const CBlock& blockFrom, unsigned int nTxPrevOffset, const CTransaction& txPrev, const COutPoint& prevout, unsigned int nTimeTx, uint256& hashProofOfSprout, uint256& targetProofOfSprout, bool fPrintProofOfSprout=false);

// Check kernel hash target and beansprout signature
// Sets hashProofOfSprout on success return
bool CheckProofOfSprout(const CTransaction& tx, unsigned int nBits, uint256& hashProofOfSprout, uint256& targetProofOfSprout);

// Check whether the beansprout timestamp meets protocol
bool CheckBeanSproutTimestamp(int64_t nTimeBlock, int64_t nTimeTx);

// Get sprout modifier checksum
unsigned int GetSproutModifierChecksum(const CBlockIndex* pindex);

// Check sprout modifier hard checkpoints
bool CheckSproutModifierCheckpoints(int nHeight, unsigned int nSproutModifierChecksum);

// Get time weight using supplied timestamps
int64_t GetWeight(int64_t nIntervalBeginning, int64_t nIntervalEnd);

#endif // PPbean_KERNEL_H
