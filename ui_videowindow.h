/********************************************************************************
** Form generated from reading UI file 'videowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWINDOW_H
#define UI_VIDEOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWindow
{
public:
    QWidget *centralwidget;
    QWidget *playMeunwidget;
    QPushButton *returnButton;
    QPushButton *startPlayButton;
    QListWidget *playerListWidget;
    QPushButton *addVideoButton;
    QLabel *label;

    void setupUi(QMainWindow *VideoWindow)
    {
        if (VideoWindow->objectName().isEmpty())
            VideoWindow->setObjectName(QStringLiteral("VideoWindow"));
        VideoWindow->resize(800, 480);
        VideoWindow->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:1, cy:1, angle:16.7, stop:0 rgba(62, 53, 51, 255), stop:0.666667 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(VideoWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        playMeunwidget = new QWidget(centralwidget);
        playMeunwidget->setObjectName(QStringLiteral("playMeunwidget"));
        playMeunwidget->setGeometry(QRect(0, 0, 580, 400));
        playMeunwidget->setStyleSheet(QStringLiteral("border:5px solid black;"));
        returnButton = new QPushButton(centralwidget);
        returnButton->setObjectName(QStringLiteral("returnButton"));
        returnButton->setGeometry(QRect(0, 400, 80, 80));
        returnButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/mclosepng.png);\n"
"border-radius: 40px"));
        startPlayButton = new QPushButton(centralwidget);
        startPlayButton->setObjectName(QStringLiteral("startPlayButton"));
        startPlayButton->setGeometry(QRect(210, 400, 80, 80));
        startPlayButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/start.png);\n"
"border-radius: 40px"));
        playerListWidget = new QListWidget(centralwidget);
        playerListWidget->setObjectName(QStringLiteral("playerListWidget"));
        playerListWidget->setGeometry(QRect(580, 40, 221, 331));
        addVideoButton = new QPushButton(centralwidget);
        addVideoButton->setObjectName(QStringLiteral("addVideoButton"));
        addVideoButton->setGeometry(QRect(580, 370, 221, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(580, 0, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:1, cy:1, angle:16.7, stop:0 rgba(62, 53, 51, 255), stop:0.666667 rgba(255, 255, 255, 255));"));
        label->setAlignment(Qt::AlignCenter);
        VideoWindow->setCentralWidget(centralwidget);

        retranslateUi(VideoWindow);

        QMetaObject::connectSlotsByName(VideoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VideoWindow)
    {
        VideoWindow->setWindowTitle(QApplication::translate("VideoWindow", "MainWindow", 0));
        returnButton->setText(QString());
        startPlayButton->setText(QString());
        addVideoButton->setText(QApplication::translate("VideoWindow", "\346\267\273\345\212\240", 0));
        label->setText(QApplication::translate("VideoWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class VideoWindow: public Ui_VideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWINDOW_H
