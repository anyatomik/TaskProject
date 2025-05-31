/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStackedWidget *mainsett;
    QWidget *main;
    QStackedWidget *checks;
    QWidget *maincheck;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *check_1;
    QTextEdit *textEdit;
    QPushButton *pushButton_5;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ch1_but;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *chbut_0;
    QSpacerItem *verticalSpacer;
    QWidget *settings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(721, 461);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/imges/calendar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -5, 731, 45));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.534, stop:0 rgba(187, 47, 241, 255), stop:1 rgba(255, 65, 215, 255));\n"
"font: 500 11pt \"Ubuntu Mono\";\n"
""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(109, 12, 80, 28));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
"	background-color: rgba(191, 64, 64, 0);\n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(192, 97, 203)\n"
"}"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 12, 86, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
"\n"
"   color: rgb(61, 56, 70);\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(192, 97, 203)\n"
"}"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(204, 12, 88, 28));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
"   \n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(192, 97, 203)\n"
"}"));
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(13, 12, 80, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
"	background-color: rgba(191, 64, 64, 0);\n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(192, 97, 203)\n"
"}"));
        pushButton_4->setIconSize(QSize(20, 20));
        pushButton_4->setFlat(true);
        mainsett = new QStackedWidget(centralwidget);
        mainsett->setObjectName("mainsett");
        mainsett->setGeometry(QRect(0, 40, 731, 421));
        mainsett->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        main = new QWidget();
        main->setObjectName("main");
        checks = new QStackedWidget(main);
        checks->setObjectName("checks");
        checks->setGeometry(QRect(210, 0, 531, 423));
        checks->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.534, stop:0 rgba(47, 241, 193, 255), stop:1 rgba(65, 216, 255, 255));\n"
"font: 500 11pt \"Ubuntu Mono\";\n"
"color: rgb(36, 31, 49);\n"
""));
        maincheck = new QWidget();
        maincheck->setObjectName("maincheck");
        layoutWidget = new QWidget(maincheck);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(90, 160, 330, 74));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,0,0);\n"
"background-color: rgba(191, 64, 64, 0);\n"
"\n"
""));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(191, 64, 64, 0);\n"
""));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(191, 64, 64, 0);"));

        verticalLayout->addWidget(label_3);

        checks->addWidget(maincheck);
        check_1 = new QWidget();
        check_1->setObjectName("check_1");
        textEdit = new QTextEdit(check_1);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 390, 421, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(103, 225, 250, 0.8)"));
        pushButton_5 = new QPushButton(check_1);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(420, 390, 91, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
" \n"
"	background-color:rgba(41, 190, 219, 0.8);\n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(246, 211, 45)\n"
"}"));
        widget1 = new QWidget(check_1);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 30, 411, 167));
        verticalLayout_5 = new QVBoxLayout(widget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0.477, x2:1, y2:0.534,\n"
"        stop:0 rgba(47, 241, 193, 255),\n"
"        stop:1 rgba(65, 216, 255, 255)\n"
"    );\n"
"\n"
"    color: rgb(36, 31, 49);\n"
"    padding-left: 25px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 1px solid gray;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(36, 31, 49);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0.477, x2:1, y2:0.534,\n"
"        stop:0 rgba(47, 241, 193, 255),\n"
"        stop:1 rgba(65, 216, 255, 255)\n"
"    );\n"
"\n"
"    color: rgb(36, 31, 49);\n"
"    padding-left: 25px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 1px solid gray;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(36, 31, 49);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0.477, x2:1, y2:0.534,\n"
"        stop:0 rgba(47, 241, 193, 255),\n"
"        stop:1 rgba(65, 216, 255, 255)\n"
"    );\n"
"\n"
"    color: rgb(36, 31, 49);\n"
"    padding-left: 25px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 1px solid gray;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(36, 31, 49);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0.477, x2:1, y2:0.534,\n"
"        stop:0 rgba(47, 241, 193, 255),\n"
"        stop:1 rgba(65, 216, 255, 255)\n"
"    );\n"
"\n"
"    color: rgb(36, 31, 49);\n"
"    padding-left: 25px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 1px solid gray;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(36, 31, 49);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(widget1);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setStyleSheet(QString::fromUtf8("QCheckBox {\n"
"    background-color: qlineargradient(\n"
"        spread:pad, x1:0, y1:0.477, x2:1, y2:0.534,\n"
"        stop:0 rgba(47, 241, 193, 255),\n"
"        stop:1 rgba(65, 216, 255, 255)\n"
"    );\n"
"\n"
"    color: rgb(36, 31, 49);\n"
"    padding-left: 25px; /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\264\320\273\321\217 \320\262\320\270\320\264\320\270\320\274\320\276\321\201\321\202\320\270 \320\270\320\275\320\264\320\270\320\272\320\260\321\202\320\276\321\200\320\260 */\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 18px;\n"
"    height: 18px;\n"
"    border: 1px solid gray;\n"
"    background: white;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: rgb(36, 31, 49);\n"
"}\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_5->addWidget(checkBox_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ch1_but = new QPushButton(widget1);
        ch1_but->setObjectName("ch1_but");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/imges/free-icon-plus-4315614-photoaidcom-invert.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ch1_but->setIcon(icon1);
        ch1_but->setIconSize(QSize(25, 25));
        ch1_but->setFlat(true);

        horizontalLayout_3->addWidget(ch1_but);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_8 = new QLabel(widget1);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 3px;\n"
"    padding: 1px 18px 1px 3px;\n"
"    min-width: 6em;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"\n"
"\n"
"/* QComboBox gets the \"on\" state when the popup is open */\n"
"QComboBox:!editable:on, QComboBox::drop-down:editable:on {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #D3D3D3, stop: 0.4 #D8D8D8,\n"
"                                stop: 0.5 #DDDDDD, stop: 1.0 #E1E1E1);\n"
"}\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
" "
                        "   border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}"));

        horizontalLayout->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_3);

        checks->addWidget(check_1);
        scrollArea = new QScrollArea(main);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-1, 0, 211, 423));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.487, y1:0, x2:0.503, y2:1, stop:0 rgba(241, 186, 47, 255), stop:1 rgba(180, 255, 65, 255));\n"
