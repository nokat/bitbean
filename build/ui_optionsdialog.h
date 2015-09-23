/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "bitbeanamountfield.h"
#include "qvalidatedlineedit.h"
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabMain;
    QVBoxLayout *verticalLayout_Main;
    QLabel *transactionFeeInfoLabel;
    QHBoxLayout *horizontalLayoutFee;
    QLabel *transactionFeeLabel;
    BitbeanAmountField *transactionFee;
    QSpacerItem *horizontalSpacerFee;
    QLabel *reserveBalanceInfoLabel;
    QHBoxLayout *horizontalLayoutReserveBalance;
    QLabel *reserveBalanceLabel;
    BitbeanAmountField *reserveBalance;
    QSpacerItem *horizontalSpacerReserveBalance;
    QCheckBox *bitbeanAtStartup;
    QCheckBox *detachDatabases;
    QSpacerItem *verticalSpacer_Main;
    QWidget *tabNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QLabel *socksVersionLabel;
    QValueComboBox *socksVersion;
    QSpacerItem *horizontalSpacer_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *tabWindow;
    QVBoxLayout *verticalLayout_Window;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QSpacerItem *verticalSpacer_Window;
    QWidget *tabDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QCheckBox *displayAddresses;
    QCheckBox *beanControlFeatures;
    QSpacerItem *verticalSpacer_Display;
    QHBoxLayout *horizontalLayout_Buttons;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *applyButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QString::fromUtf8("OptionsDialog"));
        OptionsDialog->resize(540, 380);
        QPalette palette;
        QBrush brush(QColor(211, 238, 175, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush3(QColor(159, 213, 85, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush4(QColor(106, 104, 100, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush5(QColor(0, 0, 128, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        OptionsDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(12);
        font.setItalic(true);
        OptionsDialog->setFont(font);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(OptionsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Sans"));
        font1.setPointSize(12);
        font1.setItalic(false);
        tabWidget->setFont(font1);
        tabWidget->setTabPosition(QTabWidget::North);
        tabMain = new QWidget();
        tabMain->setObjectName(QString::fromUtf8("tabMain"));
        verticalLayout_Main = new QVBoxLayout(tabMain);
        verticalLayout_Main->setObjectName(QString::fromUtf8("verticalLayout_Main"));
        transactionFeeInfoLabel = new QLabel(tabMain);
        transactionFeeInfoLabel->setObjectName(QString::fromUtf8("transactionFeeInfoLabel"));
        transactionFeeInfoLabel->setTextFormat(Qt::PlainText);
        transactionFeeInfoLabel->setWordWrap(true);

        verticalLayout_Main->addWidget(transactionFeeInfoLabel);

        horizontalLayoutFee = new QHBoxLayout();
        horizontalLayoutFee->setObjectName(QString::fromUtf8("horizontalLayoutFee"));
        transactionFeeLabel = new QLabel(tabMain);
        transactionFeeLabel->setObjectName(QString::fromUtf8("transactionFeeLabel"));
        transactionFeeLabel->setTextFormat(Qt::PlainText);

        horizontalLayoutFee->addWidget(transactionFeeLabel);

        transactionFee = new BitbeanAmountField(tabMain);
        transactionFee->setObjectName(QString::fromUtf8("transactionFee"));

        horizontalLayoutFee->addWidget(transactionFee);

        horizontalSpacerFee = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutFee->addItem(horizontalSpacerFee);


        verticalLayout_Main->addLayout(horizontalLayoutFee);

        reserveBalanceInfoLabel = new QLabel(tabMain);
        reserveBalanceInfoLabel->setObjectName(QString::fromUtf8("reserveBalanceInfoLabel"));
        reserveBalanceInfoLabel->setTextFormat(Qt::PlainText);
        reserveBalanceInfoLabel->setWordWrap(true);

        verticalLayout_Main->addWidget(reserveBalanceInfoLabel);

        horizontalLayoutReserveBalance = new QHBoxLayout();
        horizontalLayoutReserveBalance->setObjectName(QString::fromUtf8("horizontalLayoutReserveBalance"));
        reserveBalanceLabel = new QLabel(tabMain);
        reserveBalanceLabel->setObjectName(QString::fromUtf8("reserveBalanceLabel"));
        reserveBalanceLabel->setTextFormat(Qt::PlainText);

        horizontalLayoutReserveBalance->addWidget(reserveBalanceLabel);

        reserveBalance = new BitbeanAmountField(tabMain);
        reserveBalance->setObjectName(QString::fromUtf8("reserveBalance"));

        horizontalLayoutReserveBalance->addWidget(reserveBalance);

        horizontalSpacerReserveBalance = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutReserveBalance->addItem(horizontalSpacerReserveBalance);


        verticalLayout_Main->addLayout(horizontalLayoutReserveBalance);

        bitbeanAtStartup = new QCheckBox(tabMain);
        bitbeanAtStartup->setObjectName(QString::fromUtf8("bitbeanAtStartup"));

        verticalLayout_Main->addWidget(bitbeanAtStartup);

        detachDatabases = new QCheckBox(tabMain);
        detachDatabases->setObjectName(QString::fromUtf8("detachDatabases"));

        verticalLayout_Main->addWidget(detachDatabases);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        tabWidget->addTab(tabMain, QString());
        tabNetwork = new QWidget();
        tabNetwork->setObjectName(QString::fromUtf8("tabNetwork"));
        verticalLayout_Network = new QVBoxLayout(tabNetwork);
        verticalLayout_Network->setObjectName(QString::fromUtf8("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(tabNetwork);
        mapPortUpnp->setObjectName(QString::fromUtf8("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        connectSocks = new QCheckBox(tabNetwork);
        connectSocks->setObjectName(QString::fromUtf8("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_Network = new QHBoxLayout();
        horizontalLayout_Network->setObjectName(QString::fromUtf8("horizontalLayout_Network"));
        proxyIpLabel = new QLabel(tabNetwork);
        proxyIpLabel->setObjectName(QString::fromUtf8("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(tabNetwork);
        proxyIp->setObjectName(QString::fromUtf8("proxyIp"));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(tabNetwork);
        proxyPortLabel->setObjectName(QString::fromUtf8("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(tabNetwork);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));
        proxyPort->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_Network->addWidget(proxyPort);

        socksVersionLabel = new QLabel(tabNetwork);
        socksVersionLabel->setObjectName(QString::fromUtf8("socksVersionLabel"));
        socksVersionLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_Network->addWidget(socksVersionLabel);

        socksVersion = new QValueComboBox(tabNetwork);
        socksVersion->setObjectName(QString::fromUtf8("socksVersion"));

        horizontalLayout_Network->addWidget(socksVersion);

        horizontalSpacer_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Network->addItem(horizontalSpacer_Network);


        verticalLayout_Network->addLayout(horizontalLayout_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        tabWidget->addTab(tabNetwork, QString());
        tabWindow = new QWidget();
        tabWindow->setObjectName(QString::fromUtf8("tabWindow"));
        verticalLayout_Window = new QVBoxLayout(tabWindow);
        verticalLayout_Window->setObjectName(QString::fromUtf8("verticalLayout_Window"));
        minimizeToTray = new QCheckBox(tabWindow);
        minimizeToTray->setObjectName(QString::fromUtf8("minimizeToTray"));

        verticalLayout_Window->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(tabWindow);
        minimizeOnClose->setObjectName(QString::fromUtf8("minimizeOnClose"));

        verticalLayout_Window->addWidget(minimizeOnClose);

        verticalSpacer_Window = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Window->addItem(verticalSpacer_Window);

        tabWidget->addTab(tabWindow, QString());
        tabDisplay = new QWidget();
        tabDisplay->setObjectName(QString::fromUtf8("tabDisplay"));
        verticalLayout_Display = new QVBoxLayout(tabDisplay);
        verticalLayout_Display->setObjectName(QString::fromUtf8("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QString::fromUtf8("horizontalLayout_1_Display"));
        langLabel = new QLabel(tabDisplay);
        langLabel->setObjectName(QString::fromUtf8("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(tabDisplay);
        lang->setObjectName(QString::fromUtf8("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QString::fromUtf8("horizontalLayout_2_Display"));
        unitLabel = new QLabel(tabDisplay);
        unitLabel->setObjectName(QString::fromUtf8("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(tabDisplay);
        unit->setObjectName(QString::fromUtf8("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        displayAddresses = new QCheckBox(tabDisplay);
        displayAddresses->setObjectName(QString::fromUtf8("displayAddresses"));

        verticalLayout_Display->addWidget(displayAddresses);

        beanControlFeatures = new QCheckBox(tabDisplay);
        beanControlFeatures->setObjectName(QString::fromUtf8("beanControlFeatures"));

        verticalLayout_Display->addWidget(beanControlFeatures);

        verticalSpacer_Display = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer_Display);

        tabWidget->addTab(tabDisplay, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QString::fromUtf8("horizontalLayout_Buttons"));
        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        statusLabel->setFont(font2);
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        okButton->setPalette(palette1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans Serif"));
        font3.setPointSize(9);
        font3.setItalic(false);
        okButton->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/receiving_addresses"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/quit"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);

        applyButton = new QPushButton(OptionsDialog);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/synced"), QSize(), QIcon::Normal, QIcon::Off);
        applyButton->setIcon(icon2);
        applyButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(applyButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        transactionFeeLabel->setBuddy(transactionFee);
        reserveBalanceLabel->setBuddy(reserveBalance);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        socksVersionLabel->setBuddy(socksVersion);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", 0, QApplication::UnicodeUTF8));
        transactionFeeInfoLabel->setText(QApplication::translate("OptionsDialog", "Optional transaction fee per kB that helps make sure your transactions are processed quickly. Most transactions are 1 kB. Fee of 5 BITB recommended. Fees help support the BitBean network.", 0, QApplication::UnicodeUTF8));
        transactionFeeLabel->setText(QApplication::translate("OptionsDialog", "Pay transaction &fee", 0, QApplication::UnicodeUTF8));
        reserveBalanceInfoLabel->setText(QApplication::translate("OptionsDialog", "Reserved amount does not participate in sprouting and is therefore spendable at any time.", 0, QApplication::UnicodeUTF8));
        reserveBalanceLabel->setText(QApplication::translate("OptionsDialog", "Reserve", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        bitbeanAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start BitBean after logging in to the system.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        bitbeanAtStartup->setText(QApplication::translate("OptionsDialog", "&Start BitBean on system login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detachDatabases->setToolTip(QApplication::translate("OptionsDialog", "Detach block and address databases at shutdown. This means they can be moved to another data directory, but it slows down shutdown. The wallet is always detached.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        detachDatabases->setText(QApplication::translate("OptionsDialog", "&Detach databases at shutdown", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabMain), QApplication::translate("OptionsDialog", "&Main", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the BitBean client port on the router. This only works when your router supports UPnP and it is enabled.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsDialog", "Map port using &UPnP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsDialog", "Connect to the BitBean network through a SOCKS proxy (e.g. when connecting through Tor).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsDialog", "&Connect through SOCKS proxy:", 0, QApplication::UnicodeUTF8));
        proxyIpLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. 127.0.0.1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("OptionsDialog", "&Port:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        socksVersionLabel->setText(QApplication::translate("OptionsDialog", "SOCKS &Version:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        socksVersion->setToolTip(QApplication::translate("OptionsDialog", "SOCKS version of the proxy (e.g. 5)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabNetwork), QApplication::translate("OptionsDialog", "&Network", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Quit in the menu.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsDialog", "M&inimize on close", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabWindow), QApplication::translate("OptionsDialog", "&Window", 0, QApplication::UnicodeUTF8));
        langLabel->setText(QApplication::translate("OptionsDialog", "User Interface &language:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting BitBean.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        unitLabel->setText(QApplication::translate("OptionsDialog", "&Unit to show amounts in:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending beans.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        displayAddresses->setToolTip(QApplication::translate("OptionsDialog", "Whether to show BitBean addresses in the transaction list or not.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        displayAddresses->setText(QApplication::translate("OptionsDialog", "&Display addresses in transaction list", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        beanControlFeatures->setToolTip(QApplication::translate("OptionsDialog", "Whether to show bean control features or not.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        beanControlFeatures->setText(QApplication::translate("OptionsDialog", "Display bean &control features (experts only!)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDisplay), QApplication::translate("OptionsDialog", "&Display", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("OptionsDialog", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("OptionsDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
        applyButton->setText(QApplication::translate("OptionsDialog", "&Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H
