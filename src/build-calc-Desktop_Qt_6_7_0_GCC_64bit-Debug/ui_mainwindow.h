/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *le_entry;
    QPushButton *btn_x;
    QPushButton *btn_plot;
    QPushButton *btn_credit;
    QSpinBox *doubleSpinBox_x;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_ymnogenie;
    QPushButton *btn_plus;
    QPushButton *btn_1;
    QPushButton *btn_calc;
    QPushButton *btn_tochka;
    QPushButton *btn_0;
    QPushButton *btn_minus;
    QPushButton *btn_delenie;
    QPushButton *btn_6;
    QPushButton *btn_5;
    QPushButton *btn_4;
    QPushButton *btn_9;
    QPushButton *btn_8;
    QPushButton *btn_7;
    QPushButton *btn_AC;
    QPushButton *btn_stepen;
    QPushButton *btn_CE;
    QLabel *lbl_temp;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btn_RBR;
    QPushButton *btn_LBR;
    QPushButton *btn_sin;
    QPushButton *btn_mod;
    QPushButton *btn_asin;
    QPushButton *btn_sqrt;
    QPushButton *btn_ln;
    QPushButton *btn_log;
    QPushButton *btn_acos;
    QPushButton *btn_cos;
    QPushButton *btn_atan;
    QPushButton *btn_tan;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *line_x_max;
    QLineEdit *line_y_max;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit;
    QLineEdit *line_x_min;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_2;
    QLineEdit *line_y_min;
    QCustomPlot *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1212, 613);
        MainWindow->setMinimumSize(QSize(915, 400));
        MainWindow->setMaximumSize(QSize(2000, 2000));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-color: #000000;\n"
"  font-family: Rubik;\n"
"  color: white;\n"
"  font-size: 16pt;\n"
"}\n"
"\n"
"QPushButton#btn_AC, QPushButton#btn_CE {\n"
"  background: #cccccc;\n"
"  color: #000000;\n"
"  border-radius: 50%;\n"
"  font-size: 18px;\n"
"  min-width: 40px;\n"
"  min-height: 40px; \n"
"}\n"
"\n"
"QPushButton#btn_mod, \n"
"QPushButton#btn_ymnogenie, \n"
"QPushButton#btn_minus, \n"
"QPushButton#btn_plus, \n"
"QPushButton#btn_calc,\n"
"QPushButton#btn_sqrt,\n"
"QPushButton#btn_acos,\n"
"QPushButton#btn_asin,\n"
"QPushButton#btn_atan, \n"
"QPushButton#btn_cos,\n"
"QPushButton#btn_sin,\n"
"QPushButton#btn_log,\n"
"QPushButton#btn_ln,\n"
"QPushButton#btn_LBR,\n"
"QPushButton#btn_procent,\n"
"QPushButton#btn_RBR,\n"
"QPushButton#btn_stepen, \n"
"QPushButton#btn_stepen05,\n"
"QPushButton#btn_stepen2,\n"
"QPushButton#btn_tan,\n"
"QPushButton#btn_delenie,\n"
"QPushButton#btn_credit\n"
"{\n"
"  background: #ff6600;\n"
"  color: #ffffff;\n"
"  border-radius: 50%;\n"
"  font-size: 18px;\n"
" "
                        " min-width: 40px;\n"
"  min-height: 40px; \n"
"}\n"
"\n"
"QPushButton#btn_1, QPushButton#btn_2, \n"
"QPushButton#btn_3, QPushButton#btn_4, \n"
"QPushButton#btn_5, QPushButton#btn_6, \n"
"QPushButton#btn_7, QPushButton#btn_8, \n"
"QPushButton#btn_9, QPushButton#btn_0, \n"
"QPushButton#btn_tochka, QPushButton#btn_plus_minus,\n"
"QPushButton#btn_change_calc, QPushButton#btn_plot, \n"
"QPushButton#btn_x {\n"
"  background: #2c2b2b; \n"
"  color: #ffffff;\n"
"  border-radius: 50%;\n"
"  font-size: 18px;\n"
"  min-width: 40px;\n"
"  min-height: 40px; \n"
"}\n"
"\n"
"QPushButton#btn_AC:hover,\n"
"QPushButton#btn_CE:hover,\n"
"QPushButton#btn_1:hover,\n"
"QPushButton#btn_2:hover,\n"
"QPushButton#btn_3:hover,\n"
"QPushButton#btn_4:hover,\n"
"QPushButton#btn_5:hover,\n"
"QPushButton#btn_6:hover,\n"
"QPushButton#btn_7:hover,\n"
"QPushButton#btn_8:hover,\n"
"QPushButton#btn_9:hover,\n"
"QPushButton#btn_0:hover,\n"
"QPushButton#btn_tochka:hover,\n"
"QPushButton#btn_plus_minus:hover,\n"
"QPushButton#btn_change_calc:hover,\n"
""
                        "QPushButton#btn_plot:hover, \n"
