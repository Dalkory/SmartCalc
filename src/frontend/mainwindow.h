#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Подключение необходимых библиотек:
#include <cred.h>

#include <QMainWindow>
#include <QVector>

// Импорт функций из C-библиотеки:
extern "C" {
#include <../backend/calc.h>
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

// Объявление класса MainWindow, наследника QMainWindow:
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  // Флаги для проверки состояния скобок и графика:
  int flag_bracket, flag_plot;

  // Конструктор и деструктор основного окна:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  // Слоты для обработки нажатий на кнопки:
  void pushButton();
  void pushBUttonTrig();
  void pushButtonAC();
  void pushButtonCE();
  void on_pushButton_credit_clicked();
  void on_pushButton_graph_clicked();
  void pushButton_EQ();

 private:
  // Указатель на пользовательский интерфейс и окно с информацией о кредитах:
  Ui::MainWindow *ui;
  credit_window *credit;

  // Параметры для расчета и графика функций:
  double xBegin, xEnd, h, X;
  int N;
  int x_detector;

  // Флаг, отслеживающий открыто окно с кредитами или нет:
  int credit_flag;
};

#endif  // MAINWINDOW_H
