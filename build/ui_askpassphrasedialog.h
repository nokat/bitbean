/********************************************************************************
** Form generated from reading UI file 'askpassphrasedialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKPASSPHRASEDIALOG_H
#define UI_ASKPASSPHRASEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AskPassphraseDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *warningLabel;
    QFormLayout *formLayout;
    QLabel *passLabel1;
    QLineEdit *passEdit1;
    QLabel *passLabel2;
    QLineEdit *passEdit2;
    QLabel *passLabel3;
    QLineEdit *passEdit3;
    QLabel *capsLabel;
    QCheckBox *stakingCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AskPassphraseDialog)
    {
        if (AskPassphraseDialog->objectName().isEmpty())
            AskPassphraseDialog->setObjectName(QString::fromUtf8("AskPassphraseDialog"));
        AskPassphraseDialog->resize(598, 198);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AskPassphraseDialog->sizePolicy().hasHeightForWidth());
        AskPassphraseDialog->setSizePolicy(sizePolicy);
        AskPassphraseDialog->setMinimumSize(QSize(550, 0));
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
        AskPassphraseDialog->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Liberation Sans"));
        font.setPointSize(10);
        AskPassphraseDialog->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/bitbean"), QSize(), QIcon::Normal, QIcon::Off);
        AskPassphraseDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(AskPassphraseDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        warningLabel = new QLabel(AskPassphraseDialog);
        warningLabel->setObjectName(QString::fromUtf8("warningLabel"));
        warningLabel->setTextFormat(Qt::RichText);
        warningLabel->setWordWrap(true);

        verticalLayout->addWidget(warningLabel);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        passLabel1 = new QLabel(AskPassphraseDialog);
        passLabel1->setObjectName(QString::fromUtf8("passLabel1"));
        passLabel1->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, passLabel1);

        passEdit1 = new QLineEdit(AskPassphraseDialog);
        passEdit1->setObjectName(QString::fromUtf8("passEdit1"));
        passEdit1->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passEdit1);

        passLabel2 = new QLabel(AskPassphraseDialog);
        passLabel2->setObjectName(QString::fromUtf8("passLabel2"));
        passLabel2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, passLabel2);

        passEdit2 = new QLineEdit(AskPassphraseDialog);
        passEdit2->setObjectName(QString::fromUtf8("passEdit2"));
        passEdit2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passEdit2);

        passLabel3 = new QLabel(AskPassphraseDialog);
        passLabel3->setObjectName(QString::fromUtf8("passLabel3"));
        passLabel3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel3);

        passEdit3 = new QLineEdit(AskPassphraseDialog);
        passEdit3->setObjectName(QString::fromUtf8("passEdit3"));
        passEdit3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, passEdit3);

        capsLabel = new QLabel(AskPassphraseDialog);
        capsLabel->setObjectName(QString::fromUtf8("capsLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        capsLabel->setFont(font1);
        capsLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, capsLabel);

        stakingCheckBox = new QCheckBox(AskPassphraseDialog);
        stakingCheckBox->setObjectName(QString::fromUtf8("stakingCheckBox"));
        stakingCheckBox->setEnabled(true);
        stakingCheckBox->setVisible(false);

        formLayout->setWidget(4, QFormLayout::LabelRole, stakingCheckBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(AskPassphraseDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setPointSize(9);
        buttonBox->setFont(font2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox, 0, Qt::AlignHCenter);


        retranslateUi(AskPassphraseDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AskPassphraseDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AskPassphraseDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AskPassphraseDialog);
    } // setupUi

    void retranslateUi(QDialog *AskPassphraseDialog)
    {
        AskPassphraseDialog->setWindowTitle(QApplication::translate("AskPassphraseDialog", "Passphrase Dialog", 0, QApplication::UnicodeUTF8));
        passLabel1->setText(QApplication::translate("AskPassphraseDialog", "Enter passphrase", 0, QApplication::UnicodeUTF8));
        passLabel2->setText(QApplication::translate("AskPassphraseDialog", "New passphrase", 0, QApplication::UnicodeUTF8));
        passLabel3->setText(QApplication::translate("AskPassphraseDialog", "Repeat new passphrase", 0, QApplication::UnicodeUTF8));
        capsLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        stakingCheckBox->setToolTip(QApplication::translate("AskPassphraseDialog", "Serves to disable the trivial sendmoney when OS account compromised. Provides no real security.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        stakingCheckBox->setText(QApplication::translate("AskPassphraseDialog", "For staking only", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AskPassphraseDialog: public Ui_AskPassphraseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKPASSPHRASEDIALOG_H
