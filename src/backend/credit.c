#include "../backend/credit.h"  // Включаем пользовательский заголовочный файл

void credit_evualete_ann(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay) {
  double monthly_percent =
      percents / 12. / 100.;  // Расчет месячной процентной ставки
  *montly_pay =
      sum * monthly_percent * pow(1 + monthly_percent, month) /
      (pow(1 + monthly_percent, month) - 1);  // Вычисление ежемесячного платежа
  *result = *montly_pay * month;  // Вычисление общей суммы платежей за период
  *percents_result = *result - sum;  // Вычисление суммы процентов
}

int credit_evualete_diff(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *monthly_pay) {
  double monthly_credit_payment =
      sum / month;  // Расчет ежемесячного платежа по кредиту
  int current_days;  // Количество дней в текущем месяце
  time_t current_time;  // Текущее время
  struct tm *time_info;  // Структура с информацией о времени
  time(&current_time);  // Получение текущего времени
  time_info =
      localtime(&current_time);  // Преобразование текущего времени в локальное
  int current_month_time =
      time_info->tm_mon + 1;  // Месяцы считаются с 0, поэтому добавляем 1
  int current_year = time_info->tm_year + 1900;  // Получение текущего года

  for (int i = 0; i < month; i++) {
    int current_month = current_month_time + i;  // Текущий месяц

    // Определение количества дней в текущем месяце
    if (current_month % MONTHS_YEAR == January)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == February) {
      // Проверка високосного года
      if (current_year % 4 != 0 && current_year % 100 != 0) {
        current_days = 28;
      } else
        current_days = 29;
    } else if (current_month % MONTHS_YEAR == March)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == April)
      current_days = 30;
    else if (current_month % MONTHS_YEAR == May)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == June)
      current_days = 30;
    else if (current_month % MONTHS_YEAR == July)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == August)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == September)
      current_days = 30;
    else if (current_month % MONTHS_YEAR == October)
      current_days = 31;
    else if (current_month % MONTHS_YEAR == November)
      current_days = 30;
    else if (current_month % MONTHS_YEAR == December) {
      current_days = 31;
      current_year++;
    }
    double percent_sum = (sum * (percents / 100) * current_days) /
                         YEAR;  // Расчет суммы процентов за текущий месяц
    sum = sum - monthly_credit_payment;  // Уменьшение оставшейся суммы кредита
    *result += percent_sum +
               monthly_credit_payment;  // Увеличение общей суммы платежей
    *percents_result += percent_sum;  // Увеличение суммы процентов
    monthly_pay[i] =
        percent_sum +
        monthly_credit_payment;  // Сохранение ежемесячного платежа в массиве
  }

  return month;  // Возвращение количества месяцев
}