"font: 500 11pt \"Ubuntu Mono\";"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 421));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 140, 211, 151));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"font: 500 11pt \"Ubuntu Mono\";\n"
"background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(61, 56, 70);"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 30, 211, 54));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_13 = new QLabel(layoutWidget1);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(label_13);

        label_14 = new QLabel(layoutWidget1);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_4->addWidget(label_14);

        label_15 = new QLabel(layoutWidget1);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(0, 0));
        label_15->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_4->addWidget(label_15);

        label_16 = new QLabel(layoutWidget1);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_16);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(-1, 0, 212, 141));
        scrollArea_2->setStyleSheet(QString::fromUtf8(""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 210, 139));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        chbut_0 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_0->setObjectName("chbut_0");
        chbut_0->setMinimumSize(QSize(0, 30));
        chbut_0->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
" \n"
"	background-color:rgba(241, 186, 47, 255);\n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(246, 211, 45)\n"
"}"));
        chbut_0->setCheckable(true);

        verticalLayout_4->addWidget(chbut_0);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2->raise();
        groupBox->raise();
        mainsett->addWidget(main);
        settings = new QWidget();
        settings->setObjectName("settings");
        mainsett->addWidget(settings);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        mainsett->setCurrentIndex(0);
        checks->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TaskProject-\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   \320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\320\265\320\274 \320\262\320\260\321\201 \320\262 \320\275\320\260\321\210\320\265\320\274 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "  \320\227\320\264\320\265\321\201\321\214 \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \321\200\320\260\321\201\320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "        \320\270 \321\201\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\272\320\270 \320\264\320\265\320\273.", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 4", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200 5", nullptr));
        ch1_but->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\321\215\320\273\320\265\320\274\320\265\320\275\321\202 1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\321\215\320\273\320\265\320\274\320\265\320\275\321\202 2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\321\215\320\273\320\265\320\274\320\265\320\275\321\202 3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "\321\215\320\273\320\265\320\274\320\265\320\275\321\202 4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "\321\215\320\273\320\265\320\274\320\265\320\275\321\202 5", nullptr));

        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\272\320\270:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\270 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        chbut_0->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
