#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> chbut_0 -> setVisible(false);
    ui -> checkBox -> setVisible(false);
    ui -> checkBox_2 -> setVisible(false);
    ui -> checkBox_3 -> setVisible(false);
    ui -> checkBox_4 -> setVisible(false);
    ui -> checkBox_5 -> setVisible(false);
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
    ui -> checks -> setCurrentIndex(0);
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

void MainWindow::all_hide()
{
    if (ch0 == false)
        {

        }
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{

}


void MainWindow::on_chbut_0_clicked()
{
    ui -> checks -> setCurrentIndex(1);
}


void MainWindow::on_pushButton_4_clicked()
{
    ui -> chbut_0 -> setVisible(true);
}

void MainWindow::checks_1()
{
    if (checkks_1 == 0)
    {
        ui -> checkBox -> setVisible(true);
        checkks_1++;
    }
    else if (checkks_1 == 1)
    {
        ui -> checkBox_2 -> setVisible(true);
        checkks_1++;
    }
    else if (checkks_1 == 2)
    {
        ui -> checkBox_3 -> setVisible(true);
        checkks_1++;
    }
    else if (checkks_1 == 3)
    {
        ui -> checkBox_4 -> setVisible(true);
        checkks_1++;
    }
    else if (checkks_1 == 4)
    {
        ui -> checkBox_5 -> setVisible(true);
        checkks_1++;
    }
    else if (checkks_1 >4)
    {

    }
}


void MainWindow::on_ch1_but_clicked()
{
    checks_1();
}


void MainWindow::on_pushButton_5_clicked()
{
    ui -> textEdit -> clear();

}

