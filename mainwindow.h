#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    //定义正则表达式
    QString str_1 = "^\\d+$";      //非负整数+0
    QString str_2 = "0?[1-9]\\d+$";//非负整数
    QString str_3 = "^-\\d+|0+$";  //非正整数+0
    QString str_4 = "^0?-[1-9]+$"; //非正整数
    QString str_5 = "^-?\\d+$";     //整数

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
