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
    QString str_6 = "^\\d+(\\.\\d+)?$";//匹配非负浮点数（正浮点数 + 0）
    QString str_7 = "^(([0-9]+\\.[0-9]*[1-9][0-9]*)|([0-9]*[1-9][0-9]*\\.[0-9]+)|([0-9]*[1-9][0-9]*))$";
    //匹配正浮点数
    QString str_8 = "^((-/d+(/./d+)?)|(0+(/.0+)?))$";
    //匹配非正浮点数（负浮点数 + 0）
    QString str_9 = "^(-(([0-9]+\\.[0-9]*[1-9][0-9]*)|([0-9]*[1-9][0-9]*\\.[0-9]+)|([0-9]*[1-9][0-9]*)))$";
    //匹配负浮点数
    QString str_10 = "^(-?\\d+)(\\.\\d+)?$";
    //匹配浮点数
    QString str_11 = "^[A-Za-z]+$";
    //匹配由26个英文字母组成的字符串
    QString str_12 = "^[A-Z]+$";
    //匹配由26个英文字母的大写组成的字符串
    QString str_13 = "^[a-z]+$";
    //匹配由26个英文字母的小写组成的字符串
    QString str_14 = "^[A-Za-z0-9]+$";
    //匹配由数字和26个英文字母组成的字符串
    QString str_15 = "^\\w+$";
    //匹配由数字、26个英文字母或者下划线组成的字符串
    QString str_16 = "^[\\w-]+(\\.[\\w-]+)*@[\\w-]+(\\.[\\w-]+)+$";
    //匹配email地址
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