"QPushButton#btn_x:hover {\n"
"background-color: #666;\n"
"}\n"
"\n"
"QPushButton#btn_mod:hover,\n"
"QPushButton#btn_ymnogenie:hover,\n"
"QPushButton#btn_minus:hover,\n"
"QPushButton#btn_plus:hover, \n"
"QPushButton#btn_calc:hover,\n"
"QPushButton#btn_sqrt:hover,\n"
"QPushButton#btn_acos:hover,\n"
"QPushButton#btn_asin:hover,\n"
"QPushButton#btn_atan:hover, \n"
"QPushButton#btn_cos:hover,\n"
"QPushButton#btn_sin:hover,\n"
"QPushButton#btn_log:hover,\n"
"QPushButton#btn_ln:hover,\n"
"QPushButton#btn_LBR:hover,\n"
"QPushButton#btn_procent:hover,\n"
"QPushButton#btn_RBR:hover,\n"
"QPushButton#btn_stepen:hover, \n"
"QPushButton#btn_stepen05:hover,\n"
"QPushButton#btn_stepen2:hover,\n"
"QPushButton#btn_tan:hover,\n"
"QPushButton#btn_delenie:hover,\n"
"QPushButton#btn_credit:hover\n"
"{\n"
"background: #e7a477;\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QPushButton#btn_mod:pressed,\n"
"QPushButton#btn_ymnogenie:pressed,\n"
"QPushButton#btn_minus:pressed,\n"
"QPushButton#btn_plus:pressed, \n"
""
                        "QPushButton#btn_calc:pressed,\n"
"QPushButton#btn_sqrt:pressed,\n"
"QPushButton#btn_acos:pressed,\n"
"QPushButton#btn_asin:pressed,\n"
"QPushButton#btn_atan:pressed, \n"
"QPushButton#btn_cos:pressed,\n"
"QPushButton#btn_sin:pressed,\n"
"QPushButton#btn_log:pressed,\n"
"QPushButton#btn_ln:pressed,\n"
"QPushButton#btn_LBR:pressed,\n"
"QPushButton#btn_procent:pressed,\n"
"QPushButton#btn_RBR:pressed,\n"
"QPushButton#btn_stepen:pressed, \n"
"QPushButton#btn_stepen05:pressed,\n"
"QPushButton#btn_stepen2:pressed,\n"
"QPushButton#btn_tan:pressed,\n"
"QPushButton#btn_delenie:pressed,\n"
"QPushButton#btn_credit:pressed\n"
"{\n"
"background: #ffffff;\n"
"color: #ff6600;\n"
"}\n"
"\n"
"QPushButton#btn_1:pressed,\n"
"QPushButton#btn_2:pressed,\n"
"QPushButton#btn_3:pressed,\n"
"QPushButton#btn_4:pressed,\n"
"QPushButton#btn_5:pressed,\n"
"QPushButton#btn_6:pressed,\n"
"QPushButton#btn_7:pressed,\n"
"QPushButton#btn_8:pressed,\n"
"QPushButton#btn_9:pressed,\n"
"QPushButton#btn_0:pressed,\n"
"QPushButton#btn_tochka:pressed,"
                        "\n"
