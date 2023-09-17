/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *le_entry;
    QPushButton *btn_LBR;
    QPushButton *btn_RBR;
    QPushButton *btn_stepen;
    QPushButton *btn_delenie;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_9;
    QPushButton *btn_ymnogenie;
    QPushButton *btn_4;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_minus;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_3;
    QPushButton *btn_plus;
    QPushButton *btn_sin;
    QPushButton *btn_asin;
    QPushButton *btn_cos;
    QPushButton *btn_acos;
    QPushButton *btn_log;
    QPushButton *btn_ln;
    QPushButton *btn_tan;
    QPushButton *btn_atan;
    QPushButton *btn_tochka;
    QPushButton *btn_calc;
    QPushButton *btn_0;
    QPushButton *btn_mod;
    QPushButton *btn_sqrt;
    QPushButton *btn_AC;
    QPushButton *btn_CE;
    QCustomPlot *customPlot;
    QPushButton *btn_x;
    QPushButton *btn_plot;
    QPushButton *btn_credit;
    QSpinBox *doubleSpinBox_x;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(915, 400);
        MainWindow->setMinimumSize(QSize(915, 400));
        MainWindow->setMaximumSize(QSize(915, 400));
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
"QPushButton#btn_delenie\n"
"{\n"
"  background: #ff6600;\n"
"  color: #ffffff;\n"
"  border-radius: 50%;\n"
"  font-size: 18px;\n"
"  min-width: 40px;\n"
"  min-"
                        "height: 40px; \n"
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
"QPushButton#btn_plot:hove"
                        "r, \n"
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
"QPushButton#btn_delenie:hover\n"
"{\n"
"background: #e7a477;\n"
"color: #ffffff;\n"
"}\n"
"\n"
"QPushButton#btn_mod:pressed,\n"
"QPushButton#btn_ymnogenie:pressed,\n"
"QPushButton#btn_minus:pressed,\n"
"QPushButton#btn_plus:pressed, \n"
"QPushButton#btn_calc:pressed,\n"
"QPushButton#btn_sqrt:pre"
                        "ssed,\n"
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
"QPushButton#btn_delenie:pressed\n"
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
"QPushButton#btn_tochka:pressed,\n"
"QPushButton#btn_plus_minus:pressed,\n"
"QPushButton#btn_change_calc:pressed,\n"
"QPushBut"
                        "ton#btn_plot:pressed, \n"
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
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        le_entry = new QLabel(centralwidget);
        le_entry->setObjectName(QString::fromUtf8("le_entry"));
        le_entry->setGeometry(QRect(10, 10, 270, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Rubik"));
        le_entry->setFont(font);
        le_entry->setStyleSheet(QString::fromUtf8("QLabel {\n"
"color: black;\n"
" background-color: white;\n"
"border: 1px solid black;\n"
"font-size: 16px;\n"
"}"));
        le_entry->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        btn_LBR = new QPushButton(centralwidget);
        btn_LBR->setObjectName(QString::fromUtf8("btn_LBR"));
        btn_LBR->setGeometry(QRect(10, 90, 60, 60));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_LBR->sizePolicy().hasHeightForWidth());
        btn_LBR->setSizePolicy(sizePolicy);
        btn_LBR->setFont(font);
        btn_RBR = new QPushButton(centralwidget);
        btn_RBR->setObjectName(QString::fromUtf8("btn_RBR"));
        btn_RBR->setGeometry(QRect(80, 90, 60, 60));
        sizePolicy.setHeightForWidth(btn_RBR->sizePolicy().hasHeightForWidth());
        btn_RBR->setSizePolicy(sizePolicy);
        btn_RBR->setFont(font);
        btn_stepen = new QPushButton(centralwidget);
        btn_stepen->setObjectName(QString::fromUtf8("btn_stepen"));
        btn_stepen->setGeometry(QRect(150, 90, 60, 60));
        sizePolicy.setHeightForWidth(btn_stepen->sizePolicy().hasHeightForWidth());
        btn_stepen->setSizePolicy(sizePolicy);
        btn_stepen->setFont(font);
        btn_delenie = new QPushButton(centralwidget);
        btn_delenie->setObjectName(QString::fromUtf8("btn_delenie"));
        btn_delenie->setGeometry(QRect(220, 90, 60, 60));
        sizePolicy.setHeightForWidth(btn_delenie->sizePolicy().hasHeightForWidth());
        btn_delenie->setSizePolicy(sizePolicy);
        btn_delenie->setFont(font);
        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(10, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy);
        btn_7->setFont(font);
        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(80, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy);
        btn_8->setFont(font);
        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(150, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy);
        btn_9->setFont(font);
        btn_ymnogenie = new QPushButton(centralwidget);
        btn_ymnogenie->setObjectName(QString::fromUtf8("btn_ymnogenie"));
        btn_ymnogenie->setGeometry(QRect(220, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_ymnogenie->sizePolicy().hasHeightForWidth());
        btn_ymnogenie->setSizePolicy(sizePolicy);
        btn_ymnogenie->setFont(font);
        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(10, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy);
        btn_4->setFont(font);
        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(80, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy);
        btn_5->setFont(font);
        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(150, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy);
        btn_6->setFont(font);
        btn_minus = new QPushButton(centralwidget);
        btn_minus->setObjectName(QString::fromUtf8("btn_minus"));
        btn_minus->setGeometry(QRect(220, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_minus->sizePolicy().hasHeightForWidth());
        btn_minus->setSizePolicy(sizePolicy);
        btn_minus->setFont(font);
        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(10, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy);
        btn_1->setFont(font);
        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(80, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy);
        btn_2->setFont(font);
        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(150, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy);
        btn_3->setFont(font);
        btn_plus = new QPushButton(centralwidget);
        btn_plus->setObjectName(QString::fromUtf8("btn_plus"));
        btn_plus->setGeometry(QRect(220, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_plus->sizePolicy().hasHeightForWidth());
        btn_plus->setSizePolicy(sizePolicy);
        btn_plus->setFont(font);
        btn_sin = new QPushButton(centralwidget);
        btn_sin->setObjectName(QString::fromUtf8("btn_sin"));
        btn_sin->setGeometry(QRect(320, 90, 60, 60));
        sizePolicy.setHeightForWidth(btn_sin->sizePolicy().hasHeightForWidth());
        btn_sin->setSizePolicy(sizePolicy);
        btn_sin->setFont(font);
        btn_asin = new QPushButton(centralwidget);
        btn_asin->setObjectName(QString::fromUtf8("btn_asin"));
        btn_asin->setGeometry(QRect(390, 90, 60, 60));
        sizePolicy.setHeightForWidth(btn_asin->sizePolicy().hasHeightForWidth());
        btn_asin->setSizePolicy(sizePolicy);
        btn_asin->setFont(font);
        btn_cos = new QPushButton(centralwidget);
        btn_cos->setObjectName(QString::fromUtf8("btn_cos"));
        btn_cos->setGeometry(QRect(320, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_cos->sizePolicy().hasHeightForWidth());
        btn_cos->setSizePolicy(sizePolicy);
        btn_cos->setFont(font);
        btn_acos = new QPushButton(centralwidget);
        btn_acos->setObjectName(QString::fromUtf8("btn_acos"));
        btn_acos->setGeometry(QRect(390, 150, 60, 60));
        sizePolicy.setHeightForWidth(btn_acos->sizePolicy().hasHeightForWidth());
        btn_acos->setSizePolicy(sizePolicy);
        btn_acos->setFont(font);
        btn_log = new QPushButton(centralwidget);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        btn_log->setGeometry(QRect(320, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_log->sizePolicy().hasHeightForWidth());
        btn_log->setSizePolicy(sizePolicy);
        btn_log->setFont(font);
        btn_ln = new QPushButton(centralwidget);
        btn_ln->setObjectName(QString::fromUtf8("btn_ln"));
        btn_ln->setGeometry(QRect(390, 270, 60, 60));
        sizePolicy.setHeightForWidth(btn_ln->sizePolicy().hasHeightForWidth());
        btn_ln->setSizePolicy(sizePolicy);
        btn_ln->setFont(font);
        btn_tan = new QPushButton(centralwidget);
        btn_tan->setObjectName(QString::fromUtf8("btn_tan"));
        btn_tan->setGeometry(QRect(320, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_tan->sizePolicy().hasHeightForWidth());
        btn_tan->setSizePolicy(sizePolicy);
        btn_tan->setFont(font);
        btn_atan = new QPushButton(centralwidget);
        btn_atan->setObjectName(QString::fromUtf8("btn_atan"));
        btn_atan->setGeometry(QRect(390, 210, 60, 60));
        sizePolicy.setHeightForWidth(btn_atan->sizePolicy().hasHeightForWidth());
        btn_atan->setSizePolicy(sizePolicy);
        btn_atan->setFont(font);
        btn_tochka = new QPushButton(centralwidget);
        btn_tochka->setObjectName(QString::fromUtf8("btn_tochka"));
        btn_tochka->setGeometry(QRect(150, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_tochka->sizePolicy().hasHeightForWidth());
        btn_tochka->setSizePolicy(sizePolicy);
        btn_tochka->setFont(font);
        btn_calc = new QPushButton(centralwidget);
        btn_calc->setObjectName(QString::fromUtf8("btn_calc"));
        btn_calc->setGeometry(QRect(220, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_calc->sizePolicy().hasHeightForWidth());
        btn_calc->setSizePolicy(sizePolicy);
        btn_calc->setFont(font);
        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(10, 330, 131, 60));
        sizePolicy.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy);
        btn_0->setFont(font);
        btn_mod = new QPushButton(centralwidget);
        btn_mod->setObjectName(QString::fromUtf8("btn_mod"));
        btn_mod->setGeometry(QRect(390, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_mod->sizePolicy().hasHeightForWidth());
        btn_mod->setSizePolicy(sizePolicy);
        btn_mod->setFont(font);
        btn_sqrt = new QPushButton(centralwidget);
        btn_sqrt->setObjectName(QString::fromUtf8("btn_sqrt"));
        btn_sqrt->setGeometry(QRect(320, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy);
        btn_sqrt->setFont(font);
        btn_AC = new QPushButton(centralwidget);
        btn_AC->setObjectName(QString::fromUtf8("btn_AC"));
        btn_AC->setGeometry(QRect(320, 10, 60, 60));
        sizePolicy.setHeightForWidth(btn_AC->sizePolicy().hasHeightForWidth());
        btn_AC->setSizePolicy(sizePolicy);
        btn_AC->setFont(font);
        btn_CE = new QPushButton(centralwidget);
        btn_CE->setObjectName(QString::fromUtf8("btn_CE"));
        btn_CE->setGeometry(QRect(390, 10, 60, 60));
        sizePolicy.setHeightForWidth(btn_CE->sizePolicy().hasHeightForWidth());
        btn_CE->setSizePolicy(sizePolicy);
        btn_CE->setFont(font);
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(470, 20, 431, 301));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Rubik"));
        font1.setPointSize(16);
        customPlot->setFont(font1);
        btn_x = new QPushButton(centralwidget);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));
        btn_x->setGeometry(QRect(470, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_x->sizePolicy().hasHeightForWidth());
        btn_x->setSizePolicy(sizePolicy);
        btn_x->setFont(font);
        btn_plot = new QPushButton(centralwidget);
        btn_plot->setObjectName(QString::fromUtf8("btn_plot"));
        btn_plot->setGeometry(QRect(720, 330, 60, 60));
        sizePolicy.setHeightForWidth(btn_plot->sizePolicy().hasHeightForWidth());
        btn_plot->setSizePolicy(sizePolicy);
        btn_plot->setFont(font);
        btn_credit = new QPushButton(centralwidget);
        btn_credit->setObjectName(QString::fromUtf8("btn_credit"));
        btn_credit->setGeometry(QRect(790, 330, 110, 60));
        sizePolicy.setHeightForWidth(btn_credit->sizePolicy().hasHeightForWidth());
        btn_credit->setSizePolicy(sizePolicy);
        btn_credit->setFont(font1);
        doubleSpinBox_x = new QSpinBox(centralwidget);
        doubleSpinBox_x->setObjectName(QString::fromUtf8("doubleSpinBox_x"));
        doubleSpinBox_x->setGeometry(QRect(533, 335, 91, 51));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        le_entry->setText(QString());
        btn_LBR->setText(QApplication::translate("MainWindow", "(", nullptr));
        btn_RBR->setText(QApplication::translate("MainWindow", ")", nullptr));
        btn_stepen->setText(QApplication::translate("MainWindow", "^", nullptr));
        btn_delenie->setText(QApplication::translate("MainWindow", "/", nullptr));
        btn_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btn_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        btn_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        btn_ymnogenie->setText(QApplication::translate("MainWindow", "*", nullptr));
        btn_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btn_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        btn_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        btn_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btn_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btn_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        btn_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        btn_asin->setText(QApplication::translate("MainWindow", "asin", nullptr));
        btn_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        btn_acos->setText(QApplication::translate("MainWindow", "acos", nullptr));
        btn_log->setText(QApplication::translate("MainWindow", "log", nullptr));
        btn_ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        btn_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        btn_atan->setText(QApplication::translate("MainWindow", "atan", nullptr));
        btn_tochka->setText(QApplication::translate("MainWindow", ".", nullptr));
        btn_calc->setText(QApplication::translate("MainWindow", "=", nullptr));
        btn_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        btn_mod->setText(QApplication::translate("MainWindow", "mod", nullptr));
        btn_sqrt->setText(QApplication::translate("MainWindow", "sqrt", nullptr));
        btn_AC->setText(QApplication::translate("MainWindow", "AC", nullptr));
        btn_CE->setText(QApplication::translate("MainWindow", "CE", nullptr));
        btn_x->setText(QApplication::translate("MainWindow", "x", nullptr));
        btn_plot->setText(QApplication::translate("MainWindow", "Graph", nullptr));
        btn_credit->setText(QApplication::translate("MainWindow", "Credit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
