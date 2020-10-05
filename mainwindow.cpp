#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRegExp>
#include<QDebug>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setText(str_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QRegExp rx(ui->lineEdit_2->text());
    bool match = rx.exactMatch(ui->lineEdit->text());
    if(match == true)
    {
        ui->label_3->setStyleSheet("color:rgb(0, 255, 0);");
        ui->label_3->setText("表达式正确！");

        return;
    }
        ui->label_3->setStyleSheet("color:rgb(255, 0, 0);");
        ui->label_3->setText("表达式错误！");
}