"QPushButton#btn_plus_minus:pressed,\n"
"QPushButton#btn_change_calc:pressed,\n"
"QPushButton#btn_plot:pressed, \n"
"QPushButton#btn_x:pressed  {\n"
"background: #b6b6b6;\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QPushButton#btn_AC:pressed,\n"
"QPushButton#btn_CE:pressed {\n"
"background: #e6e6e6;\n"
"color: #000000;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        le_entry = new QLabel(centralwidget);
        le_entry->setObjectName("le_entry");
        le_entry->setGeometry(QRect(0, 10, 421, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rubik")});
        le_entry->setFont(font);
        le_entry->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));
        le_entry->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_x = new QPushButton(centralwidget);
        btn_x->setObjectName("btn_x");
        btn_x->setGeometry(QRect(770, 320, 100, 100));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_x->sizePolicy().hasHeightForWidth());
        btn_x->setSizePolicy(sizePolicy);
        btn_x->setFont(font);
        btn_plot = new QPushButton(centralwidget);
        btn_plot->setObjectName("btn_plot");
        btn_plot->setGeometry(QRect(1090, 320, 100, 100));
        sizePolicy.setHeightForWidth(btn_plot->sizePolicy().hasHeightForWidth());
        btn_plot->setSizePolicy(sizePolicy);
        btn_plot->setFont(font);
        btn_credit = new QPushButton(centralwidget);
        btn_credit->setObjectName("btn_credit");
        btn_credit->setGeometry(QRect(440, 10, 301, 161));
        sizePolicy.setHeightForWidth(btn_credit->sizePolicy().hasHeightForWidth());
        btn_credit->setSizePolicy(sizePolicy);
        btn_credit->setFont(font);
        doubleSpinBox_x = new QSpinBox(centralwidget);
        doubleSpinBox_x->setObjectName("doubleSpinBox_x");
        doubleSpinBox_x->setGeometry(QRect(890, 340, 181, 71));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 80, 421, 531));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_2 = new QPushButton(gridLayoutWidget);
        btn_2->setObjectName("btn_2");
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setFont(font);

        gridLayout->addWidget(btn_2, 3, 1, 1, 1);

        btn_3 = new QPushButton(gridLayoutWidget);
        btn_3->setObjectName("btn_3");
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setFont(font);

        gridLayout->addWidget(btn_3, 3, 2, 1, 1);

        btn_ymnogenie = new QPushButton(gridLayoutWidget);
        btn_ymnogenie->setObjectName("btn_ymnogenie");
        sizePolicy.setHeightForWidth(btn_ymnogenie->sizePolicy().hasHeightForWidth());
        btn_ymnogenie->setSizePolicy(sizePolicy);
        btn_ymnogenie->setFont(font);

        gridLayout->addWidget(btn_ymnogenie, 1, 3, 1, 1);

        btn_plus = new QPushButton(gridLayoutWidget);
        btn_plus->setObjectName("btn_plus");
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);
        btn_plus->setFont(font);

        gridLayout->addWidget(btn_plus, 3, 3, 1, 1);

        btn_1 = new QPushButton(gridLayoutWidget);
        btn_1->setObjectName("btn_1");
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setFont(font);

        gridLayout->addWidget(btn_1, 3, 0, 1, 1);

        btn_calc = new QPushButton(gridLayoutWidget);
        btn_calc->setObjectName("btn_calc");
        sizePolicy.setHeightForWidth(btn_calc->sizePolicy().hasHeightForWidth());
        btn_calc->setSizePolicy(sizePolicy);
        btn_calc->setFont(font);

        gridLayout->addWidget(btn_calc, 4, 3, 1, 1);

        btn_tochka = new QPushButton(gridLayoutWidget);
        btn_tochka->setObjectName("btn_tochka");
        sizePolicy.setHeightForWidth(btn_tochka->sizePolicy().hasHeightForWidth());
        btn_tochka->setSizePolicy(sizePolicy);
        btn_tochka->setFont(font);

        gridLayout->addWidget(btn_tochka, 4, 2, 1, 1);

        btn_0 = new QPushButton(gridLayoutWidget);
        btn_0->setObjectName("btn_0");
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setFont(font);

        gridLayout->addWidget(btn_0, 4, 0, 1, 2);

        btn_minus = new QPushButton(gridLayoutWidget);
        btn_minus->setObjectName("btn_minus");
        sizePolicy.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy);
        btn_minus->setFont(font);

        gridLayout->addWidget(btn_minus, 2, 3, 1, 1);

        btn_delenie = new QPushButton(gridLayoutWidget);
        btn_delenie->setObjectName("btn_delenie");
        sizePolicy.setHeightForWidth(btn_delenie->sizePolicy().hasHeightForWidth());
        btn_delenie->setSizePolicy(sizePolicy);
        btn_delenie->setFont(font);

        gridLayout->addWidget(btn_delenie, 0, 3, 1, 1);

        btn_6 = new QPushButton(gridLayoutWidget);
        btn_6->setObjectName("btn_6");
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setFont(font);

        gridLayout->addWidget(btn_6, 2, 2, 1, 1);

        btn_5 = new QPushButton(gridLayoutWidget);
        btn_5->setObjectName("btn_5");
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setFont(font);

        gridLayout->addWidget(btn_5, 2, 1, 1, 1);

        btn_4 = new QPushButton(gridLayoutWidget);
        btn_4->setObjectName("btn_4");
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setFont(font);

        gridLayout->addWidget(btn_4, 2, 0, 1, 1);

        btn_9 = new QPushButton(gridLayoutWidget);
        btn_9->setObjectName("btn_9");
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setFont(font);

        gridLayout->addWidget(btn_9, 1, 2, 1, 1);

        btn_8 = new QPushButton(gridLayoutWidget);
        btn_8->setObjectName("btn_8");
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setFont(font);

        gridLayout->addWidget(btn_8, 1, 1, 1, 1);

        btn_7 = new QPushButton(gridLayoutWidget);
        btn_7->setObjectName("btn_7");
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setFont(font);

        gridLayout->addWidget(btn_7, 1, 0, 1, 1);

        btn_AC = new QPushButton(gridLayoutWidget);
        btn_AC->setObjectName("btn_AC");
        sizePolicy.setHeightForWidth(btn_AC->sizePolicy().hasHeightForWidth());
        btn_AC->setSizePolicy(sizePolicy);
        btn_AC->setFont(font);

        gridLayout->addWidget(btn_AC, 0, 0, 1, 1);

        btn_stepen = new QPushButton(gridLayoutWidget);
        btn_stepen->setObjectName("btn_stepen");
        sizePolicy.setHeightForWidth(btn_stepen->sizePolicy().hasHeightForWidth());
        btn_stepen->setSizePolicy(sizePolicy);
        btn_stepen->setFont(font);

        gridLayout->addWidget(btn_stepen, 0, 2, 1, 1);

        btn_CE = new QPushButton(gridLayoutWidget);
        btn_CE->setObjectName("btn_CE");
        sizePolicy.setHeightForWidth(btn_CE->sizePolicy().hasHeightForWidth());
        btn_CE->setSizePolicy(sizePolicy);
        btn_CE->setFont(font);

        gridLayout->addWidget(btn_CE, 0, 1, 1, 1);

        lbl_temp = new QLabel(centralwidget);
        lbl_temp->setObjectName("lbl_temp");
        lbl_temp->setGeometry(QRect(0, 0, 421, 17));
        lbl_temp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(430, 190, 331, 421));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_RBR = new QPushButton(gridLayoutWidget_2);
        btn_RBR->setObjectName("btn_RBR");
        sizePolicy.setHeightForWidth(btn_RBR->sizePolicy().hasHeightForWidth());
        btn_RBR->setSizePolicy(sizePolicy);
        btn_RBR->setFont(font);

        gridLayout_2->addWidget(btn_RBR, 0, 1, 1, 1);

        btn_LBR = new QPushButton(gridLayoutWidget_2);
        btn_LBR->setObjectName("btn_LBR");
        sizePolicy.setHeightForWidth(btn_LBR->sizePolicy().hasHeightForWidth());
        btn_LBR->setSizePolicy(sizePolicy);
        btn_LBR->setFont(font);

        gridLayout_2->addWidget(btn_LBR, 0, 0, 1, 1);

        btn_sin = new QPushButton(gridLayoutWidget_2);
        btn_sin->setObjectName("btn_sin");
        sizePolicy.setHeightForWidth(btn_sin->sizePolicy().hasHeightForWidth());
        btn_sin->setSizePolicy(sizePolicy);
        btn_sin->setFont(font);

        gridLayout_2->addWidget(btn_sin, 4, 0, 1, 1);

        btn_mod = new QPushButton(gridLayoutWidget_2);
        btn_mod->setObjectName("btn_mod");
        sizePolicy.setHeightForWidth(btn_mod->sizePolicy().hasHeightForWidth());
        btn_mod->setSizePolicy(sizePolicy);
        btn_mod->setFont(font);

        gridLayout_2->addWidget(btn_mod, 0, 2, 1, 1);

        btn_asin = new QPushButton(gridLayoutWidget_2);
        btn_asin->setObjectName("btn_asin");
        sizePolicy.setHeightForWidth(btn_asin->sizePolicy().hasHeightForWidth());
        btn_asin->setSizePolicy(sizePolicy);
        btn_asin->setFont(font);

        gridLayout_2->addWidget(btn_asin, 3, 0, 1, 1);

        btn_sqrt = new QPushButton(gridLayoutWidget_2);
        btn_sqrt->setObjectName("btn_sqrt");
        sizePolicy.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy);
        btn_sqrt->setFont(font);

        gridLayout_2->addWidget(btn_sqrt, 2, 0, 1, 1);

        btn_ln = new QPushButton(gridLayoutWidget_2);
        btn_ln->setObjectName("btn_ln");
        sizePolicy.setHeightForWidth(btn_ln->sizePolicy().hasHeightForWidth());
        btn_ln->setSizePolicy(sizePolicy);
        btn_ln->setFont(font);

        gridLayout_2->addWidget(btn_ln, 2, 1, 1, 1);

        btn_log = new QPushButton(gridLayoutWidget_2);
        btn_log->setObjectName("btn_log");
        sizePolicy.setHeightForWidth(btn_log->sizePolicy().hasHeightForWidth());
        btn_log->setSizePolicy(sizePolicy);
        btn_log->setFont(font);

        gridLayout_2->addWidget(btn_log, 2, 2, 1, 1);

        btn_acos = new QPushButton(gridLayoutWidget_2);
        btn_acos->setObjectName("btn_acos");
        sizePolicy.setHeightForWidth(btn_acos->sizePolicy().hasHeightForWidth());
        btn_acos->setSizePolicy(sizePolicy);
        btn_acos->setFont(font);

        gridLayout_2->addWidget(btn_acos, 3, 1, 1, 1);

        btn_cos = new QPushButton(gridLayoutWidget_2);
        btn_cos->setObjectName("btn_cos");
        sizePolicy.setHeightForWidth(btn_cos->sizePolicy().hasHeightForWidth());
        btn_cos->setSizePolicy(sizePolicy);
        btn_cos->setFont(font);

        gridLayout_2->addWidget(btn_cos, 4, 1, 1, 1);

        btn_atan = new QPushButton(gridLayoutWidget_2);
        btn_atan->setObjectName("btn_atan");
        sizePolicy.setHeightForWidth(btn_atan->sizePolicy().hasHeightForWidth());
        btn_atan->setSizePolicy(sizePolicy);
        btn_atan->setFont(font);

        gridLayout_2->addWidget(btn_atan, 3, 2, 1, 1);

        btn_tan = new QPushButton(gridLayoutWidget_2);
        btn_tan->setObjectName("btn_tan");
        sizePolicy.setHeightForWidth(btn_tan->sizePolicy().hasHeightForWidth());
        btn_tan->setSizePolicy(sizePolicy);
        btn_tan->setFont(font);

        gridLayout_2->addWidget(btn_tan, 4, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(790, 470, 376, 71));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        line_x_max = new QLineEdit(gridLayoutWidget_3);
        line_x_max->setObjectName("line_x_max");
        line_x_max->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));

        gridLayout_3->addWidget(line_x_max, 1, 0, 1, 1);

        line_y_max = new QLineEdit(gridLayoutWidget_3);
        line_y_max->setObjectName("line_y_max");
        line_y_max->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));

        gridLayout_3->addWidget(line_y_max, 1, 2, 1, 1);

        textEdit_3 = new QTextEdit(gridLayoutWidget_3);
        textEdit_3->setObjectName("textEdit_3");

        gridLayout_3->addWidget(textEdit_3, 0, 2, 1, 1);

        textEdit = new QTextEdit(gridLayoutWidget_3);
        textEdit->setObjectName("textEdit");

        gridLayout_3->addWidget(textEdit, 0, 0, 1, 1);

        line_x_min = new QLineEdit(gridLayoutWidget_3);
        line_x_min->setObjectName("line_x_min");
        line_x_min->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));

        gridLayout_3->addWidget(line_x_min, 1, 1, 1, 1);

        textEdit_4 = new QTextEdit(gridLayoutWidget_3);
        textEdit_4->setObjectName("textEdit_4");

        gridLayout_3->addWidget(textEdit_4, 0, 3, 1, 1);

        textEdit_2 = new QTextEdit(gridLayoutWidget_3);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout_3->addWidget(textEdit_2, 0, 1, 1, 1);

        line_y_min = new QLineEdit(gridLayoutWidget_3);
        line_y_min->setObjectName("line_y_min");
        line_y_min->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"color: black;\n"
"background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));

        gridLayout_3->addWidget(line_y_min, 1, 3, 1, 1);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(769, 0, 441, 291));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        le_entry->setText(QString());
        btn_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        btn_plot->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        btn_credit->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_ymnogenie->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_calc->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_tochka->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_delenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        btn_stepen->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btn_CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        lbl_temp->setText(QString());
        btn_RBR->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        btn_LBR->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        btn_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        btn_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        btn_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        btn_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        btn_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        btn_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        btn_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        btn_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        btn_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rubik'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic; text-decoration: underline;\">Y max</span></p></body></html>", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rubik'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic; text-decoration: underline;\">X max</span></p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rubik'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic; text-decoration: underline;\">Y min</span></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Rubik'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; font-style:italic; text-decoration: underline;\">X min</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
