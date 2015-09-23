/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *clientName;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *label_14;
    QLabel *openSSLVersion;
    QLabel *label_12;
    QLabel *buildDate;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_8;
    QCheckBox *isTestNet;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *label_4;
    QLabel *totalBlocks;
    QLabel *label_2;
    QLabel *lastBlockTime;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QPushButton *openConfigfileButton;
    QLabel *labelCLOptions;
    QPushButton *showCLOptionsButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;
    QPushButton *closeButton;

    void setupUi(QDialog *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QString::fromUtf8("RPCConsole"));
        RPCConsole->resize(745, 614);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RPCConsole->sizePolicy().hasHeightForWidth());
        RPCConsole->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(211, 238, 175, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(159, 213, 85, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush3(QColor(0, 0, 128, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        RPCConsole->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(12);
        RPCConsole->setFont(font);
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(9, 9, 731, 545));
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tab_info = new QWidget();
        tab_info->setObjectName(QString::fromUtf8("tab_info"));
        formLayout = new QFormLayout(tab_info);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QString::fromUtf8("clientName"));
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(1, QFormLayout::FieldRole, clientName);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QString::fromUtf8("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(2, QFormLayout::FieldRole, clientVersion);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setIndent(10);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_14);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QString::fromUtf8("openSSLVersion"));
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(3, QFormLayout::FieldRole, openSSLVersion);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_12);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QString::fromUtf8("buildDate"));
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(4, QFormLayout::FieldRole, buildDate);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_13);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QString::fromUtf8("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(5, QFormLayout::FieldRole, startupTime);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_11);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QString::fromUtf8("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(7, QFormLayout::FieldRole, numberOfConnections);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_8);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QString::fromUtf8("isTestNet"));
        isTestNet->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, isTestNet);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        formLayout->setWidget(9, QFormLayout::LabelRole, label_10);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_3);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QString::fromUtf8("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(10, QFormLayout::FieldRole, numberOfBlocks);

        label_4 = new QLabel(tab_info);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_4);

        totalBlocks = new QLabel(tab_info);
        totalBlocks->setObjectName(QString::fromUtf8("totalBlocks"));
        totalBlocks->setCursor(QCursor(Qt::IBeamCursor));
        totalBlocks->setTextFormat(Qt::PlainText);
        totalBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(11, QFormLayout::FieldRole, totalBlocks);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_2);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QString::fromUtf8("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout->setWidget(12, QFormLayout::FieldRole, lastBlockTime);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::LabelRole, verticalSpacer_2);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QString::fromUtf8("labelDebugLogfile"));
        labelDebugLogfile->setFont(font1);

        formLayout->setWidget(14, QFormLayout::LabelRole, labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QString::fromUtf8("openDebugLogfileButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openDebugLogfileButton->sizePolicy().hasHeightForWidth());
        openDebugLogfileButton->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(9);
        openDebugLogfileButton->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/overview"), QSize(), QIcon::Normal, QIcon::Off);
        openDebugLogfileButton->setIcon(icon);
        openDebugLogfileButton->setAutoDefault(false);

        formLayout->setWidget(15, QFormLayout::LabelRole, openDebugLogfileButton);

        openConfigfileButton = new QPushButton(tab_info);
        openConfigfileButton->setObjectName(QString::fromUtf8("openConfigfileButton"));
        sizePolicy1.setHeightForWidth(openConfigfileButton->sizePolicy().hasHeightForWidth());
        openConfigfileButton->setSizePolicy(sizePolicy1);
        openConfigfileButton->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/signmessage"), QSize(), QIcon::Normal, QIcon::Off);
        openConfigfileButton->setIcon(icon1);
        openConfigfileButton->setAutoDefault(false);

        formLayout->setWidget(15, QFormLayout::FieldRole, openConfigfileButton);

        labelCLOptions = new QLabel(tab_info);
        labelCLOptions->setObjectName(QString::fromUtf8("labelCLOptions"));
        labelCLOptions->setFont(font1);

        formLayout->setWidget(16, QFormLayout::LabelRole, labelCLOptions);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QString::fromUtf8("showCLOptionsButton"));
        sizePolicy1.setHeightForWidth(showCLOptionsButton->sizePolicy().hasHeightForWidth());
        showCLOptionsButton->setSizePolicy(sizePolicy1);
        showCLOptionsButton->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/debugwindow"), QSize(), QIcon::Normal, QIcon::Off);
        showCLOptionsButton->setIcon(icon2);
        showCLOptionsButton->setAutoDefault(false);

        formLayout->setWidget(17, QFormLayout::LabelRole, showCLOptionsButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(18, QFormLayout::LabelRole, verticalSpacer);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QString::fromUtf8("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QString::fromUtf8("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon3);
        clearButton->setShortcut(QString::fromUtf8("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());
        closeButton = new QPushButton(RPCConsole);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setEnabled(true);
        closeButton->setGeometry(QRect(330, 570, 80, 33));
        sizePolicy1.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy1);
        closeButton->setFont(font2);
        closeButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/quit"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon4);
        closeButton->setAutoDefault(false);
        closeButton->raise();
        tabWidget->raise();

        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QDialog *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "BitBean - Debug window", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RPCConsole", "BitBean Core", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", 0, QApplication::UnicodeUTF8));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", 0, QApplication::UnicodeUTF8));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", 0, QApplication::UnicodeUTF8));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", 0, QApplication::UnicodeUTF8));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", 0, QApplication::UnicodeUTF8));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RPCConsole", "Network", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", 0, QApplication::UnicodeUTF8));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("RPCConsole", "On testnet", 0, QApplication::UnicodeUTF8));
        isTestNet->setText(QString());
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", 0, QApplication::UnicodeUTF8));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RPCConsole", "Estimated total blocks", 0, QApplication::UnicodeUTF8));
        totalBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RPCConsole", "Last block time", 0, QApplication::UnicodeUTF8));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the BitBean debug log file from the current data directory. This can take a few seconds for large log files.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        openConfigfileButton->setToolTip(QApplication::translate("RPCConsole", "Open BitBean Configuration file from the current data directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openConfigfileButton->setText(QApplication::translate("RPCConsole", "&Edit Config File", 0, QApplication::UnicodeUTF8));
        labelCLOptions->setText(QApplication::translate("RPCConsole", "Command-line options", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole", "Show the BitBean-Qt help message to get a list with possible BitBean command-line options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole", "&Show", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        closeButton->setToolTip(QApplication::translate("RPCConsole", "Close window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        closeButton->setText(QApplication::translate("RPCConsole", "&Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
