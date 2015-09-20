/********************************************************************************
** Form generated from reading UI file 'sendbeansdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDBEANSDIALOG_H
#define UI_SENDBEANSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendBeansDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBeanControl;
    QVBoxLayout *verticalLayoutBeanControl2;
    QVBoxLayout *verticalLayoutBeanControl;
    QHBoxLayout *horizontalLayoutBeanControl1;
    QLabel *labelBeanControlFeatures;
    QHBoxLayout *horizontalLayoutBeanControl2;
    QPushButton *pushButtonBeanControl;
    QLabel *labelBeanControlAutomaticallySelected;
    QLabel *labelBeanControlInsuffFunds;
    QSpacerItem *horizontalSpacerBeanControl;
    QWidget *widgetBeanControl;
    QHBoxLayout *horizontalLayoutBeanControl5;
    QHBoxLayout *horizontalLayoutBeanControl3;
    QFormLayout *formLayoutBeanControl1;
    QLabel *labelBeanControlQuantityText;
    QLabel *labelBeanControlQuantity;
    QLabel *labelBeanControlBytesText;
    QLabel *labelBeanControlBytes;
    QFormLayout *formLayoutBeanControl2;
    QLabel *labelBeanControlAmountText;
    QLabel *labelBeanControlAmount;
    QLabel *labelBeanControlPriorityText;
    QLabel *labelBeanControlPriority;
    QFormLayout *formLayoutBeanControl3;
    QLabel *labelBeanControlFeeText;
    QLabel *labelBeanControlFee;
    QLabel *labelBeanControlLowOutputText;
    QLabel *labelBeanControlLowOutput;
    QFormLayout *formLayoutBeanControl4;
    QLabel *labelBeanControlAfterFeeText;
    QLabel *labelBeanControlAfterFee;
    QLabel *labelBeanControlChangeText;
    QLabel *labelBeanControlChange;
    QHBoxLayout *horizontalLayoutBeanControl4;
    QCheckBox *checkBoxBeanControlChange;
    QLineEdit *lineEditBeanControlChange;
    QLabel *labelBeanControlChangeLabel;
    QSpacerItem *verticalSpacerBeanControl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;

    void setupUi(QDialog *SendBeansDialog)
    {
        if (SendBeansDialog->objectName().isEmpty())
            SendBeansDialog->setObjectName(QString::fromUtf8("SendBeansDialog"));
        SendBeansDialog->resize(850, 400);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(211, 238, 175, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        SendBeansDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(10);
        SendBeansDialog->setFont(font);
        verticalLayout = new QVBoxLayout(SendBeansDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameBeanControl = new QFrame(SendBeansDialog);
        frameBeanControl->setObjectName(QString::fromUtf8("frameBeanControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameBeanControl->sizePolicy().hasHeightForWidth());
        frameBeanControl->setSizePolicy(sizePolicy);
        frameBeanControl->setMaximumSize(QSize(16777215, 16777215));
        frameBeanControl->setFrameShape(QFrame::StyledPanel);
        frameBeanControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutBeanControl2 = new QVBoxLayout(frameBeanControl);
        verticalLayoutBeanControl2->setSpacing(6);
        verticalLayoutBeanControl2->setObjectName(QString::fromUtf8("verticalLayoutBeanControl2"));
        verticalLayoutBeanControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutBeanControl = new QVBoxLayout();
        verticalLayoutBeanControl->setSpacing(0);
        verticalLayoutBeanControl->setObjectName(QString::fromUtf8("verticalLayoutBeanControl"));
        verticalLayoutBeanControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutBeanControl1 = new QHBoxLayout();
        horizontalLayoutBeanControl1->setObjectName(QString::fromUtf8("horizontalLayoutBeanControl1"));
        horizontalLayoutBeanControl1->setContentsMargins(-1, -1, -1, 15);
        labelBeanControlFeatures = new QLabel(frameBeanControl);
        labelBeanControlFeatures->setObjectName(QString::fromUtf8("labelBeanControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBeanControlFeatures->sizePolicy().hasHeightForWidth());
        labelBeanControlFeatures->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Liberation Sans"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        labelBeanControlFeatures->setFont(font1);
        labelBeanControlFeatures->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        horizontalLayoutBeanControl1->addWidget(labelBeanControlFeatures);


        verticalLayoutBeanControl->addLayout(horizontalLayoutBeanControl1);

        horizontalLayoutBeanControl2 = new QHBoxLayout();
        horizontalLayoutBeanControl2->setSpacing(8);
        horizontalLayoutBeanControl2->setObjectName(QString::fromUtf8("horizontalLayoutBeanControl2"));
        horizontalLayoutBeanControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonBeanControl = new QPushButton(frameBeanControl);
        pushButtonBeanControl->setObjectName(QString::fromUtf8("pushButtonBeanControl"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        pushButtonBeanControl->setPalette(palette1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(9);
        pushButtonBeanControl->setFont(font2);
        pushButtonBeanControl->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/receiving_addresses"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBeanControl->setIcon(icon);

        horizontalLayoutBeanControl2->addWidget(pushButtonBeanControl);

        labelBeanControlAutomaticallySelected = new QLabel(frameBeanControl);
        labelBeanControlAutomaticallySelected->setObjectName(QString::fromUtf8("labelBeanControlAutomaticallySelected"));
        QFont font3;
        font3.setPointSize(12);
        labelBeanControlAutomaticallySelected->setFont(font3);
        labelBeanControlAutomaticallySelected->setMargin(5);

        horizontalLayoutBeanControl2->addWidget(labelBeanControlAutomaticallySelected);

        labelBeanControlInsuffFunds = new QLabel(frameBeanControl);
        labelBeanControlInsuffFunds->setObjectName(QString::fromUtf8("labelBeanControlInsuffFunds"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        labelBeanControlInsuffFunds->setFont(font4);
        labelBeanControlInsuffFunds->setStyleSheet(QString::fromUtf8("color:red;font-weight:bold;"));
        labelBeanControlInsuffFunds->setMargin(5);

        horizontalLayoutBeanControl2->addWidget(labelBeanControlInsuffFunds);

        horizontalSpacerBeanControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutBeanControl2->addItem(horizontalSpacerBeanControl);


        verticalLayoutBeanControl->addLayout(horizontalLayoutBeanControl2);

        widgetBeanControl = new QWidget(frameBeanControl);
        widgetBeanControl->setObjectName(QString::fromUtf8("widgetBeanControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetBeanControl->sizePolicy().hasHeightForWidth());
        widgetBeanControl->setSizePolicy(sizePolicy2);
        widgetBeanControl->setMinimumSize(QSize(0, 0));
        widgetBeanControl->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutBeanControl5 = new QHBoxLayout(widgetBeanControl);
        horizontalLayoutBeanControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutBeanControl5->setObjectName(QString::fromUtf8("horizontalLayoutBeanControl5"));
        horizontalLayoutBeanControl3 = new QHBoxLayout();
        horizontalLayoutBeanControl3->setSpacing(20);
        horizontalLayoutBeanControl3->setObjectName(QString::fromUtf8("horizontalLayoutBeanControl3"));
        horizontalLayoutBeanControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutBeanControl1 = new QFormLayout();
        formLayoutBeanControl1->setObjectName(QString::fromUtf8("formLayoutBeanControl1"));
        formLayoutBeanControl1->setHorizontalSpacing(10);
        formLayoutBeanControl1->setVerticalSpacing(14);
        formLayoutBeanControl1->setContentsMargins(10, 4, 6, -1);
        labelBeanControlQuantityText = new QLabel(widgetBeanControl);
        labelBeanControlQuantityText->setObjectName(QString::fromUtf8("labelBeanControlQuantityText"));
        labelBeanControlQuantityText->setFont(font1);
        labelBeanControlQuantityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelBeanControlQuantityText->setMargin(0);

        formLayoutBeanControl1->setWidget(0, QFormLayout::LabelRole, labelBeanControlQuantityText);

        labelBeanControlQuantity = new QLabel(widgetBeanControl);
        labelBeanControlQuantity->setObjectName(QString::fromUtf8("labelBeanControlQuantity"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Monospace"));
        font5.setPointSize(10);
        labelBeanControlQuantity->setFont(font5);
        labelBeanControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlQuantity->setMargin(0);
        labelBeanControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl1->setWidget(0, QFormLayout::FieldRole, labelBeanControlQuantity);

        labelBeanControlBytesText = new QLabel(widgetBeanControl);
        labelBeanControlBytesText->setObjectName(QString::fromUtf8("labelBeanControlBytesText"));
        labelBeanControlBytesText->setFont(font1);
        labelBeanControlBytesText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl1->setWidget(1, QFormLayout::LabelRole, labelBeanControlBytesText);

        labelBeanControlBytes = new QLabel(widgetBeanControl);
        labelBeanControlBytes->setObjectName(QString::fromUtf8("labelBeanControlBytes"));
        labelBeanControlBytes->setFont(font5);
        labelBeanControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl1->setWidget(1, QFormLayout::FieldRole, labelBeanControlBytes);


        horizontalLayoutBeanControl3->addLayout(formLayoutBeanControl1);

        formLayoutBeanControl2 = new QFormLayout();
        formLayoutBeanControl2->setObjectName(QString::fromUtf8("formLayoutBeanControl2"));
        formLayoutBeanControl2->setHorizontalSpacing(10);
        formLayoutBeanControl2->setVerticalSpacing(14);
        formLayoutBeanControl2->setContentsMargins(6, 4, 6, -1);
        labelBeanControlAmountText = new QLabel(widgetBeanControl);
        labelBeanControlAmountText->setObjectName(QString::fromUtf8("labelBeanControlAmountText"));
        labelBeanControlAmountText->setFont(font1);
        labelBeanControlAmountText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelBeanControlAmountText->setMargin(0);

        formLayoutBeanControl2->setWidget(0, QFormLayout::LabelRole, labelBeanControlAmountText);

        labelBeanControlAmount = new QLabel(widgetBeanControl);
        labelBeanControlAmount->setObjectName(QString::fromUtf8("labelBeanControlAmount"));
        labelBeanControlAmount->setFont(font5);
        labelBeanControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl2->setWidget(0, QFormLayout::FieldRole, labelBeanControlAmount);

        labelBeanControlPriorityText = new QLabel(widgetBeanControl);
        labelBeanControlPriorityText->setObjectName(QString::fromUtf8("labelBeanControlPriorityText"));
        labelBeanControlPriorityText->setFont(font1);
        labelBeanControlPriorityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl2->setWidget(1, QFormLayout::LabelRole, labelBeanControlPriorityText);

        labelBeanControlPriority = new QLabel(widgetBeanControl);
        labelBeanControlPriority->setObjectName(QString::fromUtf8("labelBeanControlPriority"));
        labelBeanControlPriority->setFont(font5);
        labelBeanControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl2->setWidget(1, QFormLayout::FieldRole, labelBeanControlPriority);


        horizontalLayoutBeanControl3->addLayout(formLayoutBeanControl2);

        formLayoutBeanControl3 = new QFormLayout();
        formLayoutBeanControl3->setObjectName(QString::fromUtf8("formLayoutBeanControl3"));
        formLayoutBeanControl3->setHorizontalSpacing(10);
        formLayoutBeanControl3->setVerticalSpacing(14);
        formLayoutBeanControl3->setContentsMargins(6, 4, 6, -1);
        labelBeanControlFeeText = new QLabel(widgetBeanControl);
        labelBeanControlFeeText->setObjectName(QString::fromUtf8("labelBeanControlFeeText"));
        labelBeanControlFeeText->setFont(font1);
        labelBeanControlFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelBeanControlFeeText->setMargin(0);

        formLayoutBeanControl3->setWidget(0, QFormLayout::LabelRole, labelBeanControlFeeText);

        labelBeanControlFee = new QLabel(widgetBeanControl);
        labelBeanControlFee->setObjectName(QString::fromUtf8("labelBeanControlFee"));
        labelBeanControlFee->setFont(font5);
        labelBeanControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl3->setWidget(0, QFormLayout::FieldRole, labelBeanControlFee);

        labelBeanControlLowOutputText = new QLabel(widgetBeanControl);
        labelBeanControlLowOutputText->setObjectName(QString::fromUtf8("labelBeanControlLowOutputText"));
        labelBeanControlLowOutputText->setFont(font1);
        labelBeanControlLowOutputText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl3->setWidget(1, QFormLayout::LabelRole, labelBeanControlLowOutputText);

        labelBeanControlLowOutput = new QLabel(widgetBeanControl);
        labelBeanControlLowOutput->setObjectName(QString::fromUtf8("labelBeanControlLowOutput"));
        labelBeanControlLowOutput->setFont(font5);
        labelBeanControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl3->setWidget(1, QFormLayout::FieldRole, labelBeanControlLowOutput);


        horizontalLayoutBeanControl3->addLayout(formLayoutBeanControl3);

        formLayoutBeanControl4 = new QFormLayout();
        formLayoutBeanControl4->setObjectName(QString::fromUtf8("formLayoutBeanControl4"));
        formLayoutBeanControl4->setHorizontalSpacing(10);
        formLayoutBeanControl4->setVerticalSpacing(14);
        formLayoutBeanControl4->setContentsMargins(6, 4, 6, -1);
        labelBeanControlAfterFeeText = new QLabel(widgetBeanControl);
        labelBeanControlAfterFeeText->setObjectName(QString::fromUtf8("labelBeanControlAfterFeeText"));
        labelBeanControlAfterFeeText->setFont(font1);
        labelBeanControlAfterFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelBeanControlAfterFeeText->setMargin(0);

        formLayoutBeanControl4->setWidget(0, QFormLayout::LabelRole, labelBeanControlAfterFeeText);

        labelBeanControlAfterFee = new QLabel(widgetBeanControl);
        labelBeanControlAfterFee->setObjectName(QString::fromUtf8("labelBeanControlAfterFee"));
        labelBeanControlAfterFee->setFont(font5);
        labelBeanControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl4->setWidget(0, QFormLayout::FieldRole, labelBeanControlAfterFee);

        labelBeanControlChangeText = new QLabel(widgetBeanControl);
        labelBeanControlChangeText->setObjectName(QString::fromUtf8("labelBeanControlChangeText"));
        labelBeanControlChangeText->setFont(font1);
        labelBeanControlChangeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl4->setWidget(1, QFormLayout::LabelRole, labelBeanControlChangeText);

        labelBeanControlChange = new QLabel(widgetBeanControl);
        labelBeanControlChange->setObjectName(QString::fromUtf8("labelBeanControlChange"));
        labelBeanControlChange->setFont(font5);
        labelBeanControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl4->setWidget(1, QFormLayout::FieldRole, labelBeanControlChange);


        horizontalLayoutBeanControl3->addLayout(formLayoutBeanControl4);

        horizontalLayoutBeanControl3->setStretch(3, 1);

        horizontalLayoutBeanControl5->addLayout(horizontalLayoutBeanControl3);


        verticalLayoutBeanControl->addWidget(widgetBeanControl);

        horizontalLayoutBeanControl4 = new QHBoxLayout();
        horizontalLayoutBeanControl4->setSpacing(12);
        horizontalLayoutBeanControl4->setObjectName(QString::fromUtf8("horizontalLayoutBeanControl4"));
        horizontalLayoutBeanControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutBeanControl4->setContentsMargins(-1, 5, 5, -1);
        checkBoxBeanControlChange = new QCheckBox(frameBeanControl);
        checkBoxBeanControlChange->setObjectName(QString::fromUtf8("checkBoxBeanControlChange"));
        checkBoxBeanControlChange->setFont(font3);

        horizontalLayoutBeanControl4->addWidget(checkBoxBeanControlChange);

        lineEditBeanControlChange = new QLineEdit(frameBeanControl);
        lineEditBeanControlChange->setObjectName(QString::fromUtf8("lineEditBeanControlChange"));
        lineEditBeanControlChange->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEditBeanControlChange->sizePolicy().hasHeightForWidth());
        lineEditBeanControlChange->setSizePolicy(sizePolicy3);

        horizontalLayoutBeanControl4->addWidget(lineEditBeanControlChange);

        labelBeanControlChangeLabel = new QLabel(frameBeanControl);
        labelBeanControlChangeLabel->setObjectName(QString::fromUtf8("labelBeanControlChangeLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(labelBeanControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelBeanControlChangeLabel->setSizePolicy(sizePolicy4);
        labelBeanControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelBeanControlChangeLabel->setMargin(3);

        horizontalLayoutBeanControl4->addWidget(labelBeanControlChangeLabel);


        verticalLayoutBeanControl->addLayout(horizontalLayoutBeanControl4);

        verticalSpacerBeanControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutBeanControl->addItem(verticalSpacerBeanControl);

        verticalLayoutBeanControl->setStretch(4, 1);

        verticalLayoutBeanControl2->addLayout(verticalLayoutBeanControl);


        verticalLayout->addWidget(frameBeanControl);

        scrollArea = new QScrollArea(SendBeansDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 828, 144));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QString::fromUtf8("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(SendBeansDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        addButton->setPalette(palette2);
        addButton->setFont(font2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        clearButton = new QPushButton(SendBeansDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy5);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        clearButton->setPalette(palette3);
        clearButton->setFont(font2);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon2);
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SendBeansDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy6);
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label->setFont(font6);

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(SendBeansDialog);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        sizePolicy6.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy6);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Monospace"));
        font7.setPointSize(12);
        labelBalance->setFont(font7);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(SendBeansDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        sendButton->setPalette(palette4);
        sendButton->setFont(font2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon3);
        sendButton->setDefault(true);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(SendBeansDialog);

        QMetaObject::connectSlotsByName(SendBeansDialog);
    } // setupUi

    void retranslateUi(QDialog *SendBeansDialog)
    {
        SendBeansDialog->setWindowTitle(QApplication::translate("SendBeansDialog", "Send Beans", 0, QApplication::UnicodeUTF8));
        labelBeanControlFeatures->setText(QApplication::translate("SendBeansDialog", "Bean Control Features", 0, QApplication::UnicodeUTF8));
        pushButtonBeanControl->setText(QApplication::translate("SendBeansDialog", "Inputs...", 0, QApplication::UnicodeUTF8));
        labelBeanControlAutomaticallySelected->setText(QApplication::translate("SendBeansDialog", "automatically selected", 0, QApplication::UnicodeUTF8));
        labelBeanControlInsuffFunds->setText(QApplication::translate("SendBeansDialog", "Insufficient funds!", 0, QApplication::UnicodeUTF8));
        labelBeanControlQuantityText->setText(QApplication::translate("SendBeansDialog", "Quantity:", 0, QApplication::UnicodeUTF8));
        labelBeanControlQuantity->setText(QApplication::translate("SendBeansDialog", "0", 0, QApplication::UnicodeUTF8));
        labelBeanControlBytesText->setText(QApplication::translate("SendBeansDialog", "Bytes:", 0, QApplication::UnicodeUTF8));
        labelBeanControlBytes->setText(QApplication::translate("SendBeansDialog", "0", 0, QApplication::UnicodeUTF8));
        labelBeanControlAmountText->setText(QApplication::translate("SendBeansDialog", "Amount:", 0, QApplication::UnicodeUTF8));
        labelBeanControlAmount->setText(QApplication::translate("SendBeansDialog", "0.00 BC", 0, QApplication::UnicodeUTF8));
        labelBeanControlPriorityText->setText(QApplication::translate("SendBeansDialog", "Priority:", 0, QApplication::UnicodeUTF8));
        labelBeanControlPriority->setText(QApplication::translate("SendBeansDialog", "medium", 0, QApplication::UnicodeUTF8));
        labelBeanControlFeeText->setText(QApplication::translate("SendBeansDialog", "Fee:", 0, QApplication::UnicodeUTF8));
        labelBeanControlFee->setText(QApplication::translate("SendBeansDialog", "0.00 BC", 0, QApplication::UnicodeUTF8));
        labelBeanControlLowOutputText->setText(QApplication::translate("SendBeansDialog", "Low Output:", 0, QApplication::UnicodeUTF8));
        labelBeanControlLowOutput->setText(QApplication::translate("SendBeansDialog", "no", 0, QApplication::UnicodeUTF8));
        labelBeanControlAfterFeeText->setText(QApplication::translate("SendBeansDialog", "After Fee:", 0, QApplication::UnicodeUTF8));
        labelBeanControlAfterFee->setText(QApplication::translate("SendBeansDialog", "0.00 BC", 0, QApplication::UnicodeUTF8));
        labelBeanControlChangeText->setText(QApplication::translate("SendBeansDialog", "Change", 0, QApplication::UnicodeUTF8));
        labelBeanControlChange->setText(QApplication::translate("SendBeansDialog", "0.00 BC", 0, QApplication::UnicodeUTF8));
        checkBoxBeanControlChange->setText(QApplication::translate("SendBeansDialog", "custom change address", 0, QApplication::UnicodeUTF8));
        labelBeanControlChangeLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendBeansDialog", "Send to multiple recipients at once", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("SendBeansDialog", "Add &Recipient", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendBeansDialog", "Remove all transaction fields", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendBeansDialog", "Clear &All", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendBeansDialog", "Balance:", 0, QApplication::UnicodeUTF8));
        labelBalance->setText(QApplication::translate("SendBeansDialog", "123.456 BC", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendBeansDialog", "Confirm the send action", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendBeansDialog", "S&end", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendBeansDialog: public Ui_SendBeansDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDBEANSDIALOG_H
