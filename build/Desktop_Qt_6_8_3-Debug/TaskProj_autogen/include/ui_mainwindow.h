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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
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
    QWidget *check_2;
    QWidget *check_3;
    QWidget *check_4;
    QWidget *check_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGroupBox *groupBox;
    QWidget *widget1;
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
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *chbut_0;
    QPushButton *chbut_1;
    QPushButton *chbut_2;
    QPushButton *chbut_3;
    QPushButton *chbut_4;
    QPushButton *chbut_6;
    QWidget *settings;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(730, 461);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/imges/calendar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, -5, 731, 45));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.534, stop:0 rgba(187, 47, 241, 255), stop:1 rgba(255, 65, 215, 255));\n"
"font: 700 11pt \"Segoe UI\";\n"
""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(12, 11, 80, 28));
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
        pushButton_2->setGeometry(QRect(192, 11, 86, 28));
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
        pushButton_3->setGeometry(QRect(98, 11, 88, 28));
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
"font: 700 11pt \"Segoe UI\";\n"
""));
        maincheck = new QWidget();
        maincheck->setObjectName("maincheck");
        layoutWidget = new QWidget(maincheck);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(111, 160, 321, 74));
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
        checks->addWidget(check_1);
        check_2 = new QWidget();
        check_2->setObjectName("check_2");
        checks->addWidget(check_2);
        check_3 = new QWidget();
        check_3->setObjectName("check_3");
        checks->addWidget(check_3);
        check_4 = new QWidget();
        check_4->setObjectName("check_4");
        checks->addWidget(check_4);
        check_5 = new QWidget();
        check_5->setObjectName("check_5");
        checks->addWidget(check_5);
        scrollArea = new QScrollArea(main);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 211, 423));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.487, y1:0, x2:0.503, y2:1, stop:0 rgba(241, 186, 47, 255), stop:1 rgba(180, 255, 65, 255));\n"
"font: 700 11pt \"Segoe UI\";"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 209, 421));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 270, 211, 151));
        groupBox->setStyleSheet(QString::fromUtf8("\n"
"font: 700 11pt \"Segoe UI\";\n"
"background-color: rgba(191, 64, 64, 0);\n"
"color: rgb(61, 56, 70);"));
        widget1 = new QWidget(groupBox);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(0, 30, 211, 54));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(60, 0));
        label_4->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_2->addWidget(label_5);

        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_2->addWidget(label_6);

        label_7 = new QLabel(widget1);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(0, 0));

        horizontalLayout_2->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_13 = new QLabel(widget1);
        label_13->setObjectName("label_13");
        label_13->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(label_13);

        label_14 = new QLabel(widget1);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(0, 0));
        label_14->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_4->addWidget(label_14);

        label_15 = new QLabel(widget1);
        label_15->setObjectName("label_15");
        label_15->setMinimumSize(QSize(0, 0));
        label_15->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_4->addWidget(label_15);

        label_16 = new QLabel(widget1);
        label_16->setObjectName("label_16");
        label_16->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_16);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(10, 0, 91, 28));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
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
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(110, 0, 91, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" \n"
"	background-color: rgba(241, 186, 47, 255);\n"
"   color: rgb(61, 56, 70);\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(248, 228, 92)\n"
"}"));
        pushButton_5->setFlat(true);
        scrollArea_2 = new QScrollArea(scrollAreaWidgetContents);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(-1, 20, 211, 251));
        scrollArea_2->setStyleSheet(QString::fromUtf8(""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 209, 249));
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

        chbut_1 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_1->setObjectName("chbut_1");
        chbut_1->setMinimumSize(QSize(0, 30));
        chbut_1->setStyleSheet(QString::fromUtf8("\n"
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
        chbut_1->setCheckable(true);

        verticalLayout_4->addWidget(chbut_1);

        chbut_2 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_2->setObjectName("chbut_2");
        chbut_2->setMinimumSize(QSize(0, 30));
        chbut_2->setStyleSheet(QString::fromUtf8("\n"
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
        chbut_2->setCheckable(true);

        verticalLayout_4->addWidget(chbut_2);

        chbut_3 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_3->setObjectName("chbut_3");
        chbut_3->setMinimumSize(QSize(0, 30));
        chbut_3->setStyleSheet(QString::fromUtf8("\n"
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
        chbut_3->setCheckable(true);

        verticalLayout_4->addWidget(chbut_3);

        chbut_4 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_4->setObjectName("chbut_4");
        chbut_4->setMinimumSize(QSize(0, 30));
        chbut_4->setStyleSheet(QString::fromUtf8("\n"
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
        chbut_4->setCheckable(true);

        verticalLayout_4->addWidget(chbut_4);

        chbut_6 = new QPushButton(scrollAreaWidgetContents_2);
        chbut_6->setObjectName("chbut_6");
        chbut_6->setMinimumSize(QSize(191, 30));
        chbut_6->setStyleSheet(QString::fromUtf8("\n"
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
        chbut_6->setCheckable(true);

        verticalLayout_4->addWidget(chbut_6);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget1->raise();
        scrollArea_2->raise();
        groupBox->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        mainsett->addWidget(main);
        settings = new QWidget();
        settings->setObjectName("settings");
        mainsett->addWidget(settings);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        mainsett->setCurrentIndex(0);
        checks->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TaskProject-\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "   \320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\320\265\320\274 \320\262\320\260\321\201 \320\262 \320\275\320\260\321\210\320\265\320\274 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "  \320\227\320\264\320\265\321\201\321\214 \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \321\200\320\260\321\201\320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "                \320\270 \321\201\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\272\320\270 \320\264\320\265\320\273.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\272\320\270:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\207\320\270 \320\262 \321\201\320\277\320\270\321\201\320\272\320\265:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\270\320\267", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_0->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        chbut_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
