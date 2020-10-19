#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRegExp>
#include<QDebug>
#include<QString>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::on_comboBox_activated(int index)
{
    if(index==0)ui->lineEdit_2->setText("");
    if(index==1)ui->lineEdit_2->setText(str_1);
    if(index==2)ui->lineEdit_2->setText(str_2);
    if(index==3)ui->lineEdit_2->setText(str_3);
    if(index==4)ui->lineEdit_2->setText(str_4);
    if(index==5)ui->lineEdit_2->setText(str_5);
    if(index==6)ui->lineEdit_2->setText(str_6);
    if(index==7)ui->lineEdit_2->setText(str_7);
    if(index==8)ui->lineEdit_2->setText(str_8);
    if(index==9)ui->lineEdit_2->setText(str_9);
    if(index==10)ui->lineEdit_2->setText(str_10);
    if(index==11)ui->lineEdit_2->setText(str_11);
    if(index==12)ui->lineEdit_2->setText(str_12);
    if(index==13)ui->lineEdit_2->setText(str_13);
    if(index==14)ui->lineEdit_2->setText(str_14);
    if(index==15)ui->lineEdit_2->setText(str_15);
    if(index==16)ui->lineEdit_2->setText(str_16);
}
