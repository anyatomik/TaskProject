#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool ch0;
    bool ch1;
    bool ch2;
    bool ch0_butts[9];
    bool ch1_butts[9];
    bool ch2_butts[9];
    int checkks_1 = 0;



private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    //void check_checked();

    void on_chbut_0_clicked(bool checked);
    void all_hide();

    void on_checkBox_stateChanged(int arg1);

    void on_chbut_0_clicked();

    void on_pushButton_4_clicked();

    void checks_1();

    void on_ch1_but_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
