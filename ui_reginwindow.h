/********************************************************************************
** Form generated from reading UI file 'reginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGINWINDOW_H
#define UI_REGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLineEdit *passwdLineEdit;
    QLabel *label_2;
    QLineEdit *passwdAgainLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *addNFCCardButton;
    QLabel *addcardLabel;
    QPushButton *reginsterButton;
    QPushButton *reteunLoginButton;
    QLabel *label_5;
    QLabel *IDLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReginWindow)
    {
        if (ReginWindow->objectName().isEmpty())
            ReginWindow->setObjectName(QStringLiteral("ReginWindow"));
        ReginWindow->resize(800, 480);
        centralwidget = new QWidget(ReginWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 80, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(140, 90, 200, 40));
        nameLineEdit->setFont(font);
        nameLineEdit->setLayoutDirection(Qt::LeftToRight);
        passwdLineEdit = new QLineEdit(centralwidget);
        passwdLineEdit->setObjectName(QStringLiteral("passwdLineEdit"));
        passwdLineEdit->setGeometry(QRect(140, 140, 200, 40));
        passwdLineEdit->setFont(font);
        passwdLineEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 140, 80, 40));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        passwdAgainLineEdit = new QLineEdit(centralwidget);
        passwdAgainLineEdit->setObjectName(QStringLiteral("passwdAgainLineEdit"));
        passwdAgainLineEdit->setGeometry(QRect(140, 190, 200, 40));
        passwdAgainLineEdit->setFont(font);
        passwdAgainLineEdit->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 190, 80, 40));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 90, 300, 300));
        label_4->setStyleSheet(QStringLiteral("background-image: url(:/image/NFCCard.jpg);"));
        addNFCCardButton = new QPushButton(centralwidget);
        addNFCCardButton->setObjectName(QStringLiteral("addNFCCardButton"));
        addNFCCardButton->setGeometry(QRect(140, 250, 201, 50));
        addNFCCardButton->setFont(font);
        addcardLabel = new QLabel(centralwidget);
        addcardLabel->setObjectName(QStringLiteral("addcardLabel"));
        addcardLabel->setGeometry(QRect(340, 250, 80, 50));
        addcardLabel->setFont(font);
        addcardLabel->setAlignment(Qt::AlignCenter);
        reginsterButton = new QPushButton(centralwidget);
        reginsterButton->setObjectName(QStringLiteral("reginsterButton"));
        reginsterButton->setGeometry(QRect(140, 330, 201, 50));
        reginsterButton->setFont(font);
        reteunLoginButton = new QPushButton(centralwidget);
        reteunLoginButton->setObjectName(QStringLiteral("reteunLoginButton"));
        reteunLoginButton->setGeometry(QRect(0, 0, 91, 61));
        reteunLoginButton->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(450, 50, 300, 40));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        IDLabel = new QLabel(centralwidget);
        IDLabel->setObjectName(QStringLiteral("IDLabel"));
        IDLabel->setGeometry(QRect(30, 300, 71, 51));
        ReginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReginWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        ReginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ReginWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ReginWindow->setStatusBar(statusbar);

        retranslateUi(ReginWindow);

        QMetaObject::connectSlotsByName(ReginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ReginWindow)
    {
        ReginWindow->setWindowTitle(QApplication::translate("ReginWindow", "MainWindow", 0));
        label->setText(QApplication::translate("ReginWindow", "\347\224\250\346\210\267\345\220\215", 0));
        nameLineEdit->setPlaceholderText(QApplication::translate("ReginWindow", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267\345\220\215", 0));
        passwdLineEdit->setPlaceholderText(QApplication::translate("ReginWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        label_2->setText(QApplication::translate("ReginWindow", "\345\257\206\347\240\201", 0));
        passwdAgainLineEdit->setPlaceholderText(QApplication::translate("ReginWindow", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        label_3->setText(QApplication::translate("ReginWindow", "\347\241\256\350\256\244\345\257\206\347\240\201", 0));
        label_4->setText(QString());
        addNFCCardButton->setText(QApplication::translate("ReginWindow", "\346\267\273\345\212\240\351\227\250\347\246\201\345\215\241", 0));
        addcardLabel->setText(QApplication::translate("ReginWindow", "\346\234\252\346\267\273\345\212\240", 0));
        reginsterButton->setText(QApplication::translate("ReginWindow", "\347\241\256\350\256\244\346\263\250\345\206\214", 0));
        reteunLoginButton->setText(QApplication::translate("ReginWindow", "\350\277\224\345\233\236", 0));
        label_5->setText(QApplication::translate("ReginWindow", "\350\257\267\345\260\206\351\227\250\347\246\201\345\215\241\344\270\215\346\226\255\346\224\276\345\234\250\346\255\244\345\244\204\350\257\206\345\210\253", 0));
        IDLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReginWindow: public Ui_ReginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGINWINDOW_H
