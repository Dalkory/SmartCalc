/********************************************************************************
** Form generated from reading UI file 'cred.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRED_H
#define UI_CRED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_credit_window
{
public:
    QWidget *centralwidget;
    QLabel *label_price_info;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7_montly_pay;
    QLabel *label_7_percents;
    QLabel *label_7_result;
    QComboBox *comboBox_type_date;
    QPushButton *pushButton_calculate;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_percents;
    QLineEdit *lineEdit_sum;
    QLineEdit *lineEdit_months;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *credit_window)
    {
        if (credit_window->objectName().isEmpty())
            credit_window->setObjectName(QString::fromUtf8("credit_window"));
        credit_window->resize(514, 431);
        centralwidget = new QWidget(credit_window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_price_info = new QLabel(centralwidget);
        label_price_info->setObjectName(QString::fromUtf8("label_price_info"));
        label_price_info->setGeometry(QRect(20, 0, 91, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 101, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 91, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 110, 58, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 210, 101, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 250, 91, 51));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 310, 111, 31));
        label_7_montly_pay = new QLabel(centralwidget);
        label_7_montly_pay->setObjectName(QString::fromUtf8("label_7_montly_pay"));
        label_7_montly_pay->setGeometry(QRect(160, 220, 341, 21));
        label_7_percents = new QLabel(centralwidget);
        label_7_percents->setObjectName(QString::fromUtf8("label_7_percents"));
        label_7_percents->setGeometry(QRect(160, 260, 341, 21));
        label_7_result = new QLabel(centralwidget);
        label_7_result->setObjectName(QString::fromUtf8("label_7_result"));
        label_7_result->setGeometry(QRect(160, 320, 341, 16));
        comboBox_type_date = new QComboBox(centralwidget);
        comboBox_type_date->addItem(QString());
        comboBox_type_date->addItem(QString());
        comboBox_type_date->setObjectName(QString::fromUtf8("comboBox_type_date"));
        comboBox_type_date->setGeometry(QRect(410, 70, 103, 32));
        pushButton_calculate = new QPushButton(centralwidget);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        pushButton_calculate->setGeometry(QRect(200, 350, 100, 32));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 160, 111, 31));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(140, 160, 171, 31));
        lineEdit_percents = new QLineEdit(centralwidget);
        lineEdit_percents->setObjectName(QString::fromUtf8("lineEdit_percents"));
        lineEdit_percents->setGeometry(QRect(130, 110, 113, 31));
        lineEdit_sum = new QLineEdit(centralwidget);
        lineEdit_sum->setObjectName(QString::fromUtf8("lineEdit_sum"));
        lineEdit_sum->setGeometry(QRect(130, 20, 381, 31));
        lineEdit_months = new QLineEdit(centralwidget);
        lineEdit_months->setObjectName(QString::fromUtf8("lineEdit_months"));
        lineEdit_months->setGeometry(QRect(130, 70, 281, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(150, 210, 351, 31));
        credit_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(credit_window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 514, 24));
        credit_window->setMenuBar(menubar);
        statusbar = new QStatusBar(credit_window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        credit_window->setStatusBar(statusbar);

        retranslateUi(credit_window);

        QMetaObject::connectSlotsByName(credit_window);
    } // setupUi

    void retranslateUi(QMainWindow *credit_window)
    {
        credit_window->setWindowTitle(QApplication::translate("credit_window", "MainWindow", nullptr));
        label_price_info->setText(QApplication::translate("credit_window", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \n"
"\320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label->setText(QApplication::translate("credit_window", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QApplication::translate("credit_window", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \n"
"\321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_3->setText(QApplication::translate("credit_window", "%", nullptr));
        label_4->setText(QApplication::translate("credit_window", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \n"
"\320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_5->setText(QApplication::translate("credit_window", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \n"
"\320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_6->setText(QApplication::translate("credit_window", "\320\224\320\276\320\273\320\263 + \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        label_7_montly_pay->setText(QString());
        label_7_percents->setText(QString());
        label_7_result->setText(QString());
        comboBox_type_date->setItemText(0, QApplication::translate("credit_window", "\320\234\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        comboBox_type_date->setItemText(1, QApplication::translate("credit_window", "\320\233\320\265\321\202", nullptr));

        pushButton_calculate->setText(QApplication::translate("credit_window", "Calculate", nullptr));
        radioButton->setText(QApplication::translate("credit_window", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        radioButton_2->setText(QApplication::translate("credit_window", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class credit_window: public Ui_credit_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRED_H
