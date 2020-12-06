/********************************************************************************
** Form generated from reading UI file 'ctrlbulbwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLBULBWINDOW_H
#define UI_CTRLBULBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlBulbWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_6;
    QPushButton *closeButton;
    QToolButton *ctrlButton;
    QLabel *label_5;
    QToolButton *bedroonButton;
    QLabel *label_2;
    QToolButton *wcButton;
    QLabel *label_4;
    QToolButton *kitchenButton;
    QLabel *label_3;
    QToolButton *lampButton;

    void setupUi(QMainWindow *CtrlBulbWindow)
    {
        if (CtrlBulbWindow->objectName().isEmpty())
            CtrlBulbWindow->setObjectName(QStringLiteral("CtrlBulbWindow"));
        CtrlBulbWindow->resize(650, 400);
        centralwidget = new QWidget(CtrlBulbWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 71, 50, 40));
        label->setMinimumSize(QSize(50, 40));
        label->setMaximumSize(QSize(50, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(250, 10, 131, 40));
        label_6->setMinimumSize(QSize(50, 40));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setGeometry(QRect(0, 0, 41, 41));
        closeButton->setStyleSheet(QStringLiteral("border-image: url(:/image/icon/clear.png);"));
        ctrlButton = new QToolButton(centralwidget);
        ctrlButton->setObjectName(QStringLiteral("ctrlButton"));
        ctrlButton->setGeometry(QRect(470, 270, 80, 40));
        ctrlButton->setMaximumSize(QSize(80, 40));
        ctrlButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/close.png);\n"
"border-radius: 15px"));
        ctrlButton->setIconSize(QSize(80, 40));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(145, 270, 100, 40));
        label_5->setMinimumSize(QSize(100, 40));
        label_5->setMaximumSize(QSize(50, 40));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        bedroonButton = new QToolButton(centralwidget);
        bedroonButton->setObjectName(QStringLiteral("bedroonButton"));
        bedroonButton->setGeometry(QRect(466, 121, 80, 40));
        bedroonButton->setMaximumSize(QSize(80, 40));
        bedroonButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/close.png);\n"
"border-radius: 15px"));
        bedroonButton->setIconSize(QSize(80, 40));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 120, 50, 40));
        label_2->setMinimumSize(QSize(50, 40));
        label_2->setMaximumSize(QSize(50, 40));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        wcButton = new QToolButton(centralwidget);
        wcButton->setObjectName(QStringLiteral("wcButton"));
        wcButton->setGeometry(QRect(470, 220, 80, 40));
        wcButton->setMaximumSize(QSize(80, 40));
        wcButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/close.png);\n"
"border-radius: 15px"));
        wcButton->setIconSize(QSize(80, 40));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 220, 50, 40));
        label_4->setMinimumSize(QSize(50, 40));
        label_4->setMaximumSize(QSize(50, 40));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        kitchenButton = new QToolButton(centralwidget);
        kitchenButton->setObjectName(QStringLiteral("kitchenButton"));
        kitchenButton->setGeometry(QRect(466, 171, 80, 40));
        kitchenButton->setMaximumSize(QSize(80, 40));
        kitchenButton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/icon/close.png);\n"
"border-radius: 15px"));
        kitchenButton->setIconSize(QSize(80, 40));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 170, 50, 40));
        label_3->setMinimumSize(QSize(50, 40));
        label_3->setMaximumSize(QSize(50, 40));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        lampButton = new QToolButton(centralwidget);
        lampButton->setObjectName(QStringLiteral("lampButton"));
        lampButton->setGeometry(QRect(466, 71, 80, 40));
        lampButton->setMaximumSize(QSize(80, 40));
        lampButton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/image/icon/close.png);\n"
"border-radius: 15px"));
        lampButton->setIconSize(QSize(80, 40));
        lampButton->setAutoRepeat(false);
        lampButton->setAutoExclusive(false);
        CtrlBulbWindow->setCentralWidget(centralwidget);

        retranslateUi(CtrlBulbWindow);

        QMetaObject::connectSlotsByName(CtrlBulbWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CtrlBulbWindow)
    {
        CtrlBulbWindow->setWindowTitle(QApplication::translate("CtrlBulbWindow", "MainWindow", 0));
        label->setText(QApplication::translate("CtrlBulbWindow", "\345\256\242\345\216\205", 0));
        label_6->setText(QApplication::translate("CtrlBulbWindow", "\347\201\257\345\205\211\346\216\247\345\210\266", 0));
        closeButton->setText(QString());
        ctrlButton->setText(QString());
        label_5->setText(QApplication::translate("CtrlBulbWindow", "\344\270\200\351\224\256\346\216\247\345\210\266", 0));
        bedroonButton->setText(QString());
        label_2->setText(QApplication::translate("CtrlBulbWindow", "\345\215\247\345\256\244", 0));
        wcButton->setText(QString());
        label_4->setText(QApplication::translate("CtrlBulbWindow", "\345\216\225\346\211\200", 0));
        kitchenButton->setText(QString());
        label_3->setText(QApplication::translate("CtrlBulbWindow", "\345\216\250\346\210\277", 0));
        lampButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CtrlBulbWindow: public Ui_CtrlBulbWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLBULBWINDOW_H
