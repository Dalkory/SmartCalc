#include "cred.h"

#include "ui_cred.h"

// Конструктор класса credit_window
credit_window::credit_window(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::credit_window) {
  ui->setupUi(this);  // Инициализация пользовательского интерфейса
}

// Деструктор класса credit_window
credit_window::~credit_window() {
  delete ui;  // Удаление объекта интерфейса
}

// Слот обработки нажатия кнопки "Назад"
void credit_window::on_btn_back_clicked() {
  this->close();       // Закрытие текущего окна
  emit firstWindow();  // Eмитим сигнал firstWindow(), который будет обработан в
                       // других частях программы
}

// Слот обработки нажатия кнопки "Рассчитать"
void credit_window::on_pushButton_calculate_clicked() {
  bool percents_validate, sum_validate, months_validate = false;

  // Получение значений ввода пользователем
  double percents = ui->lineEdit_percents->text().toDouble(&percents_validate);
  double sum = ui->lineEdit_sum->text().toDouble(&sum_validate);
  double months =
      ui->comboBox_type_date->currentText() == "Месяцев"
          ? ui->lineEdit_months->text().toDouble(&months_validate)
          : ui->lineEdit_months->text().toDouble(&months_validate) * 12;

  // Проверка валидности введенных данных
  if (percents_validate && sum_validate && months_validate &&
      (percents >= 0.01 && percents <= 999) && (months <= 600 && months > 0) &&
      (sum > 0)) {
    double montly_pay, percents_result, result = 0;

    // Расчет аннуитетного платежа
    if (ui->radioButton->isChecked()) {
      credit_evualete_ann(percents, months, sum, &percents_result, &result,
                          &montly_pay);

      // Вывод результатов расчета на экран
      ui->textEdit->clear();
      ui->textEdit->append(QString::number(montly_pay));
      ui->label_7_percents->setNum(percents_result);
      ui->label_7_result->setNum(result);
    }
    // Расчет дифференцированного платежа
    else if (ui->radioButton_2->isChecked()) {
      double montly_pay[1024] = {};
      ui->textEdit->clear();
      int i = credit_evualete_diff(percents, months, sum, &percents_result,
                                   &result, montly_pay);

      // Вывод результатов расчета на экран
      for (int k = 0; k < i; ++k) {
        ui->textEdit->append(QString::number(k + 1) + " " +
                             QString::number(montly_pay[k]));
      }
      ui->label_7_percents->setNum(percents_result);
      ui->label_7_result->setNum(result);
    }

  } else {
    // Вывод сообщения об ошибке при невалидных данных
    ui->textEdit->clear();
    ui->textEdit->append("Error");
    ui->label_7_percents->setText("Error");
    ui->label_7_result->setText("Error");
  }
}
