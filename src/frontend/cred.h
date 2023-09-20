// Определение защиты от многократного включения
#ifndef CREDIT_WINDOW_H
#define CREDIT_WINDOW_H

// Включаем поддержку графического интерфейса Qt
#include <QMainWindow>

// Так как функции, объявленные ниже, используются в приложении, написанном на
// языке C, их нужно объявить внешними при помощи макроса 'extern "C"'
extern "C" {
#endif

#include "../backend/credit.h"

// Объявление функций для расчета различных показателей кредита
void credit_evualete_ann(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
int credit_evualete_diff(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
#ifdef __cplusplus
}
// Окончание объявления функций на языке C

namespace Ui {
class credit_window;
}

// Комментарии для класса credit_window
class credit_window : public QMainWindow {
  Q_OBJECT

 public:
  // Конструктор класса credit_window с указанным родительским виджетом
  explicit credit_window(QWidget *parent = nullptr);
  // Деструктор класса credit_window
  ~credit_window();

 signals:
  // Сигнал для переключения на первое окно
  void firstWindow();

 private slots:
  // Слот для обработки нажатия на кнопку "Рассчитать"
  void on_pushButton_calculate_clicked();
  // Слот для обработки нажатия на кнопку "Назад"
  void on_btn_back_clicked();

 private:
  // Указатель на объект пользовательского интерфейса
  Ui::credit_window *ui;
};

#endif  // CREDIT_WINDOW_H
