#include "calc.h"

int setFirstPriority(char* str, Stack* stack, int i, int* minusSign,
                     int* plusSign) {
  int status = OK;

  // Проверяем текущий символ и выполняем соответствующую операцию
  if (str[i] == '+') {
    if (i == 0 || (str[i - 1] == '(')) {
      *plusSign = 1;  // Устанавливаем флаг для обработки унарного плюса
    } else {
      Lexeme tmpLexeme = {'+', PLUS, 1};
      status = push(stack, tmpLexeme);  // Помещаем оператор "+" в стек
    }
  } else if (str[i] == '-') {
    if (i == 0 || (str[i - 1] == '(')) {
      Lexeme tmpLexeme = {0, NUM, 0};
      status = push(stack, tmpLexeme);  // Помещаем число 0 в стек
      tmpLexeme.value = '-';
      tmpLexeme.type = MINUS;
      tmpLexeme.priority = 1;
      status = push(stack, tmpLexeme);  // Помещаем оператор "-" в стек
      *minusSign = 0;  // Сбрасываем флаг для обработки унарного минуса
    } else {
      Lexeme tmpLexeme = {'-', MINUS, 1};
      status = push(stack, tmpLexeme);  // Помещаем оператор "-" в стек
    }
  }

  return status;
}

int setSecondPriority(char* str, Stack* stack, int* i) {
  int status = OK;

  // Проверяем текущий символ и выполняем соответствующую операцию
  if (str[*i] == '*') {
    Lexeme tmpLexeme = {'*', MULT, 2};
    status = push(stack, tmpLexeme);  // Помещаем оператор "*" в стек
  } else if (str[*i] == '/') {
    Lexeme tmpLexeme = {'/', DIV, 2};
    status = push(stack, tmpLexeme);  // Помещаем оператор "/" в стек
  } else if (str[*i] == 'm') {
    Lexeme tmpLexeme = {'m', MOD, 2};
    status = push(stack, tmpLexeme);  // Помещаем оператор "mod" в стек
    *i = *i + 2;  // Пропускаем символы "o" и "d" в строке
  }

  return status;
}

int setThirdPriority(char* str, Stack* stack, int i) {
  int status = OK;

  // Проверяем текущий символ и выполняем соответствующую операцию
  if (str[i] == '^') {
    Lexeme tmpLexeme = {'^', EXP, 3};
    status =
        push(stack,
             tmpLexeme);  // Помещаем оператор "^" (возведение в степень) в стек
  }

  return status;
}

int setFourthPriority(char* str, Stack* stack, int* i) {
  int status = OK;

  // Проверяем текущий символ и выполняем соответствующую операцию
  if (str[*i] == 'c') {
    Lexeme tmpLexeme = {'c', COS, 4};
    status = push(stack, tmpLexeme);  // Помещаем оператор "cos" в стек
    *i += 2;  // Пропускаем символы "o" и "s" в строке
  } else if (str[*i] == 't') {
    Lexeme tmpLexeme = {'t', TAN, 4};
    status = push(stack, tmpLexeme);  // Помещаем оператор "tan" в стек
    *i += 2;  // Пропускаем символы "a" и "n" в строке
  } else if (str[*i] == 's') {
    if (str[*i + 1] == 'i') {
      Lexeme tmpLexeme = {'s', SIN, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "sin" в стек
      *i += 2;  // Пропускаем символы "i" и "n" в строке
    } else {
      Lexeme tmpLexeme = {'q', SQRT, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "sqrt" в стек
      *i += 3;  // Пропускаем символы "r", "t" и "t" в строке
    }
  } else if (str[*i] == 'l') {
    if (str[*i + 1] == 'o') {
      Lexeme tmpLexeme = {'L', LOG, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "log" в стек
      *i += 2;  // Пропускаем символы "o" и "g" в строке
    } else {
      Lexeme tmpLexeme = {'l', LN, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "ln" в стек
      *i += 1;  // Пропускаем символ "n" в строке
    }
  } else if (str[*i] == 'a') {
    if (str[*i + 1] == 's') {
      Lexeme tmpLexeme = {'S', ASIN, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "asin" в стек
    } else if (str[*i + 1] == 'c') {
      Lexeme tmpLexeme = {'C', ACOS, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "acos" в стек
    } else {
      Lexeme tmpLexeme = {0, ATAN, 4};
      status = push(stack, tmpLexeme);  // Помещаем оператор "atan" в стек
    }
    *i += 3;  // Пропускаем символы "t", "a" и "n" в строке
  }

  return status;
}

int setZeroPriority(char* str, Stack* stack, int i) {
  int status = OK;

  // Проверяем текущий символ и выполняем соответствующую операцию
  if (str[i] == '(') {
    Lexeme tmpLexeme = {'(', LEFT_BRACKET, 0};
    status = push(stack, tmpLexeme);  // Помещаем левую скобку в стек
  } else if (str[i] == ')') {
    Lexeme tmpLexeme = {')', RIGHT_BRACKET, 0};
    status = push(stack, tmpLexeme);  // Помещаем правую скобку в стек
  } else if (str[i] == 'x') {
    Lexeme tmpLexeme = {'x', X, 0};
    status = push(stack, tmpLexeme);  // Помещаем переменную x в стек
  }

  return status;
}