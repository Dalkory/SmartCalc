#ifndef FIRST_TASK_H
#define FIRST_TASK_H

#include <ctype.h>  // Библиотека для работы с символами
#include <math.h>  // Библиотека для математических функций
#include <stdbool.h>  // Библиотека для использования типа bool
#include <stdio.h>  // Библиотека для стандартного ввода/вывода
#include <stdlib.h>  // Библиотека для работы с памятью и преобразований
#include <string.h>  // Библиотека для работы со строками
#include <time.h>  // Библиотека для работы с временем

#define is_nan(x) __builtin_isnan(x)  // Макрос для проверки NaN
#define is_inf(x) __builtin_isinf(x)  // Макрос для проверки бесконечности

#define YEAR 365        // Количество дней в году
#define MONTHS_YEAR 12  // Количество месяцев в году
#define MAX_EXPR_LEN 2048  // Максимальная длина выражения
#define MAX_NUM_PARAMS 1  // Максимальное количество параметров
#define MIN_NUM_PARAMS 0  // Минимальное количество параметров
#define MAX_DIGIT 255  // Максимальное количество разрядов числа
#define MAX_STACK_SIZE 2048  // Максимальный размер стека

enum Months {
  December,
  January,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November
};

// Функция для вычисления кредита с аннуитетными платежами
void credit_evualete_ann(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);

// Функция для вычисления кредита с дифференцированными платежами
int credit_evualete_diff(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);

#endif