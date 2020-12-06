/********************************************************************************
** Form generated from reading UI file 'repairsbox.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIRSBOX_H
#define UI_REPAIRSBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RepairsBox
{
public:
    QPushButton *submitButton;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *destrionTextEdit;
    QLabel *label_7;
    QLineEdit *telLineEdit;
    QLineEdit *projectLineEdit;
    QPushButton *ckose2Button;
    QLineEdit *usrLineEdit;
    QLineEdit *DateLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_8;
    QLineEdit *addressLineEdit;
    QLabel *label;

    void setupUi(QWidget *RepairsBox)
    {
        if (RepairsBox->objectName().isEmpty())
            RepairsBox->setObjectName(QStringLiteral("RepairsBox"));
        RepairsBox->resize(800, 480);
        RepairsBox->setStyleSheet(QStringLiteral(""));
        submitButton = new QPushButton(RepairsBox);
        submitButton->setObjectName(QStringLiteral("submitButton"));
        submitButton->setGeometry(QRect(330, 410, 151, 51));
        label_6 = new QLabel(RepairsBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 210, 91, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(12);
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral(""));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(RepairsBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 110, 81, 40));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_5 = new QLabel(RepairsBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 160, 81, 40));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral(""));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        destrionTextEdit = new QTextEdit(RepairsBox);
        destrionTextEdit->setObjectName(QStringLiteral("destrionTextEdit"));
        destrionTextEdit->setGeometry(QRect(90, 260, 641, 121));
        destrionTextEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(RepairsBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(410, 60, 81, 40));
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral(""));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        telLineEdit = new QLineEdit(RepairsBox);
        telLineEdit->setObjectName(QStringLiteral("telLineEdit"));
        telLineEdit->setGeometry(QRect(496, 60, 221, 40));
        telLineEdit->setFont(font);
        telLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        projectLineEdit = new QLineEdit(RepairsBox);
        projectLineEdit->setObjectName(QStringLiteral("projectLineEdit"));
        projectLineEdit->setGeometry(QRect(175, 160, 221, 40));
        projectLineEdit->setFont(font);
        projectLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ckose2Button = new QPushButton(RepairsBox);
        ckose2Button->setObjectName(QStringLiteral("ckose2Button"));
        ckose2Button->setGeometry(QRect(0, 0, 41, 41));
        ckose2Button->setStyleSheet(QStringLiteral("border-image: url(:/image/icon/clear.png);"));
        usrLineEdit = new QLineEdit(RepairsBox);
        usrLineEdit->setObjectName(QStringLiteral("usrLineEdit"));
        usrLineEdit->setGeometry(QRect(176, 60, 221, 40));
        usrLineEdit->setFont(font);
        usrLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        DateLineEdit = new QLineEdit(RepairsBox);
        DateLineEdit->setObjectName(QStringLiteral("DateLineEdit"));
        DateLineEdit->setGeometry(QRect(175, 110, 221, 40));
        DateLineEdit->setFont(font);
        DateLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(RepairsBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 0, 201, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(15);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(RepairsBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 60, 81, 40));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(RepairsBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(410, 110, 81, 40));
        label_8->setFont(font);
        label_8->setStyleSheet(QStringLiteral(""));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        addressLineEdit = new QLineEdit(RepairsBox);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(495, 110, 221, 40));
        addressLineEdit->setFont(font);
        addressLineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(RepairsBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 480));
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(5, 22, 244, 255), stop:0.81592 rgba(55, 169, 239, 255));"));
        label->raise();
        submitButton->raise();
        label_6->raise();
        label_4->raise();
        label_5->raise();
        destrionTextEdit->raise();
        label_7->raise();
        telLineEdit->raise();
        projectLineEdit->raise();
        ckose2Button->raise();
        usrLineEdit->raise();
        DateLineEdit->raise();
        label_2->raise();
        label_3->raise();
        label_8->raise();
        addressLineEdit->raise();

        retranslateUi(RepairsBox);

        QMetaObject::connectSlotsByName(RepairsBox);
    } // setupUi

    void retranslateUi(QWidget *RepairsBox)
    {
        RepairsBox->setWindowTitle(QApplication::translate("RepairsBox", "Form", 0));
        submitButton->setText(QApplication::translate("RepairsBox", "\346\217\220\344\272\244\347\224\263\350\257\267", 0));
        label_6->setText(QApplication::translate("RepairsBox", "\346\203\205\345\206\265\346\217\217\350\277\260:", 0));
        label_4->setText(QApplication::translate("RepairsBox", "\347\224\263\350\257\267\346\227\245\346\234\237", 0));
        label_5->setText(QApplication::translate("RepairsBox", "\347\273\264\344\277\256\351\241\271\347\233\256", 0));
        destrionTextEdit->setHtml(QApplication::translate("RepairsBox", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        destrionTextEdit->setPlaceholderText(QApplication::translate("RepairsBox", "\350\257\267\346\217\217\350\277\260\345\205\267\344\275\223\346\203\205\345\206\265...", 0));
        label_7->setText(QApplication::translate("RepairsBox", "\350\201\224\347\263\273\347\224\265\350\257\235", 0));
        ckose2Button->setText(QString());
        label_2->setText(QApplication::translate("RepairsBox", "\347\273\264\344\277\256\347\224\263\350\257\267\350\241\250", 0));
        label_3->setText(QApplication::translate("RepairsBox", "\347\224\263\350\257\267\344\272\272", 0));
        label_8->setText(QApplication::translate("RepairsBox", "\344\275\217\346\210\277\345\234\260\345\235\200", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RepairsBox: public Ui_RepairsBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIRSBOX_H
