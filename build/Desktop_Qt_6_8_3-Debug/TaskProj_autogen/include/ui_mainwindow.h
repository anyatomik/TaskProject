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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QPushButton *pushButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *page_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

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
        widget->setGeometry(QRect(0, -5, 731, 44));
        widget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.534, stop:0 rgba(187, 47, 241, 255), stop:1 rgba(255, 65, 215, 255));"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 85, 28));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(61, 56, 70);"));
        pushButton->setFlat(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(259, 39, 474, 423));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0.477, x2:1, y2:0.534, stop:0 rgba(47, 241, 193, 255), stop:1 rgba(65, 216, 255, 255));"));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 160, 321, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 900 11pt \"Segoe UI\";"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 180, 321, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 900 11pt \"Segoe UI\";"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(150, 200, 191, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 900 11pt \"Segoe UI\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(-1, 39, 261, 423));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.487, y1:0, x2:0.503, y2:1, stop:0 rgba(241, 186, 47, 255), stop:1 rgba(180, 255, 65, 255));"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 259, 421));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TaskProject", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\320\260\320\262\320\275\320\260\321\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\320\265\321\202\321\201\321\202\320\262\321\203\320\265\320\274 \320\262\320\260\321\201 \320\262 \320\275\320\260\321\210\320\265\320\274 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270!", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\264\320\265\321\201\321\214 \320\262\321\213 \320\274\320\276\320\266\320\265\321\202\320\265 \321\200\320\260\321\201\320\277\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\270 \321\201\320\276\321\201\321\202\320\260\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\272\320\270 \320\264\320\265\320\273.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
