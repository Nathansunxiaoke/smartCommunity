/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "softkey.h"

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QWidget *centralWidget;
    QLabel *adLabel;
    QPushButton *skipButton;
    QWidget *loginWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lNamelineEdit;
    QLabel *label_6;
    QLineEdit *lpasswdlineEdit;
    QLabel *label;
    QPushButton *loginButton;
    QLabel *label_12;
    QPushButton *reginButton;
    QWidget *barwidget;
    QPushButton *linkButton;
    QLabel *wifilabel;
    QPushButton *pushButton;
    QWidget *myWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    SoftKey *toolButton_154;
    SoftKey *toolButton_134;
    SoftKey *toolButton_156;
    SoftKey *toolButton_144;
    SoftKey *toolButton_129;
    SoftKey *toolButton_152;
    SoftKey *toolButton_124;
    SoftKey *toolButton_128;
    SoftKey *toolButton_158;
    SoftKey *toolButton_157;
    SoftKey *toolButton_140;
    SoftKey *toolButton_136;
    SoftKey *toolButton_132;
    SoftKey *toolButton_127;
    SoftKey *toolButton_139;
    SoftKey *toolButton_138;
    SoftKey *toolButton_141;
    SoftKey *toolButton_153;
    SoftKey *toolButton_125;
    SoftKey *toolButton_147;
    SoftKey *toolButton_131;
    SoftKey *toolButton_121;
    SoftKey *toolButton_126;
    SoftKey *toolButton_159;
    SoftKey *toolButton_148;
    SoftKey *toolButton_123;
    SoftKey *toolButton_130;
    SoftKey *toolButton_149;
    SoftKey *toolButton_151;
    SoftKey *toolButton_160;
    SoftKey *toolButton_133;
    SoftKey *toolButton_135;
    SoftKey *toolButton_137;
    SoftKey *toolButton_143;
    SoftKey *toolButton_142;
    SoftKey *toolButton_155;
    SoftKey *toolButton_150;
    SoftKey *toolButton_145;
    SoftKey *toolButton_122;
    SoftKey *toolButton_146;

    void setupUi(QMainWindow *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(800, 480);
        centralWidget = new QWidget(loginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        adLabel = new QLabel(centralWidget);
        adLabel->setObjectName(QStringLiteral("adLabel"));
        adLabel->setGeometry(QRect(0, 0, 800, 480));
        adLabel->setStyleSheet(QStringLiteral(""));
        skipButton = new QPushButton(centralWidget);
        skipButton->setObjectName(QStringLiteral("skipButton"));
        skipButton->setGeometry(QRect(700, 0, 93, 28));
        loginWidget = new QWidget(centralWidget);
        loginWidget->setObjectName(QStringLiteral("loginWidget"));
        loginWidget->setGeometry(QRect(0, 0, 800, 480));
        loginWidget->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(loginWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 39, 101, 101));
        label_2->setStyleSheet(QLatin1String("border-image: url(:/image/icon/home.png);\n"
"border-radius: 50px"));
        label_3 = new QLabel(loginWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 140, 40, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("border-image: url(:/image/icon/usr.png);\n"
"border-radius: 20px;"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/usr.png")));
        label_3->setScaledContents(true);
        lNamelineEdit = new QLineEdit(loginWidget);
        lNamelineEdit->setObjectName(QStringLiteral("lNamelineEdit"));
        lNamelineEdit->setGeometry(QRect(310, 140, 200, 40));
        lNamelineEdit->setFont(font);
        lNamelineEdit->setFocusPolicy(Qt::TabFocus);
        lNamelineEdit->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(loginWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(270, 190, 40, 40));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("border-image: url(:/image/icon/passwd.png);\n"
"border-radius: 15px"));
        lpasswdlineEdit = new QLineEdit(loginWidget);
        lpasswdlineEdit->setObjectName(QStringLiteral("lpasswdlineEdit"));
        lpasswdlineEdit->setGeometry(QRect(310, 190, 200, 40));
        lpasswdlineEdit->setFont(font);
        lpasswdlineEdit->setFocusPolicy(Qt::TabFocus);
        lpasswdlineEdit->setStyleSheet(QStringLiteral(""));
        lpasswdlineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(loginWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 60, 300, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(loginWidget);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(270, 270, 240, 40));
        loginButton->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 127);"));
        label_12 = new QLabel(loginWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(440, 240, 72, 15));
        reginButton = new QPushButton(loginWidget);
        reginButton->setObjectName(QStringLiteral("reginButton"));
        reginButton->setGeometry(QRect(270, 235, 70, 25));
        barwidget = new QWidget(loginWidget);
        barwidget->setObjectName(QStringLiteral("barwidget"));
        barwidget->setGeometry(QRect(0, 0, 800, 40));
        barwidget->setStyleSheet(QStringLiteral("background-color: rgb(230, 230, 230);"));
        linkButton = new QPushButton(barwidget);
        linkButton->setObjectName(QStringLiteral("linkButton"));
        linkButton->setGeometry(QRect(760, 0, 40, 40));
        linkButton->setStyleSheet(QLatin1String("background-image: url(:/image/icon/set.png);\n"
"border-radius: 15px"));
        wifilabel = new QLabel(barwidget);
        wifilabel->setObjectName(QStringLiteral("wifilabel"));
        wifilabel->setGeometry(QRect(0, 0, 40, 40));
        wifilabel->setStyleSheet(QLatin1String("background-image: url(:/image/icon/wifion.png);\n"
"border-radius: 50px"));
        pushButton = new QPushButton(loginWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(510, 195, 40, 30));
        pushButton->setStyleSheet(QLatin1String("border-image: url(:/image/icon/eye.png);\n"
"border-radius: 20px"));
        myWidget = new QWidget(loginWidget);
        myWidget->setObjectName(QStringLiteral("myWidget"));
        myWidget->setGeometry(QRect(0, 220, 800, 251));
        layoutWidget = new QWidget(myWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 17, 711, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolButton_154 = new SoftKey(layoutWidget);
        toolButton_154->setObjectName(QStringLiteral("toolButton_154"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_154->sizePolicy().hasHeightForWidth());
        toolButton_154->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(16);
        toolButton_154->setFont(font2);
        toolButton_154->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_154, 0, 0, 1, 1);

        toolButton_134 = new SoftKey(layoutWidget);
        toolButton_134->setObjectName(QStringLiteral("toolButton_134"));
        sizePolicy.setHeightForWidth(toolButton_134->sizePolicy().hasHeightForWidth());
        toolButton_134->setSizePolicy(sizePolicy);
        toolButton_134->setFont(font2);
        toolButton_134->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_134, 0, 1, 1, 1);

        toolButton_156 = new SoftKey(layoutWidget);
        toolButton_156->setObjectName(QStringLiteral("toolButton_156"));
        sizePolicy.setHeightForWidth(toolButton_156->sizePolicy().hasHeightForWidth());
        toolButton_156->setSizePolicy(sizePolicy);
        toolButton_156->setFont(font2);
        toolButton_156->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_156, 0, 2, 1, 1);

        toolButton_144 = new SoftKey(layoutWidget);
        toolButton_144->setObjectName(QStringLiteral("toolButton_144"));
        sizePolicy.setHeightForWidth(toolButton_144->sizePolicy().hasHeightForWidth());
        toolButton_144->setSizePolicy(sizePolicy);
        toolButton_144->setFont(font2);
        toolButton_144->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_144, 0, 3, 1, 1);

        toolButton_129 = new SoftKey(layoutWidget);
        toolButton_129->setObjectName(QStringLiteral("toolButton_129"));
        sizePolicy.setHeightForWidth(toolButton_129->sizePolicy().hasHeightForWidth());
        toolButton_129->setSizePolicy(sizePolicy);
        toolButton_129->setFont(font2);
        toolButton_129->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_129, 0, 4, 1, 1);

        toolButton_152 = new SoftKey(layoutWidget);
        toolButton_152->setObjectName(QStringLiteral("toolButton_152"));
        sizePolicy.setHeightForWidth(toolButton_152->sizePolicy().hasHeightForWidth());
        toolButton_152->setSizePolicy(sizePolicy);
        toolButton_152->setFont(font2);
        toolButton_152->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_152, 0, 5, 1, 1);

        toolButton_124 = new SoftKey(layoutWidget);
        toolButton_124->setObjectName(QStringLiteral("toolButton_124"));
        sizePolicy.setHeightForWidth(toolButton_124->sizePolicy().hasHeightForWidth());
        toolButton_124->setSizePolicy(sizePolicy);
        toolButton_124->setFont(font2);
        toolButton_124->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_124, 0, 6, 1, 1);

        toolButton_128 = new SoftKey(layoutWidget);
        toolButton_128->setObjectName(QStringLiteral("toolButton_128"));
        sizePolicy.setHeightForWidth(toolButton_128->sizePolicy().hasHeightForWidth());
        toolButton_128->setSizePolicy(sizePolicy);
        toolButton_128->setFont(font2);
        toolButton_128->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_128, 0, 7, 1, 1);

        toolButton_158 = new SoftKey(layoutWidget);
        toolButton_158->setObjectName(QStringLiteral("toolButton_158"));
        sizePolicy.setHeightForWidth(toolButton_158->sizePolicy().hasHeightForWidth());
        toolButton_158->setSizePolicy(sizePolicy);
        toolButton_158->setFont(font2);
        toolButton_158->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_158, 0, 8, 1, 1);

        toolButton_157 = new SoftKey(layoutWidget);
        toolButton_157->setObjectName(QStringLiteral("toolButton_157"));
        sizePolicy.setHeightForWidth(toolButton_157->sizePolicy().hasHeightForWidth());
        toolButton_157->setSizePolicy(sizePolicy);
        toolButton_157->setFont(font2);
        toolButton_157->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_157, 0, 9, 1, 1);

        toolButton_140 = new SoftKey(layoutWidget);
        toolButton_140->setObjectName(QStringLiteral("toolButton_140"));
        sizePolicy.setHeightForWidth(toolButton_140->sizePolicy().hasHeightForWidth());
        toolButton_140->setSizePolicy(sizePolicy);
        toolButton_140->setFont(font2);
        toolButton_140->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_140, 1, 0, 1, 1);

        toolButton_136 = new SoftKey(layoutWidget);
        toolButton_136->setObjectName(QStringLiteral("toolButton_136"));
        sizePolicy.setHeightForWidth(toolButton_136->sizePolicy().hasHeightForWidth());
        toolButton_136->setSizePolicy(sizePolicy);
        toolButton_136->setFont(font2);
        toolButton_136->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_136, 1, 1, 1, 1);

        toolButton_132 = new SoftKey(layoutWidget);
        toolButton_132->setObjectName(QStringLiteral("toolButton_132"));
        sizePolicy.setHeightForWidth(toolButton_132->sizePolicy().hasHeightForWidth());
        toolButton_132->setSizePolicy(sizePolicy);
        toolButton_132->setFont(font2);
        toolButton_132->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_132, 1, 2, 1, 1);

        toolButton_127 = new SoftKey(layoutWidget);
        toolButton_127->setObjectName(QStringLiteral("toolButton_127"));
        sizePolicy.setHeightForWidth(toolButton_127->sizePolicy().hasHeightForWidth());
        toolButton_127->setSizePolicy(sizePolicy);
        toolButton_127->setFont(font2);
        toolButton_127->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_127, 1, 3, 1, 1);

        toolButton_139 = new SoftKey(layoutWidget);
        toolButton_139->setObjectName(QStringLiteral("toolButton_139"));
        sizePolicy.setHeightForWidth(toolButton_139->sizePolicy().hasHeightForWidth());
        toolButton_139->setSizePolicy(sizePolicy);
        toolButton_139->setFont(font2);
        toolButton_139->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_139, 1, 4, 1, 1);

        toolButton_138 = new SoftKey(layoutWidget);
        toolButton_138->setObjectName(QStringLiteral("toolButton_138"));
        sizePolicy.setHeightForWidth(toolButton_138->sizePolicy().hasHeightForWidth());
        toolButton_138->setSizePolicy(sizePolicy);
        toolButton_138->setFont(font2);
        toolButton_138->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_138, 1, 5, 1, 1);

        toolButton_141 = new SoftKey(layoutWidget);
        toolButton_141->setObjectName(QStringLiteral("toolButton_141"));
        sizePolicy.setHeightForWidth(toolButton_141->sizePolicy().hasHeightForWidth());
        toolButton_141->setSizePolicy(sizePolicy);
        toolButton_141->setFont(font2);
        toolButton_141->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_141, 1, 6, 1, 1);

        toolButton_153 = new SoftKey(layoutWidget);
        toolButton_153->setObjectName(QStringLiteral("toolButton_153"));
        sizePolicy.setHeightForWidth(toolButton_153->sizePolicy().hasHeightForWidth());
        toolButton_153->setSizePolicy(sizePolicy);
        toolButton_153->setFont(font2);
        toolButton_153->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_153, 1, 7, 1, 1);

        toolButton_125 = new SoftKey(layoutWidget);
        toolButton_125->setObjectName(QStringLiteral("toolButton_125"));
        sizePolicy.setHeightForWidth(toolButton_125->sizePolicy().hasHeightForWidth());
        toolButton_125->setSizePolicy(sizePolicy);
        toolButton_125->setFont(font2);
        toolButton_125->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_125, 1, 8, 1, 1);

        toolButton_147 = new SoftKey(layoutWidget);
        toolButton_147->setObjectName(QStringLiteral("toolButton_147"));
        sizePolicy.setHeightForWidth(toolButton_147->sizePolicy().hasHeightForWidth());
        toolButton_147->setSizePolicy(sizePolicy);
        toolButton_147->setFont(font2);
        toolButton_147->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_147, 1, 9, 1, 1);

        toolButton_131 = new SoftKey(layoutWidget);
        toolButton_131->setObjectName(QStringLiteral("toolButton_131"));
        sizePolicy.setHeightForWidth(toolButton_131->sizePolicy().hasHeightForWidth());
        toolButton_131->setSizePolicy(sizePolicy);
        toolButton_131->setFont(font2);
        toolButton_131->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_131, 2, 0, 1, 1);

        toolButton_121 = new SoftKey(layoutWidget);
        toolButton_121->setObjectName(QStringLiteral("toolButton_121"));
        sizePolicy.setHeightForWidth(toolButton_121->sizePolicy().hasHeightForWidth());
        toolButton_121->setSizePolicy(sizePolicy);
        toolButton_121->setFont(font2);
        toolButton_121->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_121, 2, 1, 1, 1);

        toolButton_126 = new SoftKey(layoutWidget);
        toolButton_126->setObjectName(QStringLiteral("toolButton_126"));
        sizePolicy.setHeightForWidth(toolButton_126->sizePolicy().hasHeightForWidth());
        toolButton_126->setSizePolicy(sizePolicy);
        toolButton_126->setFont(font2);
        toolButton_126->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_126, 2, 2, 1, 1);

        toolButton_159 = new SoftKey(layoutWidget);
        toolButton_159->setObjectName(QStringLiteral("toolButton_159"));
        sizePolicy.setHeightForWidth(toolButton_159->sizePolicy().hasHeightForWidth());
        toolButton_159->setSizePolicy(sizePolicy);
        toolButton_159->setFont(font2);
        toolButton_159->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_159, 2, 3, 1, 1);

        toolButton_148 = new SoftKey(layoutWidget);
        toolButton_148->setObjectName(QStringLiteral("toolButton_148"));
        sizePolicy.setHeightForWidth(toolButton_148->sizePolicy().hasHeightForWidth());
        toolButton_148->setSizePolicy(sizePolicy);
        toolButton_148->setFont(font2);
        toolButton_148->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_148, 2, 4, 1, 1);

        toolButton_123 = new SoftKey(layoutWidget);
        toolButton_123->setObjectName(QStringLiteral("toolButton_123"));
        sizePolicy.setHeightForWidth(toolButton_123->sizePolicy().hasHeightForWidth());
        toolButton_123->setSizePolicy(sizePolicy);
        toolButton_123->setFont(font2);
        toolButton_123->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_123, 2, 5, 1, 1);

        toolButton_130 = new SoftKey(layoutWidget);
        toolButton_130->setObjectName(QStringLiteral("toolButton_130"));
        sizePolicy.setHeightForWidth(toolButton_130->sizePolicy().hasHeightForWidth());
        toolButton_130->setSizePolicy(sizePolicy);
        toolButton_130->setFont(font2);
        toolButton_130->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_130, 2, 6, 1, 1);

        toolButton_149 = new SoftKey(layoutWidget);
        toolButton_149->setObjectName(QStringLiteral("toolButton_149"));
        sizePolicy.setHeightForWidth(toolButton_149->sizePolicy().hasHeightForWidth());
        toolButton_149->setSizePolicy(sizePolicy);
        toolButton_149->setFont(font2);
        toolButton_149->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_149, 2, 7, 1, 1);

        toolButton_151 = new SoftKey(layoutWidget);
        toolButton_151->setObjectName(QStringLiteral("toolButton_151"));
        sizePolicy.setHeightForWidth(toolButton_151->sizePolicy().hasHeightForWidth());
        toolButton_151->setSizePolicy(sizePolicy);
        toolButton_151->setFont(font2);
        toolButton_151->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_151, 2, 8, 1, 1);

        toolButton_160 = new SoftKey(layoutWidget);
        toolButton_160->setObjectName(QStringLiteral("toolButton_160"));
        sizePolicy.setHeightForWidth(toolButton_160->sizePolicy().hasHeightForWidth());
        toolButton_160->setSizePolicy(sizePolicy);
        toolButton_160->setFont(font2);
        toolButton_160->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_160, 2, 9, 1, 1);

        toolButton_133 = new SoftKey(layoutWidget);
        toolButton_133->setObjectName(QStringLiteral("toolButton_133"));
        sizePolicy.setHeightForWidth(toolButton_133->sizePolicy().hasHeightForWidth());
        toolButton_133->setSizePolicy(sizePolicy);
        toolButton_133->setFont(font2);
        toolButton_133->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_133, 3, 0, 1, 1);

        toolButton_135 = new SoftKey(layoutWidget);
        toolButton_135->setObjectName(QStringLiteral("toolButton_135"));
        sizePolicy.setHeightForWidth(toolButton_135->sizePolicy().hasHeightForWidth());
        toolButton_135->setSizePolicy(sizePolicy);
        toolButton_135->setFont(font2);
        toolButton_135->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_135, 3, 1, 1, 1);

        toolButton_137 = new SoftKey(layoutWidget);
        toolButton_137->setObjectName(QStringLiteral("toolButton_137"));
        sizePolicy.setHeightForWidth(toolButton_137->sizePolicy().hasHeightForWidth());
        toolButton_137->setSizePolicy(sizePolicy);
        toolButton_137->setFont(font2);
        toolButton_137->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_137, 3, 2, 1, 1);

        toolButton_143 = new SoftKey(layoutWidget);
        toolButton_143->setObjectName(QStringLiteral("toolButton_143"));
        sizePolicy.setHeightForWidth(toolButton_143->sizePolicy().hasHeightForWidth());
        toolButton_143->setSizePolicy(sizePolicy);
        toolButton_143->setFont(font2);
        toolButton_143->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_143, 3, 3, 1, 1);

        toolButton_142 = new SoftKey(layoutWidget);
        toolButton_142->setObjectName(QStringLiteral("toolButton_142"));
        sizePolicy.setHeightForWidth(toolButton_142->sizePolicy().hasHeightForWidth());
        toolButton_142->setSizePolicy(sizePolicy);
        toolButton_142->setFont(font2);
        toolButton_142->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_142, 3, 4, 1, 1);

        toolButton_155 = new SoftKey(layoutWidget);
        toolButton_155->setObjectName(QStringLiteral("toolButton_155"));
        sizePolicy.setHeightForWidth(toolButton_155->sizePolicy().hasHeightForWidth());
        toolButton_155->setSizePolicy(sizePolicy);
        toolButton_155->setFont(font2);
        toolButton_155->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_155, 3, 5, 1, 1);

        toolButton_150 = new SoftKey(layoutWidget);
        toolButton_150->setObjectName(QStringLiteral("toolButton_150"));
        sizePolicy.setHeightForWidth(toolButton_150->sizePolicy().hasHeightForWidth());
        toolButton_150->setSizePolicy(sizePolicy);
        toolButton_150->setFont(font2);
        toolButton_150->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_150, 3, 6, 1, 1);

        toolButton_145 = new SoftKey(layoutWidget);
        toolButton_145->setObjectName(QStringLiteral("toolButton_145"));
        sizePolicy.setHeightForWidth(toolButton_145->sizePolicy().hasHeightForWidth());
        toolButton_145->setSizePolicy(sizePolicy);
        toolButton_145->setFont(font2);
        toolButton_145->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_145, 3, 7, 1, 1);

        toolButton_122 = new SoftKey(layoutWidget);
        toolButton_122->setObjectName(QStringLiteral("toolButton_122"));
        sizePolicy.setHeightForWidth(toolButton_122->sizePolicy().hasHeightForWidth());
        toolButton_122->setSizePolicy(sizePolicy);
        toolButton_122->setFont(font2);
        toolButton_122->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_122, 3, 8, 1, 1);

        toolButton_146 = new SoftKey(layoutWidget);
        toolButton_146->setObjectName(QStringLiteral("toolButton_146"));
        sizePolicy.setHeightForWidth(toolButton_146->sizePolicy().hasHeightForWidth());
        toolButton_146->setSizePolicy(sizePolicy);
        toolButton_146->setFont(font2);
        toolButton_146->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(toolButton_146, 3, 9, 1, 1);

        label_2->raise();
        label_3->raise();
        lNamelineEdit->raise();
        label_6->raise();
        lpasswdlineEdit->raise();
        label->raise();
        label_12->raise();
        loginButton->raise();
        reginButton->raise();
        barwidget->raise();
        pushButton->raise();
        myWidget->raise();
        loginWindow->setCentralWidget(centralWidget);

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "loginWindow", 0));
        adLabel->setText(QString());
        skipButton->setText(QApplication::translate("loginWindow", "\347\202\271\345\207\273\350\267\263\350\277\207", 0));
        label_2->setText(QApplication::translate("loginWindow", "icon", 0));
        label_3->setText(QString());
        lNamelineEdit->setPlaceholderText(QApplication::translate("loginWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0));
        label_6->setText(QString());
        lpasswdlineEdit->setPlaceholderText(QApplication::translate("loginWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("loginWindow", "\346\234\252\346\235\245\345\256\266\345\233\255", 0));
        loginButton->setText(QApplication::translate("loginWindow", "\347\231\273\345\275\225", 0));
        label_12->setText(QApplication::translate("loginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", 0));
        reginButton->setText(QApplication::translate("loginWindow", "\346\263\250\345\206\214\347\224\250\346\210\267", 0));
        linkButton->setText(QString());
        wifilabel->setText(QString());
        pushButton->setText(QString());
        toolButton_154->setText(QApplication::translate("loginWindow", "1", 0));
        toolButton_134->setText(QApplication::translate("loginWindow", "2", 0));
        toolButton_156->setText(QApplication::translate("loginWindow", "3", 0));
        toolButton_144->setText(QApplication::translate("loginWindow", "4", 0));
        toolButton_129->setText(QApplication::translate("loginWindow", "5", 0));
        toolButton_152->setText(QApplication::translate("loginWindow", "6", 0));
        toolButton_124->setText(QApplication::translate("loginWindow", "7", 0));
        toolButton_128->setText(QApplication::translate("loginWindow", "8", 0));
        toolButton_158->setText(QApplication::translate("loginWindow", "9", 0));
        toolButton_157->setText(QApplication::translate("loginWindow", "0", 0));
        toolButton_140->setText(QApplication::translate("loginWindow", "q", 0));
        toolButton_136->setText(QApplication::translate("loginWindow", "w", 0));
        toolButton_132->setText(QApplication::translate("loginWindow", "e", 0));
        toolButton_127->setText(QApplication::translate("loginWindow", "r", 0));
        toolButton_139->setText(QApplication::translate("loginWindow", "t", 0));
        toolButton_138->setText(QApplication::translate("loginWindow", "y", 0));
        toolButton_141->setText(QApplication::translate("loginWindow", "u", 0));
        toolButton_153->setText(QApplication::translate("loginWindow", "i", 0));
        toolButton_125->setText(QApplication::translate("loginWindow", "o", 0));
        toolButton_147->setText(QApplication::translate("loginWindow", "p", 0));
        toolButton_131->setText(QApplication::translate("loginWindow", "a", 0));
        toolButton_121->setText(QApplication::translate("loginWindow", "s", 0));
        toolButton_126->setText(QApplication::translate("loginWindow", "d", 0));
        toolButton_159->setText(QApplication::translate("loginWindow", "f", 0));
        toolButton_148->setText(QApplication::translate("loginWindow", "g", 0));
        toolButton_123->setText(QApplication::translate("loginWindow", "h", 0));
        toolButton_130->setText(QApplication::translate("loginWindow", "j", 0));
        toolButton_149->setText(QApplication::translate("loginWindow", "k", 0));
        toolButton_151->setText(QApplication::translate("loginWindow", "l", 0));
        toolButton_160->setText(QApplication::translate("loginWindow", "<-", 0));
        toolButton_133->setText(QApplication::translate("loginWindow", "z", 0));
        toolButton_135->setText(QApplication::translate("loginWindow", "x", 0));
        toolButton_137->setText(QApplication::translate("loginWindow", "c", 0));
        toolButton_143->setText(QApplication::translate("loginWindow", "v", 0));
        toolButton_142->setText(QApplication::translate("loginWindow", "b", 0));
        toolButton_155->setText(QApplication::translate("loginWindow", "n", 0));
        toolButton_150->setText(QApplication::translate("loginWindow", "m", 0));
        toolButton_145->setText(QApplication::translate("loginWindow", ",", 0));
        toolButton_122->setText(QApplication::translate("loginWindow", ".", 0));
        toolButton_146->setText(QApplication::translate("loginWindow", "/", 0));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
