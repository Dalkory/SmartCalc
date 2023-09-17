#ifndef FIRST_TASK_H
#define FIRST_TASK_H
#include <math.h>
//#include "information.h"
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define is_nan(x) __builtin_isnan(x)
#define is_inf(x) __builtin_isinf(x)

#define MAX_EXPR_LEN 2048  //фиксированная длина для упрощения работы с памятью
#define MAX_NUM_PARAMS 1
#define MIN_NUM_PARAMS 0
#define MAX_DIGIT 255  // возможное количество разрядов у числа для обработки
#define MAX_STACK_SIZE \
  2048  //фиксированная длина для упрощения работы с памятью
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
void modified_multi_letter_func(char *input_expr);
int evaluate(char *expr, int num_params, double x, double *result);
void credit_evualete_ann(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
int credit_evualete_diff(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
#endif