/********************************************************************************
** Form generated from reading UI file 'usermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINWINDOW_H
#define UI_USERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *weatherWidget;
    QLabel *wSituationlabel;
    QLabel *templabel;
    QLabel *Timelabel;
    QLabel *dateLabel;
    QLabel *weatherBackgoundlabel;
    QLabel *wSituationlabel_2;
    QLabel *wSituationlabel_3;
    QWidget *funwidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *musicButton;
    QPushButton *serverButton;
    QPushButton *ledButton;
    QPushButton *relaxButton;
    QPushButton *videoButton;
    QPushButton *retuenButton;
    QLabel *adlabel;
    QPushButton *moreButton;
    QPushButton *setButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *newLabel;
    QLabel *label_9;

    void setupUi(QMainWindow *UserMainWindow)
    {
        if (UserMainWindow->objectName().isEmpty())
            UserMainWindow->setObjectName(QStringLiteral("UserMainWindow"));
        UserMainWindow->resize(800, 480);
        UserMainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(UserMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        weatherWidget = new QWidget(centralwidget);
        weatherWidget->setObjectName(QStringLiteral("weatherWidget"));
        weatherWidget->setGeometry(QRect(500, 60, 300, 200));
        weatherWidget->setStyleSheet(QStringLiteral(""));
        wSituationlabel = new QLabel(weatherWidget);
        wSituationlabel->setObjectName(QStringLiteral("wSituationlabel"));
        wSituationlabel->setGeometry(QRect(15, 0, 91, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        wSituationlabel->setFont(font);
        wSituationlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        templabel = new QLabel(weatherWidget);
        templabel->setObjectName(QStringLiteral("templabel"));
        templabel->setGeometry(QRect(15, 50, 91, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        templabel->setFont(font1);
        templabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Timelabel = new QLabel(weatherWidget);
        Timelabel->setObjectName(QStringLiteral("Timelabel"));
        Timelabel->setGeometry(QRect(15, 100, 151, 50));
        Timelabel->setFont(font1);
        Timelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dateLabel = new QLabel(weatherWidget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(15, 150, 150, 50));
        dateLabel->setFont(font1);
        dateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        weatherBackgoundlabel = new QLabel(weatherWidget);
        weatherBackgoundlabel->setObjectName(QStringLiteral("weatherBackgoundlabel"));
        weatherBackgoundlabel->setGeometry(QRect(0, 0, 300, 200));
        weatherBackgoundlabel->setStyleSheet(QStringLiteral("border:4px solid blue;"));
        wSituationlabel_2 = new QLabel(weatherWidget);
        wSituationlabel_2->setObjectName(QStringLiteral("wSituationlabel_2"));
        wSituationlabel_2->setGeometry(QRect(170, 10, 111, 51));
        wSituationlabel_2->setFont(font);
        wSituationlabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        wSituationlabel_3 = new QLabel(weatherWidget);
        wSituationlabel_3->setObjectName(QStringLiteral("wSituationlabel_3"));
        wSituationlabel_3->setGeometry(QRect(180, 30, 31, 31));
        wSituationlabel_3->setFont(font);
        wSituationlabel_3->setStyleSheet(QLatin1String("border-image: url(:/image/icon/loction.png);\n"
"border-radius: 15px"));
        wSituationlabel_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        weatherBackgoundlabel->raise();
        wSituationlabel->raise();
        templabel->raise();
        Timelabel->raise();
        dateLabel->raise();
        wSituationlabel_2->raise();
        wSituationlabel_3->raise();
        funwidget = new QWidget(centralwidget);
        funwidget->setObjectName(QStringLiteral("funwidget"));
        funwidget->setGeometry(QRect(0, 370, 800, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font2.setPointSize(15);
        funwidget->setFont(font2);
        funwidget->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(5, 244, 240, 255), stop:0.81592 rgba(55, 169, 239, 255));"));
        label_4 = new QLabel(funwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 75, 41, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(funwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 75, 41, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(funwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(370, 75, 41, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(funwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(520, 75, 41, 21));
        label_7->setFont(font1);
        label_8 = new QLabel(funwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(665, 75, 41, 21));
        label_8->setFont(font1);
        musicButton = new QPushButton(funwidget);
        musicButton->setObjectName(QStringLiteral("musicButton"));
        musicButton->setGeometry(QRect(506, 11, 60, 60));
        musicButton->setMinimumSize(QSize(60, 60));
        musicButton->setMaximumSize(QSize(80, 80));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        musicButton->setFont(font3);
        musicButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/musicpng.png);\n"
"border-radius: 29px"));
        serverButton = new QPushButton(funwidget);
        serverButton->setObjectName(QStringLiteral("serverButton"));
        serverButton->setGeometry(QRect(210, 11, 60, 60));
        serverButton->setMinimumSize(QSize(60, 60));
        serverButton->setMaximumSize(QSize(80, 80));
        serverButton->setFont(font3);
        serverButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/server.png);\n"
"border-radius: 29px"));
        ledButton = new QPushButton(funwidget);
        ledButton->setObjectName(QStringLiteral("ledButton"));
        ledButton->setGeometry(QRect(60, 10, 60, 60));
        ledButton->setMinimumSize(QSize(60, 60));
        ledButton->setMaximumSize(QSize(80, 80));
        ledButton->setFont(font3);
        ledButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/bulb.png);\n"
"border-radius: 29px"));
        relaxButton = new QPushButton(funwidget);
        relaxButton->setObjectName(QStringLiteral("relaxButton"));
        relaxButton->setGeometry(QRect(358, 11, 60, 60));
        relaxButton->setMinimumSize(QSize(60, 60));
        relaxButton->setMaximumSize(QSize(80, 80));
        relaxButton->setFont(font3);
        relaxButton->setStyleSheet(QStringLiteral("border-image: url(:/image/icon/game.png);"));
        videoButton = new QPushButton(funwidget);
        videoButton->setObjectName(QStringLiteral("videoButton"));
        videoButton->setGeometry(QRect(654, 11, 60, 60));
        videoButton->setMinimumSize(QSize(60, 60));
        videoButton->setMaximumSize(QSize(80, 80));
        videoButton->setFont(font3);
        videoButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/video.png);\n"
"border-radius: 29px"));
        retuenButton = new QPushButton(centralwidget);
        retuenButton->setObjectName(QStringLiteral("retuenButton"));
        retuenButton->setGeometry(QRect(0, 0, 80, 30));
        adlabel = new QLabel(centralwidget);
        adlabel->setObjectName(QStringLiteral("adlabel"));
        adlabel->setGeometry(QRect(0, 60, 501, 310));
        adlabel->setStyleSheet(QStringLiteral("border:2px solid black;"));
        moreButton = new QPushButton(centralwidget);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setGeometry(QRect(680, 265, 80, 80));
        moreButton->setFont(font3);
        moreButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/more.png);\n"
"border-radius: 18px"));
        setButton = new QPushButton(centralwidget);
        setButton->setObjectName(QStringLiteral("setButton"));
        setButton->setGeometry(QRect(540, 265, 80, 80));
        setButton->setFont(font3);
        setButton->setAutoFillBackground(false);
        setButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/set.png);\n"
"border-radius: 20px"));
        setButton->setAutoExclusive(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 480));
        label->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(5, 22, 244, 255), stop:0.81592 rgba(55, 169, 239, 255));"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(560, 345, 41, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(700, 345, 41, 21));
        label_3->setFont(font1);
        newLabel = new QLabel(centralwidget);
        newLabel->setObjectName(QStringLiteral("newLabel"));
        newLabel->setGeometry(QRect(140, 15, 601, 41));
        newLabel->setFont(font2);
        newLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border:4px solid black;"));
        newLabel->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 15, 40, 40));
        label_9->setStyleSheet(QLatin1String("border-image: url(:/image/icon/trumpet.png);\n"
"border-radius: 20px"));
        UserMainWindow->setCentralWidget(centralwidget);
        label->raise();
        weatherWidget->raise();
        funwidget->raise();
        retuenButton->raise();
        adlabel->raise();
        moreButton->raise();
        setButton->raise();
        label_3->raise();
        label_2->raise();
        newLabel->raise();
        label_9->raise();

        retranslateUi(UserMainWindow);

        QMetaObject::connectSlotsByName(UserMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainWindow)
    {
        UserMainWindow->setWindowTitle(QApplication::translate("UserMainWindow", "MainWindow", 0));
        wSituationlabel->setText(QApplication::translate("UserMainWindow", "\345\244\232\344\272\221", 0));
        templabel->setText(QApplication::translate("UserMainWindow", "20 ~30", 0));
        Timelabel->setText(QString());
        dateLabel->setText(QString());
        weatherBackgoundlabel->setText(QString());
        wSituationlabel_2->setText(QApplication::translate("UserMainWindow", "\345\271\277\345\267\236", 0));
        wSituationlabel_3->setText(QString());
        label_4->setText(QApplication::translate("UserMainWindow", "\347\201\257\345\205\211", 0));
        label_5->setText(QApplication::translate("UserMainWindow", "\347\211\251\344\270\232\346\234\215\345\212\241", 0));
        label_6->setText(QApplication::translate("UserMainWindow", "\346\270\270\346\210\217", 0));
        label_7->setText(QApplication::translate("UserMainWindow", "\351\237\263\344\271\220", 0));
        label_8->setText(QApplication::translate("UserMainWindow", "\350\247\206\351\242\221", 0));
        musicButton->setText(QString());
        serverButton->setText(QString());
        ledButton->setText(QString());
        relaxButton->setText(QString());
        videoButton->setText(QString());
        retuenButton->setText(QApplication::translate("UserMainWindow", "\350\277\224\345\233\236", 0));
        adlabel->setText(QString());
        moreButton->setText(QString());
        setButton->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("UserMainWindow", "\350\256\276\347\275\256", 0));
        label_3->setText(QApplication::translate("UserMainWindow", "\346\233\264\345\244\232", 0));
        newLabel->setText(QString());
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserMainWindow: public Ui_UserMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINWINDOW_H
