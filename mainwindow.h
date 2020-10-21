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
    QString str_17 = "^(?:(?!0000)[0-9]{4}-(?:(?:0[1-9]|1[0-2])-(?:0[1-9]|1[0-9]|2[0-8])|(?:0[13-9]|1[0-2])-(?:29|30)|(?:0[13578]|1[02])-31)|(?:[0-9]{2}(?:0[48]|[2468][048]|[13579][26])|(?:0[48]|[2468][048]|[13579][26])00)-02-29)$";
    //匹配校验日期
    QString str_18 = "^[a-zA-Z0-9_]+$";
    //只含数字、字母、下划线，下划线位置不限
    QString str_19 = "^((13[0-9])|(14[0-9])|(15[0-9])|(17[0-9])|(18[0-9]))\\d{8}$";
    //手机号
    QString str_20 = "(^\\d{15}$)|(^\\d{17}([0-9]|X|x)$)";
    //身份证
    QString str_21 = "[a-zA-z]+://[^s]*";
    //匹配网址URL
    QString str_22 = "^[a-zA-Z][a-zA-Z0-9_]{4,15}$";
    //匹配帐号是否合法(字母开头，允许5-16字节，允许字母数字下划线)
    QString str_23 = "^[1-9]\\d{5}$";
    //匹配中国邮政编码
    QString str_24 = "\\d+.\\d+.\\d+.\\d+";
    //提取ip地址时有用
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
