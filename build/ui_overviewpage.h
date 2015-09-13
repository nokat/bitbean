/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QFormLayout *formLayout_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelGroupBeanVault;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *labelSpendableText;
    QLabel *labelSpendable;
    QLabel *labelSproutingText;
    QLabel *labelSprouting;
    QLabel *labelUnconfirmedText;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QLabel *labelTotalText;
    QLabel *labelTotal;
    QGroupBox *groupBoxBitBNetwork;
    QFormLayout *formLayout;
    QLabel *labelStalkheightText;
    QLabel *labelSproutDiffText;
    QLabel *labelBeanWeightText;
    QLabel *labelConnectionsText;
    QLabel *labelTotalBeansText;
    QLabel *stalkBox;
    QLabel *sproutBox;
    QLabel *weightBox;
    QLabel *connectionBox;
    QLabel *beanBox;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(643, 410);
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
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush4(QColor(0, 0, 128, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        OverviewPage->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(10);
        OverviewPage->setFont(font);
        formLayout_3 = new QFormLayout(OverviewPage);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelGroupBeanVault = new QLabel(frame);
        labelGroupBeanVault->setObjectName(QString::fromUtf8("labelGroupBeanVault"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Sans"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        labelGroupBeanVault->setFont(font1);
        labelGroupBeanVault->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(labelGroupBeanVault);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Liberation Sans"));
        font2.setPointSize(10);
        font2.setItalic(true);
        labelWalletStatus->setFont(font2);
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(Not Syncronized)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        labelSpendableText = new QLabel(frame);
        labelSpendableText->setObjectName(QString::fromUtf8("labelSpendableText"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Sans"));
        font3.setPointSize(12);
        font3.setItalic(false);
        labelSpendableText->setFont(font3);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelSpendableText);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QString::fromUtf8("labelSpendable"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Sans"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        labelSpendable->setFont(font4);
        labelSpendable->setCursor(QCursor(Qt::IBeamCursor));
        labelSpendable->setText(QString::fromUtf8("0 BitB"));
        labelSpendable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelSpendable);

        labelSproutingText = new QLabel(frame);
        labelSproutingText->setObjectName(QString::fromUtf8("labelSproutingText"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Liberation Sans"));
        font5.setPointSize(12);
        labelSproutingText->setFont(font5);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelSproutingText);

        labelSprouting = new QLabel(frame);
        labelSprouting->setObjectName(QString::fromUtf8("labelSprouting"));
        labelSprouting->setFont(font4);
        labelSprouting->setCursor(QCursor(Qt::IBeamCursor));
        labelSprouting->setText(QString::fromUtf8("0 BitB"));
        labelSprouting->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelSprouting);

        labelUnconfirmedText = new QLabel(frame);
        labelUnconfirmedText->setObjectName(QString::fromUtf8("labelUnconfirmedText"));
        labelUnconfirmedText->setFont(font5);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelUnconfirmedText);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font4);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0 BitB"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        labelImmatureText->setFont(font5);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font4);
        labelImmature->setText(QString::fromUtf8("0 BitB"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QString::fromUtf8("labelTotalText"));
        labelTotalText->setFont(font5);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelTotalText);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QString::fromUtf8("labelTotal"));
        labelTotal->setFont(font4);
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0 BitB"));
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, labelTotal);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(frame);

        groupBoxBitBNetwork = new QGroupBox(OverviewPage);
        groupBoxBitBNetwork->setObjectName(QString::fromUtf8("groupBoxBitBNetwork"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Liberation Sans"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setWeight(75);
        groupBoxBitBNetwork->setFont(font6);
        formLayout = new QFormLayout(groupBoxBitBNetwork);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelStalkheightText = new QLabel(groupBoxBitBNetwork);
        labelStalkheightText->setObjectName(QString::fromUtf8("labelStalkheightText"));
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(false);
        font7.setWeight(50);
        labelStalkheightText->setFont(font7);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelStalkheightText);

        labelSproutDiffText = new QLabel(groupBoxBitBNetwork);
        labelSproutDiffText->setObjectName(QString::fromUtf8("labelSproutDiffText"));
        labelSproutDiffText->setFont(font7);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelSproutDiffText);

        labelBeanWeightText = new QLabel(groupBoxBitBNetwork);
        labelBeanWeightText->setObjectName(QString::fromUtf8("labelBeanWeightText"));
        labelBeanWeightText->setFont(font7);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelBeanWeightText);

        labelConnectionsText = new QLabel(groupBoxBitBNetwork);
        labelConnectionsText->setObjectName(QString::fromUtf8("labelConnectionsText"));
        labelConnectionsText->setFont(font7);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelConnectionsText);

        labelTotalBeansText = new QLabel(groupBoxBitBNetwork);
        labelTotalBeansText->setObjectName(QString::fromUtf8("labelTotalBeansText"));
        labelTotalBeansText->setFont(font7);

        formLayout->setWidget(5, QFormLayout::LabelRole, labelTotalBeansText);

        stalkBox = new QLabel(groupBoxBitBNetwork);
        stalkBox->setObjectName(QString::fromUtf8("stalkBox"));
        QFont font8;
        font8.setPointSize(12);
        stalkBox->setFont(font8);

        formLayout->setWidget(0, QFormLayout::FieldRole, stalkBox);

        sproutBox = new QLabel(groupBoxBitBNetwork);
        sproutBox->setObjectName(QString::fromUtf8("sproutBox"));
        sproutBox->setFont(font8);

        formLayout->setWidget(2, QFormLayout::FieldRole, sproutBox);

        weightBox = new QLabel(groupBoxBitBNetwork);
        weightBox->setObjectName(QString::fromUtf8("weightBox"));
        weightBox->setFont(font8);

        formLayout->setWidget(3, QFormLayout::FieldRole, weightBox);

        connectionBox = new QLabel(groupBoxBitBNetwork);
        connectionBox->setObjectName(QString::fromUtf8("connectionBox"));
        connectionBox->setFont(font8);

        formLayout->setWidget(4, QFormLayout::FieldRole, connectionBox);

        beanBox = new QLabel(groupBoxBitBNetwork);
        beanBox->setObjectName(QString::fromUtf8("beanBox"));
        beanBox->setFont(font8);

        formLayout->setWidget(5, QFormLayout::FieldRole, beanBox);


        verticalLayout_2->addWidget(groupBoxBitBNetwork);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMaximumSize(QSize(16777200, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font6);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setFont(font2);
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(Not Syncronized)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setFont(font);
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; }"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);
        listTransactions->setResizeMode(QListView::Adjust);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, verticalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        labelGroupBeanVault->setText(QApplication::translate("OverviewPage", "Bean Vault", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the BitBean network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelSpendableText->setText(QApplication::translate("OverviewPage", "Spendable:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelSpendable->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelSproutingText->setText(QApplication::translate("OverviewPage", "Sprouting:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelSprouting->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Sprouting beans that do not yet count toward the current total balance.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelUnconfirmedText->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Beans that have yet to be confirmed, and not currently counted towards the total balance.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Newly sprouted beans that have not matured yet.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>The current total number of beans in your Bean Vault.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBoxBitBNetwork->setTitle(QApplication::translate("OverviewPage", "BitBean Network", 0, QApplication::UnicodeUTF8));
        labelStalkheightText->setText(QApplication::translate("OverviewPage", "Bean Stalk Height:", 0, QApplication::UnicodeUTF8));
        labelSproutDiffText->setText(QApplication::translate("OverviewPage", "Sprouting Difficulty:", 0, QApplication::UnicodeUTF8));
        labelBeanWeightText->setText(QApplication::translate("OverviewPage", "Bean Weight:", 0, QApplication::UnicodeUTF8));
        labelConnectionsText->setText(QApplication::translate("OverviewPage", "Connections:", 0, QApplication::UnicodeUTF8));
        labelTotalBeansText->setText(QApplication::translate("OverviewPage", "Total Beans:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        stalkBox->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Block height of BitBean Network.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stalkBox->setText(QApplication::translate("OverviewPage", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sproutBox->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Difficulty of sprouting new beans.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sproutBox->setText(QApplication::translate("OverviewPage", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        weightBox->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Cummaltive weight of BitBeans that are competing to sprout on the Network.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        weightBox->setText(QApplication::translate("OverviewPage", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        connectionBox->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Total direct connections with other stalks on the network.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        connectionBox->setText(QApplication::translate("OverviewPage", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        beanBox->setToolTip(QApplication::translate("OverviewPage", "<html><head/><body><p>Total Bean Monetary supply.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        beanBox->setText(QApplication::translate("OverviewPage", "0", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "<html><head/><body><p>New Transactions</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the BitBean network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
