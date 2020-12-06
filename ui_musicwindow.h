/********************************************************************************
** Form generated from reading UI file 'musicwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICWINDOW_H
#define UI_MUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MusicWindow)
    {
        if (MusicWindow->objectName().isEmpty())
            MusicWindow->setObjectName(QStringLiteral("MusicWindow"));
        MusicWindow->resize(800, 480);
        centralwidget = new QWidget(MusicWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MusicWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MusicWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MusicWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MusicWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MusicWindow->setStatusBar(statusbar);

        retranslateUi(MusicWindow);

        QMetaObject::connectSlotsByName(MusicWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MusicWindow)
    {
        MusicWindow->setWindowTitle(QApplication::translate("MusicWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MusicWindow: public Ui_MusicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICWINDOW_H
