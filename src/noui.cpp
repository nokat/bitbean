// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2015 Bean Core www.bitbean.org
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "ui_interface.h"
#include "init.h"
#include "bitbeanrpc.h"

#include <string>

static int noui_ThreadSafeMessageBox(const std::string& message, const std::string& caption, unsigned int style)
{
    std::string strCaption;
       // Check for usage of predefined caption
       switch (style) {
       case CClientUIInterface::MSG_ERROR:
           strCaption += _("Error");
           break;
       case CClientUIInterface::MSG_WARNING:
           strCaption += _("Warning");
           break;
       case CClientUIInterface::MSG_INFORMATION:
           strCaption += _("Information");
           break;
       default:
           strCaption += caption; // Use supplied caption
       }

    printf("%s: %s\n", caption.c_str(), message.c_str());
    fprintf(stderr, "%s: %s\n", strCaption.c_str(), message.c_str());
    return 4;
}

static bool noui_ThreadSafeAskFee(int64_t /*nFeeRequired*/)
{
    return true;
}

static void noui_InitMessage(const std::string &message)
{
    printf("init message: %s\n", message.c_str());
}

void noui_connect()
{
    // Connect bitbeand signal handlers
    uiInterface.ThreadSafeMessageBox.connect(noui_ThreadSafeMessageBox);
    uiInterface.ThreadSafeAskFee.connect(noui_ThreadSafeAskFee);
    uiInterface.InitMessage.connect(noui_InitMessage);
}
