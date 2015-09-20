/********************************************************************************
** Form generated from reading UI file 'beancontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEANCONTROLDIALOG_H
#define UI_BEANCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "beancontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_BeanControlDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayoutTop;
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
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutPanel;
    QPushButton *pushButtonSelectAll;
    QRadioButton *radioTreeMode;
    QRadioButton *radioListMode;
    QSpacerItem *horizontalSpacer;
    BeanControlTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BeanControlDialog)
    {
        if (BeanControlDialog->objectName().isEmpty())
            BeanControlDialog->setObjectName(QString::fromUtf8("BeanControlDialog"));
        BeanControlDialog->resize(1000, 500);
        QPalette palette;
        QBrush brush(QColor(159, 213, 85, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush2(QColor(211, 238, 175, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        BeanControlDialog->setPalette(palette);
        verticalLayout = new QVBoxLayout(BeanControlDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayoutTop = new QHBoxLayout();
        horizontalLayoutTop->setObjectName(QString::fromUtf8("horizontalLayoutTop"));
        horizontalLayoutTop->setContentsMargins(-1, 0, -1, 10);
        formLayoutBeanControl1 = new QFormLayout();
        formLayoutBeanControl1->setObjectName(QString::fromUtf8("formLayoutBeanControl1"));
        formLayoutBeanControl1->setHorizontalSpacing(10);
        formLayoutBeanControl1->setVerticalSpacing(10);
        formLayoutBeanControl1->setContentsMargins(6, -1, 6, -1);
        labelBeanControlQuantityText = new QLabel(BeanControlDialog);
        labelBeanControlQuantityText->setObjectName(QString::fromUtf8("labelBeanControlQuantityText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labelBeanControlQuantityText->setFont(font);
        labelBeanControlQuantityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl1->setWidget(0, QFormLayout::LabelRole, labelBeanControlQuantityText);

        labelBeanControlQuantity = new QLabel(BeanControlDialog);
        labelBeanControlQuantity->setObjectName(QString::fromUtf8("labelBeanControlQuantity"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(12);
        labelBeanControlQuantity->setFont(font1);
        labelBeanControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlQuantity->setText(QString::fromUtf8("0"));
        labelBeanControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl1->setWidget(0, QFormLayout::FieldRole, labelBeanControlQuantity);

        labelBeanControlBytesText = new QLabel(BeanControlDialog);
        labelBeanControlBytesText->setObjectName(QString::fromUtf8("labelBeanControlBytesText"));
        labelBeanControlBytesText->setFont(font);
        labelBeanControlBytesText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl1->setWidget(1, QFormLayout::LabelRole, labelBeanControlBytesText);

        labelBeanControlBytes = new QLabel(BeanControlDialog);
        labelBeanControlBytes->setObjectName(QString::fromUtf8("labelBeanControlBytes"));
        labelBeanControlBytes->setFont(font1);
        labelBeanControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlBytes->setText(QString::fromUtf8("0"));
        labelBeanControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl1->setWidget(1, QFormLayout::FieldRole, labelBeanControlBytes);


        horizontalLayoutTop->addLayout(formLayoutBeanControl1);

        formLayoutBeanControl2 = new QFormLayout();
        formLayoutBeanControl2->setObjectName(QString::fromUtf8("formLayoutBeanControl2"));
        formLayoutBeanControl2->setHorizontalSpacing(10);
        formLayoutBeanControl2->setVerticalSpacing(10);
        formLayoutBeanControl2->setContentsMargins(6, -1, 6, -1);
        labelBeanControlAmountText = new QLabel(BeanControlDialog);
        labelBeanControlAmountText->setObjectName(QString::fromUtf8("labelBeanControlAmountText"));
        labelBeanControlAmountText->setFont(font);
        labelBeanControlAmountText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl2->setWidget(0, QFormLayout::LabelRole, labelBeanControlAmountText);

        labelBeanControlAmount = new QLabel(BeanControlDialog);
        labelBeanControlAmount->setObjectName(QString::fromUtf8("labelBeanControlAmount"));
        labelBeanControlAmount->setFont(font1);
        labelBeanControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlAmount->setText(QString::fromUtf8("0.00 BC"));
        labelBeanControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl2->setWidget(0, QFormLayout::FieldRole, labelBeanControlAmount);

        labelBeanControlPriorityText = new QLabel(BeanControlDialog);
        labelBeanControlPriorityText->setObjectName(QString::fromUtf8("labelBeanControlPriorityText"));
        labelBeanControlPriorityText->setFont(font);
        labelBeanControlPriorityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl2->setWidget(1, QFormLayout::LabelRole, labelBeanControlPriorityText);

        labelBeanControlPriority = new QLabel(BeanControlDialog);
        labelBeanControlPriority->setObjectName(QString::fromUtf8("labelBeanControlPriority"));
        labelBeanControlPriority->setFont(font1);
        labelBeanControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl2->setWidget(1, QFormLayout::FieldRole, labelBeanControlPriority);


        horizontalLayoutTop->addLayout(formLayoutBeanControl2);

        formLayoutBeanControl3 = new QFormLayout();
        formLayoutBeanControl3->setObjectName(QString::fromUtf8("formLayoutBeanControl3"));
        formLayoutBeanControl3->setHorizontalSpacing(10);
        formLayoutBeanControl3->setVerticalSpacing(10);
        formLayoutBeanControl3->setContentsMargins(6, -1, 6, -1);
        labelBeanControlFeeText = new QLabel(BeanControlDialog);
        labelBeanControlFeeText->setObjectName(QString::fromUtf8("labelBeanControlFeeText"));
        labelBeanControlFeeText->setFont(font);
        labelBeanControlFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl3->setWidget(0, QFormLayout::LabelRole, labelBeanControlFeeText);

        labelBeanControlFee = new QLabel(BeanControlDialog);
        labelBeanControlFee->setObjectName(QString::fromUtf8("labelBeanControlFee"));
        labelBeanControlFee->setFont(font1);
        labelBeanControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlFee->setText(QString::fromUtf8("0.00 BC"));
        labelBeanControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl3->setWidget(0, QFormLayout::FieldRole, labelBeanControlFee);

        labelBeanControlLowOutputText = new QLabel(BeanControlDialog);
        labelBeanControlLowOutputText->setObjectName(QString::fromUtf8("labelBeanControlLowOutputText"));
        labelBeanControlLowOutputText->setEnabled(false);
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        labelBeanControlLowOutputText->setFont(font2);
        labelBeanControlLowOutputText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl3->setWidget(1, QFormLayout::LabelRole, labelBeanControlLowOutputText);

        labelBeanControlLowOutput = new QLabel(BeanControlDialog);
        labelBeanControlLowOutput->setObjectName(QString::fromUtf8("labelBeanControlLowOutput"));
        labelBeanControlLowOutput->setEnabled(false);
        labelBeanControlLowOutput->setFont(font1);
        labelBeanControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlLowOutput->setText(QString::fromUtf8("no"));
        labelBeanControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl3->setWidget(1, QFormLayout::FieldRole, labelBeanControlLowOutput);


        horizontalLayoutTop->addLayout(formLayoutBeanControl3);

        formLayoutBeanControl4 = new QFormLayout();
        formLayoutBeanControl4->setObjectName(QString::fromUtf8("formLayoutBeanControl4"));
        formLayoutBeanControl4->setHorizontalSpacing(10);
        formLayoutBeanControl4->setVerticalSpacing(10);
        formLayoutBeanControl4->setContentsMargins(6, -1, 6, -1);
        labelBeanControlAfterFeeText = new QLabel(BeanControlDialog);
        labelBeanControlAfterFeeText->setObjectName(QString::fromUtf8("labelBeanControlAfterFeeText"));
        labelBeanControlAfterFeeText->setFont(font);
        labelBeanControlAfterFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl4->setWidget(0, QFormLayout::LabelRole, labelBeanControlAfterFeeText);

        labelBeanControlAfterFee = new QLabel(BeanControlDialog);
        labelBeanControlAfterFee->setObjectName(QString::fromUtf8("labelBeanControlAfterFee"));
        labelBeanControlAfterFee->setFont(font1);
        labelBeanControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlAfterFee->setText(QString::fromUtf8("0.00 BC"));
        labelBeanControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl4->setWidget(0, QFormLayout::FieldRole, labelBeanControlAfterFee);

        labelBeanControlChangeText = new QLabel(BeanControlDialog);
        labelBeanControlChangeText->setObjectName(QString::fromUtf8("labelBeanControlChangeText"));
        labelBeanControlChangeText->setEnabled(false);
        labelBeanControlChangeText->setFont(font2);
        labelBeanControlChangeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutBeanControl4->setWidget(1, QFormLayout::LabelRole, labelBeanControlChangeText);

        labelBeanControlChange = new QLabel(BeanControlDialog);
        labelBeanControlChange->setObjectName(QString::fromUtf8("labelBeanControlChange"));
        labelBeanControlChange->setEnabled(false);
        labelBeanControlChange->setFont(font1);
        labelBeanControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelBeanControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelBeanControlChange->setText(QString::fromUtf8("0.00 BC"));
        labelBeanControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutBeanControl4->setWidget(1, QFormLayout::FieldRole, labelBeanControlChange);


        horizontalLayoutTop->addLayout(formLayoutBeanControl4);


        verticalLayout->addLayout(horizontalLayoutTop);

        frame = new QFrame(BeanControlDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 781, 41));
        horizontalLayoutPanel = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutPanel->setSpacing(14);
        horizontalLayoutPanel->setObjectName(QString::fromUtf8("horizontalLayoutPanel"));
        horizontalLayoutPanel->setContentsMargins(0, 0, 0, 0);
        pushButtonSelectAll = new QPushButton(horizontalLayoutWidget);
        pushButtonSelectAll->setObjectName(QString::fromUtf8("pushButtonSelectAll"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonSelectAll->sizePolicy().hasHeightForWidth());
        pushButtonSelectAll->setSizePolicy(sizePolicy);

        horizontalLayoutPanel->addWidget(pushButtonSelectAll);

        radioTreeMode = new QRadioButton(horizontalLayoutWidget);
        radioTreeMode->setObjectName(QString::fromUtf8("radioTreeMode"));
        sizePolicy.setHeightForWidth(radioTreeMode->sizePolicy().hasHeightForWidth());
        radioTreeMode->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Sans"));
        font3.setPointSize(12);
        radioTreeMode->setFont(font3);
        radioTreeMode->setChecked(true);

        horizontalLayoutPanel->addWidget(radioTreeMode);

        radioListMode = new QRadioButton(horizontalLayoutWidget);
        radioListMode->setObjectName(QString::fromUtf8("radioListMode"));
        sizePolicy.setHeightForWidth(radioListMode->sizePolicy().hasHeightForWidth());
        radioListMode->setSizePolicy(sizePolicy);
        radioListMode->setFont(font3);

        horizontalLayoutPanel->addWidget(radioListMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutPanel->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        treeWidget = new BeanControlTreeWidget(BeanControlDialog);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Liberation Sans"));
        font4.setPointSize(11);
        treeWidget->setFont(font4);
        treeWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        treeWidget->setSortingEnabled(false);
        treeWidget->setColumnCount(11);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(false);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(BeanControlDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        buttonBox->setPalette(palette1);
        buttonBox->setLayoutDirection(Qt::LeftToRight);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(BeanControlDialog);

        QMetaObject::connectSlotsByName(BeanControlDialog);
    } // setupUi

    void retranslateUi(QDialog *BeanControlDialog)
    {
        BeanControlDialog->setWindowTitle(QApplication::translate("BeanControlDialog", "Bean Control", 0, QApplication::UnicodeUTF8));
        labelBeanControlQuantityText->setText(QApplication::translate("BeanControlDialog", "Quantity:", 0, QApplication::UnicodeUTF8));
        labelBeanControlBytesText->setText(QApplication::translate("BeanControlDialog", "Bytes:", 0, QApplication::UnicodeUTF8));
        labelBeanControlAmountText->setText(QApplication::translate("BeanControlDialog", "Amount:", 0, QApplication::UnicodeUTF8));
        labelBeanControlPriorityText->setText(QApplication::translate("BeanControlDialog", "Priority:", 0, QApplication::UnicodeUTF8));
        labelBeanControlPriority->setText(QString());
        labelBeanControlFeeText->setText(QApplication::translate("BeanControlDialog", "Fee:", 0, QApplication::UnicodeUTF8));
        labelBeanControlLowOutputText->setText(QApplication::translate("BeanControlDialog", "Low Output:", 0, QApplication::UnicodeUTF8));
        labelBeanControlAfterFeeText->setText(QApplication::translate("BeanControlDialog", "After Fee:", 0, QApplication::UnicodeUTF8));
        labelBeanControlChangeText->setText(QApplication::translate("BeanControlDialog", "Change:", 0, QApplication::UnicodeUTF8));
        pushButtonSelectAll->setText(QApplication::translate("BeanControlDialog", "(un)select all", 0, QApplication::UnicodeUTF8));
        radioTreeMode->setText(QApplication::translate("BeanControlDialog", "Tree mode", 0, QApplication::UnicodeUTF8));
        radioListMode->setText(QApplication::translate("BeanControlDialog", "List mode", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("BeanControlDialog", "Priority", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(5, QApplication::translate("BeanControlDialog", "Confirmations", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("BeanControlDialog", "Date", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("BeanControlDialog", "Address", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("BeanControlDialog", "Label", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("BeanControlDialog", "Amount", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ___qtreewidgetitem->setToolTip(5, QApplication::translate("BeanControlDialog", "Confirmed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class BeanControlDialog: public Ui_BeanControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEANCONTROLDIALOG_H
