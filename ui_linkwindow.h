/********************************************************************************
** Form generated from reading UI file 'linkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKWINDOW_H
#define UI_LINKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *iplineEdit;
    QLineEdit *portlineEdit;
    QLabel *label_2;
    QPushButton *linkButton;
    QPushButton *returnButton;

    void setupUi(QMainWindow *LinkWindow)
    {
        if (LinkWindow->objectName().isEmpty())
            LinkWindow->setObjectName(QStringLiteral("LinkWindow"));
        LinkWindow->resize(350, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(15);
        LinkWindow->setFont(font);
        centralwidget = new QWidget(LinkWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 80, 50, 35));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        iplineEdit = new QLineEdit(centralwidget);
        iplineEdit->setObjectName(QStringLiteral("iplineEdit"));
        iplineEdit->setGeometry(QRect(110, 80, 200, 35));
        portlineEdit = new QLineEdit(centralwidget);
        portlineEdit->setObjectName(QStringLiteral("portlineEdit"));
        portlineEdit->setGeometry(QRect(110, 130, 200, 35));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 130, 91, 35));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        linkButton = new QPushButton(centralwidget);
        linkButton->setObjectName(QStringLiteral("linkButton"));
        linkButton->setGeometry(QRect(120, 200, 111, 41));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(0, 0, 93, 28));
        LinkWindow->setCentralWidget(centralwidget);

        retranslateUi(LinkWindow);

        QMetaObject::connectSlotsByName(LinkWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LinkWindow)
    {
        LinkWindow->setWindowTitle(QApplication::translate("LinkWindow", "MainWindow", 0));
        label->setText(QApplication::translate("LinkWindow", "IP", 0));
        iplineEdit->setPlaceholderText(QApplication::translate("LinkWindow", "192.168.20.56", 0));
        portlineEdit->setPlaceholderText(QApplication::translate("LinkWindow", "5555", 0));
        label_2->setText(QApplication::translate("LinkWindow", "\347\253\257\345\217\243\345\217\267", 0));
        linkButton->setText(QApplication::translate("LinkWindow", "\350\277\236\346\216\245", 0));
        returnButton->setText(QApplication::translate("LinkWindow", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class LinkWindow: public Ui_LinkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKWINDOW_H
