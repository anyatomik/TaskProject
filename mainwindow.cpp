#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    setWindowTitle("TaskProject-Настройки");
    ui->mainsett-> setCurrentIndex(1);
}


void MainWindow::on_pushButton_clicked()
{
    setWindowTitle("TaskProject-Главная");
    ui->mainsett-> setCurrentIndex(0);
}

// void MainWindow::check_checked()
// {
//     if ( ui -> checks ->currentIndex() == 0)
//     {
//         ui ->chbut_1 ->
//     }
// }



void MainWindow::on_chbut_0_clicked(bool checked)
{

}

