/********************************************************************************
** Form generated from reading UI file 'sendbeansentry.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDBEANSENTRY_H
#define UI_SENDBEANSENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include "bitbeanamountfield.h"
#include "qvalidatedlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SendBeansEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    BitbeanAmountField *payAmount;
    QHBoxLayout *horizontalLayout_2;
    QValidatedLineEdit *addAsLabel;
    QLabel *label_4;
    QHBoxLayout *payToLayout;
    QValidatedLineEdit *payTo;
    QToolButton *addressBookButton;
    QToolButton *pasteButton;
    QToolButton *deleteButton;

    void setupUi(QFrame *SendBeansEntry)
    {
        if (SendBeansEntry->objectName().isEmpty())
            SendBeansEntry->setObjectName(QString::fromUtf8("SendBeansEntry"));
        SendBeansEntry->resize(729, 136);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(211, 238, 175, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(159, 213, 85, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        QBrush brush4(QColor(0, 0, 128, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush1);
        SendBeansEntry->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(10);
        SendBeansEntry->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bitbean"), QSize(), QIcon::Normal, QIcon::Off);
        SendBeansEntry->setWindowIcon(icon);
        SendBeansEntry->setFrameShape(QFrame::StyledPanel);
        SendBeansEntry->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(SendBeansEntry);
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SendBeansEntry);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_2 = new QLabel(SendBeansEntry);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        payAmount = new BitbeanAmountField(SendBeansEntry);
        payAmount->setObjectName(QString::fromUtf8("payAmount"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Monospace"));
        font2.setPointSize(12);
        payAmount->setFont(font2);

        gridLayout->addWidget(payAmount, 5, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addAsLabel = new QValidatedLineEdit(SendBeansEntry);
        addAsLabel->setObjectName(QString::fromUtf8("addAsLabel"));
        addAsLabel->setEnabled(true);
        addAsLabel->setFont(font2);

        horizontalLayout_2->addWidget(addAsLabel);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        label_4 = new QLabel(SendBeansEntry);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        payToLayout = new QHBoxLayout();
        payToLayout->setSpacing(0);
        payToLayout->setObjectName(QString::fromUtf8("payToLayout"));
        payTo = new QValidatedLineEdit(SendBeansEntry);
        payTo->setObjectName(QString::fromUtf8("payTo"));
        payTo->setFont(font2);
        payTo->setMaxLength(34);

        payToLayout->addWidget(payTo);

        addressBookButton = new QToolButton(SendBeansEntry);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon1);

        payToLayout->addWidget(addressBookButton);

        pasteButton = new QToolButton(SendBeansEntry);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/editpaste"), QSize(), QIcon::Normal, QIcon::Off);
        pasteButton->setIcon(icon2);

        payToLayout->addWidget(pasteButton);

        deleteButton = new QToolButton(SendBeansEntry);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon3);

        payToLayout->addWidget(deleteButton);


        gridLayout->addLayout(payToLayout, 3, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(payAmount);
        label_2->setBuddy(payTo);
        label_4->setBuddy(addAsLabel);
#endif // QT_NO_SHORTCUT

        retranslateUi(SendBeansEntry);

        QMetaObject::connectSlotsByName(SendBeansEntry);
    } // setupUi

    void retranslateUi(QFrame *SendBeansEntry)
    {
        SendBeansEntry->setWindowTitle(QApplication::translate("SendBeansEntry", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SendBeansEntry", "A&mount:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SendBeansEntry", "Pay &To:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addAsLabel->setToolTip(QApplication::translate("SendBeansEntry", "Enter a label for this address to add it to your address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("SendBeansEntry", "&Label:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        payTo->setToolTip(QApplication::translate("SendBeansEntry", "The address to send the payment to  (e.g. 2JhbfkAFvXqYkreSgJfrRLS9DepUcxbQci)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("SendBeansEntry", "Choose address from address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("SendBeansEntry", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pasteButton->setToolTip(QApplication::translate("SendBeansEntry", "Paste address from clipboard", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pasteButton->setText(QString());
        pasteButton->setShortcut(QApplication::translate("SendBeansEntry", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("SendBeansEntry", "Remove this recipient", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SendBeansEntry: public Ui_SendBeansEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDBEANSENTRY_H
