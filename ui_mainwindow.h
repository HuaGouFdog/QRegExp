/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(916, 688);
        QIcon icon;
        icon.addFile(QStringLiteral(":/lib/icon_2.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(111, 111, 111);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(892, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color: rgb(112, 255, 148);"));

        gridLayout->addWidget(label_5, 6, 1, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(0, 28));
        comboBox->setMaximumSize(QSize(1456456, 16777215));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QLatin1String("background-color:rgba(0,0,0,77);\n"
"border-color:rgba(0,0,0,102);\n"
"color:rgba(255,255,255);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:7px;"));

        gridLayout->addWidget(comboBox, 5, 1, 1, 2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 28));
        lineEdit_2->setMaximumSize(QSize(5454545, 16777215));
        QFont font3;
        font3.setPointSize(16);
        lineEdit_2->setFont(font3);
        lineEdit_2->setStyleSheet(QLatin1String("background-color:rgba(0,0,0,77);\n"
"border-color:rgba(0,0,0,102);\n"
"color:rgba(255,255,255);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:7px;"));

        gridLayout->addWidget(lineEdit_2, 3, 1, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 28));
        lineEdit->setMaximumSize(QSize(2554545, 16777215));
        lineEdit->setFont(font3);
        lineEdit->setStyleSheet(QLatin1String("background-color:rgba(0,0,0,77);\n"
"border-color:rgba(0,0,0,102);\n"
"color:rgba(255,255,255);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:7px;"));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(172, 0));
        label_4->setMaximumSize(QSize(124, 26));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 4, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(809, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 890, 418));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setTabChangesFocus(false);
        textEdit->setReadOnly(true);

        horizontalLayout->addWidget(textEdit);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 13, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(163, 29));
        pushButton->setMaximumSize(QSize(2525252, 23));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QLatin1String("#pushButton\n"
"{\n"
"background-color:rgba(0,0,0,77);\n"
"border-color:rgba(0,0,0,102);\n"
"color:rgba(255,255,255);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:7px;\n"
"}\n"
"#pushButton:hover\n"
"{\n"
"background-color: rgb(72, 72, 72);\n"
"border-color:rgba(0,0,0,102);\n"
"color:rgba(255,255,255);\n"
"border-style:solid;\n"
"border-width:1px;\n"
"border-radius:7px;\n"
"}"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(97, 26));
        label_3->setMaximumSize(QSize(222525, 23));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        label_3->setFont(font5);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 7, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\351\252\214\350\257\201", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\346\263\250\346\204\217\357\274\232C++\347\274\226\350\257\221\345\231\250\345\260\206\345\217\215\346\226\234\346\235\240\350\275\254\346\215\242\344\270\272\345\255\227\347\254\246\344\270\262\343\200\202\350\246\201\345\260\206\345\214\205\345\220\253\345\234\250\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\270\255\357\274\214\350\257\267\350\276\223\345\205\245\344\270\244\346\254\241\357\274\214\345\215\263\\\\\343\200\202\345\246\202\345\214\271\351\205\215\351\235\236\350\264\237\346\225\264\346\225\260\357\274\214\350\241\250\350\276\276\345\274\217\344\270\272^\\d+$,\344\275\206\345\234\250\345\255\227\347\254\246\344\270\262\344\270\255\345\272\224\345\206\231\344\270\272^\\\\d+$\343\200\202", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\350\241\250\350\276\276\345\274\217", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\345\214\271\351\205\215\351\235\236\350\264\237\346\225\264\346\225\260\357\274\210\346\255\243\346\225\264\346\225\260 + 0\357\274\211", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\345\214\271\351\205\215\346\255\243\346\225\264\346\225\260", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\345\214\271\351\205\215\351\235\236\346\255\243\346\225\264\346\225\260\357\274\210\350\264\237\346\225\264\346\225\260 + 0", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\345\214\271\351\205\215\350\264\237\346\225\264\346\225\260", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "\345\214\271\351\205\215\346\225\264\346\225\260", nullptr));
        comboBox->setItemText(6, QApplication::translate("MainWindow", "\345\214\271\351\205\215\351\235\236\350\264\237\346\265\256\347\202\271\346\225\260\357\274\210\346\255\243\346\265\256\347\202\271\346\225\260 + 0\357\274\211", nullptr));
        comboBox->setItemText(7, QApplication::translate("MainWindow", "\345\214\271\351\205\215\346\255\243\346\265\256\347\202\271\346\225\260", nullptr));
        comboBox->setItemText(8, QApplication::translate("MainWindow", "\345\214\271\351\205\215\351\235\236\346\255\243\346\265\256\347\202\271\346\225\260\357\274\210\350\264\237\346\265\256\347\202\271\346\225\260 + 0\357\274\211", nullptr));
        comboBox->setItemText(9, QApplication::translate("MainWindow", "\345\214\271\351\205\215\350\264\237\346\265\256\347\202\271\346\225\260", nullptr));
        comboBox->setItemText(10, QApplication::translate("MainWindow", "\345\214\271\351\205\215\346\265\256\347\202\271\346\225\260", nullptr));
        comboBox->setItemText(11, QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\224\26126\344\270\252\350\213\261\346\226\207\345\255\227\346\257\215\347\273\204\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        comboBox->setItemText(12, QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\224\26126\344\270\252\350\213\261\346\226\207\345\255\227\346\257\215\347\232\204\345\244\247\345\206\231\347\273\204\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        comboBox->setItemText(13, QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\224\26126\344\270\252\350\213\261\346\226\207\345\255\227\346\257\215\347\232\204\345\260\217\345\206\231\347\273\204\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        comboBox->setItemText(14, QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\224\261\346\225\260\345\255\227\345\222\21426\344\270\252\350\213\261\346\226\207\345\255\227\346\257\215\347\273\204\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        comboBox->setItemText(15, QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\224\261\346\225\260\345\255\227\343\200\20126\344\270\252\350\213\261\346\226\207\345\255\227\346\257\215\346\210\226\350\200\205\344\270\213\345\210\222\347\272\277\347\273\204\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        comboBox->setItemText(16, QApplication::translate("MainWindow", "\345\214\271\351\205\215email\345\234\260\345\235\200", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\357\274\232", nullptr));
        lineEdit_2->setText(QString());
        lineEdit->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\345\217\257\350\203\275\347\224\250\345\210\260\347\232\204\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\357\274\232", nullptr));
        label->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\350\246\201\351\252\214\350\257\201\347\232\204\345\206\205\345\256\271\357\274\232", nullptr));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\" margin-top:0px; margin-bottom:24px; margin-left:0px; margin-right:0px;\" align=\"center\" cellspacing=\"2\" cellpadding=\"0\" bgcolor=\"#ffffff\"><thead>\n"
"<tr>\n"
"<td bgcolor=\"#eff3f5\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; font-weight:696; color:#4f4f4f; background-color:#eff3f5;\""
                        ">\345\270\270\347\224\250\346\240\207\350\257\206</span></p></td>\n"
"<td bgcolor=\"#eff3f5\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; font-weight:696; color:#4f4f4f; background-color:#eff3f5;\">\345\220\253\344\271\211</span></p></td></tr></thead>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro He"
                        "i,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">c</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\351\231\244\351\235\236\345\205\267\346\234\211\347\211\271\346\256\212\347\232\204\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\345\220\253\344\271\211(., ^, $, [, ], * , +, ? )\357\274\214\345\220\246\345\210\231\345\255\227\347\254\246\350\241\250\347\244\272\350\207\252\350\272\253\343\200\202\344\276\213\345\246\202c\345\214\271\351\205\215\345\255\227\347\254\246c</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-"
                        "align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\c</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\351\231\244\344\273\245\344\270\213\346\214\207\345\256\232\347\232\204\345\255\227\347\254\246\345\244\226\357\274"
                        "\214\345\217\215\346\226\234\346\235\240\345\220\216\351\235\242\347\232\204\345\255\227\347\254\246\344\270\216\345\255\227\347\254\246\346\234\254\350\272\253\345\214\271\351\205\215\343\200\202\344\276\213\345\246\202\357\274\214\350\246\201\345\214\271\351\205\215\345\255\227\347\254\246\344\270\262\345\274\200\345\244\264\347\232\204\346\226\207\345\255\227\346\217\222\345\205\245\347\254\246\357\274\214\350\257\267\345\206\231\\ ^</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\a</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; paddin"
                        "g-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215ASCII\351\223\203\345\243\260\357\274\210BEL\357\274\2140x07\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\f</span></p></td>\n"
"<td "
                        "bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215ASCII\346\215\242\351\241\265\357\274\210FF\357\274\2140x0C\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f;"
                        " background-color:#ffffff;\">\\n</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215ASCII\346\215\242\350\241\214\347\254\246\357\274\210LF\357\274\2140x0A\357\274\214Unix\346\215\242\350\241\214\347\254\246\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF U"
                        "I Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\r</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215ASCII\345\233\236\350\275\246\357\274\210CR\357\274\2140x0D\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-heig"
                        "ht:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\t</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\344\270\216ASCII\346\260\264\345\271\263\345\210\266\350\241\250\347\254\246\357\274\210HT\357\274\2140x09\357\274\211\345\214\271\351\205\215</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:"
                        "0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\v</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215ASCII\345\236\202\347\233\264\345\210\266\350\241\250\347\254\246\357\274\210VT\357\274\2140x0B\357\274\211\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align"
                        ":middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\xhhhh</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\344\270\216\345\215\201\345\205\255\350\277\233\345\210\266\346\225\260\345\255\227hhhh\357"
                        "\274\210\345\234\2500x0000\345\222\2140xFFFF\344\271\213\351\227\264\357\274\211\347\233\270\345\257\271\345\272\224\347\232\204Unicode\345\255\227\347\254\246</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\0ooo\357\274\210\345\215\263\\ zero ooo\357\274\211</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-famil"
                        "y:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215ASCII / Latin1\345\255\227\347\254\246\347\232\204\345\205\253\350\277\233\345\210\266\346\225\260ooo\357\274\210\344\273\213\344\272\2160\345\222\2140377\344\271\213\351\227\264\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">.(dot)</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bo"
                        "ttom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\344\273\273\344\275\225\345\255\227\347\254\246\357\274\210\345\214\205\346\213\254\346\215\242\350\241\214\347\254\246\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\d</span></p></td>\n"
""
                        "<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215\344\270\200\344\270\252\346\225\260\345\255\227\357\274\210QChar :: isDigit\357\274\210\357\274\211\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro He"
                        "i,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\D</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\344\270\200\344\270\252\351\235\236\346\225\260\345\255\227\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingF"
                        "ang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\s</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215\344\270\200\344\270\252\347\251\272\347\231\275\345\255\227\347\254\246</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span "
                        "style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\S</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\351\235\236\347\251\272\346\240\274\345\255\227\347\254\246\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
                        "lock-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\w</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215\345\215\225\350\257\215\345\255\227\347\254\246\357\274\210QChar :: isLetterOrNumber\357\274\210\357\274\211\357\274\214QChar :: isMark\357\274\210\357\274\211\346\210\226\342\200\234 _\342\200\235\357\274\211\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgco"
                        "lor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\W</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\351\235\236\345\215\225\350\257\215\345\255\227\347\254\246"
                        "\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\n</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\347\254\254n\344\270\252\345"
                        "\217\215\345\220\221\345\274\225\347\224\250\357\274\214\344\276\213\345\246\202\\ 1\357\274\214\\ 2\347\255\211\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">^</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanY"
                        "i Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\246\202\346\236\234\345\255\227\347\254\246\351\233\206\344\275\234\344\270\272\347\254\254\344\270\200\344\270\252\345\255\227\347\254\246\345\207\272\347\216\260\357\274\210\345\215\263\347\264\247\346\216\245\345\234\250\346\226\271\346\213\254\345\217\267\344\271\213\345\220\216\357\274\211\357\274\214\345\210\231\346\217\222\345\205\245\347\254\246\345\260\206\345\220\246\345\256\232\350\257\245\345\255\227\347\254\246\351\233\206\343\200\202[ABC]\345\214\271\351\205\215\342\200\231a\342\200\231\346\210\226\342\200\231b\342\200\231\346\210\226\342\200\231c\342\200\231\347\232\204\357\274\214\344\275\206[^ ABC]\345\214\271\351\205\215\344\273\273\344\275\225\344\275\206\342\200\231a\342\200\231\346\210\226\342\200\231b\342\200\231\346\210\226\342\200\231c\342\200\231\347\232\204\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding"
                        "-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">-</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\347\240\264\346\212\230\345\217\267\350\241\250\347\244\272\345\255\227\347\254\246\350\214\203\345\233\264\343\200\202[W-Z]\344\270\216\342\200\234 W\342\200\235\346\210"
                        "\226\342\200\234 X\342\200\235\346\210\226\342\200\234 Y\342\200\235\346\210\226\342\200\234 Z\342\200\235\345\214\271\351\205\215\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">a?</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Micro"
                        "soft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\357\274\237\344\273\243\350\241\2500\344\270\252\346\210\2261\344\270\252</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">a*</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial"
                        ",PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">*\344\273\243\350\241\2500\344\270\252\346\210\2261\344\270\252\346\210\226\345\244\232\344\270\252</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">a+</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\""
                        "><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">+\344\273\243\350\241\2501\344\270\252\346\210\226\345\244\232\344\270\252</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">a{3}</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0;"
                        " text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215a3\346\254\241</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">a{3,}</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215a\345\244\247\344\272\216\347\255\211\344\272\2163\346\254\241</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">a{,6}</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">a\345\214\271\351\205\215\350\207\263\345\244\232m\346\254\241\357\274\214\347\255\211\344\273\267\344\272\216a{0,6}</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">a{3,6}</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bot"
                        "tom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">a\345\214\271\351\205\215\350\207\263\345\260\2213\346\254\241\357\274\214\350\207\263\345\244\2326\346\254\241\357\274\210\345\214\205\346\213\2543\345\222\2146\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">^</s"
                        "pan></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\260\226\345\217\267\350\241\250\347\244\272\345\255\227\347\254\246\344\270\262\347\232\204\345\274\200\345\244\264\343\200\202\345\246\202\346\236\234\346\202\250\346\203\263\345\214\271\351\205\215\346\226\207\345\255\227</span><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f;\">\357\274\214\345\210\231\345\277\205\351\241\273\351\200\232\350\277\207\344\271\246\345\206\231\345\260\206\345\205\266\350\275\254\344\271"
                        "\211\\\343\200\202\344\276\213\345\246\202\357\274\214^\357\274\203include\345\260\206\344\273\205\345\214\271\351\205\215\344\273\245\345\255\227\347\254\246\342\200\231#include\342\200\231\345\274\200\345\244\264\347\232\204\345\255\227\347\254\246\344\270\262\343\200\202\357\274\210\345\275\223\346\217\222\345\205\245\345\217\267\346\230\257\345\255\227\347\254\246\351\233\206\347\232\204\347\254\254\344\270\200\344\270\252\345\255\227\347\254\246\346\227\266\357\274\214\345\256\203\345\205\267\346\234\211\347\211\271\346\256\212\345\220\253\344\271\211\357\274\214\350\257\267\345\217\202\350\247\201\345\255\227\347\254\246\351\233\206\343\200\202\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text"
                        ",Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">$</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\347\276\216\345\205\203\350\241\250\347\244\272\345\255\227\347\254\246\344\270\262\347\232\204\347\273\223\345\260\276\343\200\202\344\276\213\345\246\202\357\274\214\\ d \\ s *</span><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f;\"> </span><span style=\" font-family:'KaT"
                        "eX_Main,Times New Roman,serif'; font-size:14px; color:#4f4f4f;\">\345\260\206\345\214\271\351\205\215\344\273\245\346\225\260\345\255\227\347\273\223\345\260\276\357\274\210\345\217\257\351\200\211\357\274\211\345\220\216\350\267\237\347\251\272\346\240\274\347\232\204\345\255\227\347\254\246\344\270\262\343\200\202\345\246\202\346\236\234\346\202\250\346\203\263\345\214\271\351\205\215\346\226\207\345\255\227\345\260\206\345\214\271\351\205\215\344\273\245\346\225\260\345\255\227\347\273\223\345\260\276\357\274\210\345\217\257\351\200\211\357\274\211\345\220\216\350\267\237\347\251\272\346\240\274\347\232\204\345\255\227\347\254\246\344\270\262\343\200\202\345\246\202\346\236\234\346\202\250\346\203\263\345\214\271\351\205\215\346\226\207\345\255\227</span><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f;\">\357\274\214\345\210\231\345\277\205\351\241\273\351\200\232\350\277\207\344\271\246\345"
                        "\206\231\345\260\206\345\205\266\350\275\254\344\271\211\\$\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\\b</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4"
                        "f4f; background-color:#f7f7f7;\">\345\215\225\350\257\215\350\276\271\347\225\214\343\200\202\344\276\213\345\246\202\357\274\214\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\\ bOK \\ b\350\241\250\347\244\272\345\234\250\345\215\225\350\257\215\350\276\271\347\225\214\357\274\210\344\276\213\345\246\202\345\255\227\347\254\246\344\270\262\346\210\226\347\251\272\347\231\275\347\232\204\345\274\200\345\244\264\357\274\211\344\271\213\345\220\216\347\253\213\345\215\263\345\214\271\351\205\215\345\255\227\346\257\215\342\200\234 O\342\200\235\357\274\214\347\204\266\345\220\216\347\264\247\346\216\245\345\234\250\345\217\246\344\270\200\344\270\252\345\215\225\350\257\215\350\276\271\347\225\214\357\274\210\344\276\213\345\246\202\345\255\227\347\254\246\344\270\262\346\210\226\347\251\272\347\231\275\347\232\204\347\273\223\345\260\276\357\274\211\344\271\213\345\211\215\345\214\271\351\205\215\345\255\227\346\257\215\342\200\234 K\342\200\235\343\200\202\344\275\206\346\230\257\350\257\267\346\263"
                        "\250\346\204\217\357\274\214\350\257\245\346\226\255\350\250\200\345\256\236\351\231\205\344\270\212\345\271\266\344\270\215\344\270\216\344\273\273\344\275\225\347\251\272\346\240\274\345\214\271\351\205\215\357\274\214\345\233\240\346\255\244\345\246\202\346\236\234\346\210\221\344\273\254\347\274\226\345\206\231\357\274\210\\ bOK \\ b\357\274\211\345\271\266\344\270\224\345\205\267\346\234\211\345\214\271\351\205\215\351\241\271\357\274\214\345\215\263\344\275\277\350\257\245\345\255\227\347\254\246\344\270\262\344\270\272\342\200\234 It\342\200\231s OK now\342\200\235\357\274\214\345\256\203\344\271\237\345\260\206\344\273\205\345\214\205\345\220\253\342\200\234 OK \342\200\235\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-"
                        "family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\\B</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\351\235\236\345\215\225\350\257\215\350\276\271\347\225\214\343\200\202\345\217\252\350\246\201\\ b\344\270\272\345\201\207\357\274\214\350\257\245\346\226\255\350\250\200\345\260\261\344\270\272\347\234\237\343\200\202\344\276\213\345\246\202\357\274\214\345\246\202\346\236\234\346\210\221\344\273\254\345\234\250\342\200\234 Left on\342\200\235\344\270\255\346"
                        "\220\234\347\264\242\\ Bon \\ B\357\274\214\345\210\231\345\214\271\351\205\215\345\260\206\345\244\261\350\264\245\357\274\210\345\255\227\347\254\246\344\270\262\347\232\204\347\251\272\346\240\274\345\222\214\347\273\223\345\260\276\344\270\215\346\230\257\351\235\236\345\215\225\350\257\215\350\276\271\347\225\214\357\274\211\357\274\214\344\275\206\345\260\206\345\234\250\342\200\234 t on ne\342\200\235\344\270\255\345\214\271\351\205\215\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\357\274\210?= E\357\274\211</span></p></td>\n"
"<td bgcolor=\"#f7f"
                        "7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\347\247\257\346\236\201\345\220\221\345\211\215\343\200\202\345\246\202\346\236\234\350\241\250\350\276\276\345\274\217\346\255\244\346\227\266\345\234\250regexp\344\270\255\345\214\271\351\205\215\357\274\214\345\210\231\346\255\244\346\226\255\350\250\200\344\270\272true\343\200\202\344\276\213\345\246\202\357\274\214const\357\274\210\357\274\237= \\ s + char\357\274\211\346\257\217\346\254\241\344\270\216\342\200\234 const\342\200\235\345\214\271\351\205\215\346\227\266\351\203\275\350\267\237\342\200\234 char\342\200\235\357\274\214\344\276\213\345\246\202\342\200\234"
                        " static const char *\342\200\235\343\200\202\357\274\210\344\270\216const \\ s + char\350\277\233\350\241\214\346\257\224\350\276\203\357\274\214\345\220\216\350\200\205\345\214\271\351\205\215\342\200\234\351\235\231\346\200\201const char *\342\200\235\343\200\202\357\274\211</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\357\274\210?!E\357\274\211</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\350\264\237\345\211\215\347\236\273\343\200\202\345\246\202\346\236\234\346\255\244\350\241\250\350\276\276\345\274\217\345\234\250regexp\344\270\255\344\270\215\345\214\271\351\205\215\357\274\214\345\210\231\346\255\244\346\226\255\350\250\200\344\270\272true\343\200\202\344\276\213\345\246\202\357\274\214const\357\274\210\357\274\237\357\274\201\\ s + char\357\274\211\344\270\216\342\200\231const\342\200\231\345\214\271\351\205\215\357\274\214\351\231\244\351\235\236\345\220\216\351\235\242\350\267\237\346\234\211\342\200\231char\342\200\231\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">c</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\351\231\244\344\272\206\344\270\213\351\235\242\346\217\220\345\210\260\347\232\204\351\202\243\344\272\233\345\255\227\347\254\246\344\273\245\345\244\226\357\274\214\344\273\273\344\275\225\345\255\227\347\254\246\351\203\275\344\273\243"
                        "\350\241\250\350\207\252\345\267\261\343\200\202\345\233\240\346\255\244\357\274\214c\344\270\216\345\255\227\347\254\246c\347\233\270\345\214\271\351\205\215\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">?</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFan"
                        "g SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\214\271\351\205\215\344\273\273\344\275\225\345\215\225\344\270\252\345\255\227\347\254\246\343\200\202\344\270\216\347\233\270\345\220\214\343\200\202\345\234\250\345\256\214\346\225\264\347\232\204\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\270\255\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">*</span></p></td>\n"
"<td bgcolor=\"#f7f7f7\" style=\" vertical-align:middle; padding-left:8; padding-right:"
                        "8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#f7f7f7;\">\345\214\271\351\205\215\351\233\266\344\270\252\346\210\226\345\244\232\344\270\252\344\273\273\344\275\225\345\255\227\347\254\246\343\200\202\344\270\216\345\256\214\346\225\264\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\344\270\255\347\232\204\343\200\202*\347\233\270\345\220\214\343\200\202</span></p></td></tr>\n"
"<tr>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-ap"
                        "ple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">[\342\200\246]</span></p></td>\n"
"<td bgcolor=\"#ffffff\" style=\" vertical-align:middle; padding-left:8; padding-right:8; padding-top:8; padding-bottom:8;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:22px;\"><span style=\" font-family:'-apple-system,SF UI Text,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#4f4f4f; background-color:#ffffff;\">\345\255\227\347\254\246\351\233\206\345\217\257\344\273\245\347\224\250\346\226\271\346\213\254\345\217\267\350\241\250\347\244\272\357\274\214\347\261\273\344\274\274\344\272\216\345\256\214\346\225\264\347\232\204\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217\343\200\202\345\234\250\345\255\227\347\254\246\347\261\273\344\270\255\357\274\214\344"
                        "\270\216\345\244\226\351\203\250\344\270\200\346\240\267\357\274\214\345\217\215\346\226\234\346\235\240\346\262\241\346\234\211\347\211\271\346\256\212\345\220\253\344\271\211\343\200\202</span></p></td></tr></table></body></html>", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\346\243\200 \351\252\214 \346\255\243 \345\210\231 \350\241\250 \350\276\276 \345\274\217", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
