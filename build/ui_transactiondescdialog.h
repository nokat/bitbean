/********************************************************************************
** Form generated from reading UI file 'transactiondescdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTIONDESCDIALOG_H
#define UI_TRANSACTIONDESCDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_TransactionDescDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QTextEdit *detailText;

    void setupUi(QDialog *TransactionDescDialog)
    {
        if (TransactionDescDialog->objectName().isEmpty())
            TransactionDescDialog->setObjectName(QString::fromUtf8("TransactionDescDialog"));
        TransactionDescDialog->resize(620, 250);
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
        TransactionDescDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(12);
        TransactionDescDialog->setFont(font);
        gridLayout = new QGridLayout(TransactionDescDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(252, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        closeButton = new QPushButton(TransactionDescDialog);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/quit"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        gridLayout->addWidget(closeButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(252, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        detailText = new QTextEdit(TransactionDescDialog);
        detailText->setObjectName(QString::fromUtf8("detailText"));
        detailText->setReadOnly(true);

        gridLayout->addWidget(detailText, 0, 0, 1, 3);


        retranslateUi(TransactionDescDialog);

        QMetaObject::connectSlotsByName(TransactionDescDialog);
    } // setupUi

    void retranslateUi(QDialog *TransactionDescDialog)
    {
        TransactionDescDialog->setWindowTitle(QApplication::translate("TransactionDescDialog", "Transaction details", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("TransactionDescDialog", "&Close", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        detailText->setToolTip(QApplication::translate("TransactionDescDialog", "This pane shows a detailed description of the transaction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class TransactionDescDialog: public Ui_TransactionDescDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTIONDESCDIALOG_H
