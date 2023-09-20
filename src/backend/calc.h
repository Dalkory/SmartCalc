#ifndef SRC_CALC_H
#define SRC_CALC_H

#ifdef __cplusplus

extern "C" {

#endif

// Библиотеки, необходимые для функционирования модуля
#include <ctype.h>  // Содержит функции для работы с символами
#include <math.h>  // Содержит математические функции
#include <stdio.h>  // Содержит функции для ввода/вывода
#include <stdlib.h>  // Содержит функции общего назначения, включая управление памятью
#include <string.h>  // Содержит функции для работы со строками

#define OK 0
#define CALCULATION_ERROR 1
#define MEMORY_ERROR 2
#define INCORRECT_INPUT 3
#define NAN_RESULT 4
#define INF_RESULT 5

typedef struct Lexeme {
  double value;  // Значение лексемы (число)
  int type;  // Тип лексемы (оператор, число и т.д.)
  int priority;  // Приоритет лексемы
} Lexeme;

typedef enum lexeme_type {
  NUM,            // Число
  X,              // Переменная X
  LEFT_BRACKET,   // Левая скобка
  RIGHT_BRACKET,  // Правая скобка
  PLUS,           // Операция сложения
  MINUS,          // Операция вычитания
  MULT,           // Операция умножения
  DIV,            // Операция деления
  EXP,            // Операция возведения в степень
  MOD,  // Операция нахождения остатка от деления
  COS,   // Операция косинуса
  SIN,   // Операция синуса
  TAN,   // Операция тангенса
  ACOS,  // Операция арккосинуса
  ASIN,  // Операция арксинуса
  ATAN,  // Операция арктангенса
  SQRT,  // Операция квадратного корня
  LN,    // Операция натурального логарифма
  LOG    // Операция десятичного логарифма
} lexeme_type;

typedef struct Node {
  Lexeme lexeme;      // Лексема
  struct Node* next;  // Указатель на следующий узел
} Node;

typedef struct Stack {
  Node* top;  // Вершина стека
} Stack;

// -------------------- stack --------------------------
void initStack(Stack* stack);  // Инициализация стека
int push(Stack* stack, Lexeme addLexeme);  // Добавление лексемы в стек
double pop(Stack* stack);  // Извлечение лексемы из стека
int isEmpty(Stack* stack);        // Проверка, пуст ли стек
void destroyStack(Stack* stack);  // Уничтожение стека
// -----------------------------------------------------

// -------------------- validate string ----------------
int validateStr(char* str);  // Проверка строки на корректность
int validateDots(
    char* str);  // Проверка корректности использования десятичных точек
int validateBrackets(char* str);  // Проверка корректности скобок
int validateBracketsPosition(
    char* str);  // Проверка корректности расположения скобок
int validateOperators(char* str);  // Проверка корректности операторов
int validateTrig(
    char* str);  // Проверка корректности тригонометрических операций
int validateOtherFuncs(char* str);  // Проверка корректности других функций
int validateX(char* str);  // Проверка корректности использования переменной X
// -----------------------------------------------------

// -------------------- set priority -------------------
int setZeroPriority(char* str, Stack* stack,
                    int i);  // Установка нулевого приоритета
int setFirstPriority(char* str, Stack* stack, int i, int* unaryMinus,
                     int* unaryPlus);  // Установка первого приоритета
int setSecondPriority(char* str, Stack* stack,
                      int* i);  // Установка второго приоритета
int setThirdPriority(char* str, Stack* stack,
                     int i);  // Установка третьего приоритета
int setFourthPriority(char* str, Stack* stack,
                      int* i);  // Установка четвертого приоритета
// -----------------------------------------------------

// --------------------- rpn ----------------------------
int parseToStack(char* str,
                 Stack* stack);  // Преобразование выражения в стек лексем
int reverseStack(Stack* inputStack,
                 Stack* reversedStack);  // Обращение порядка элементов в стеке
int getNumber(char* str, Stack* stack, int* i, int* unaryMinus,
              int* unaryPlus);  // Получение числа из строки
int getPostfix(
    Stack* infixStack, Stack* bufferStack,
    Stack* postfixStack);  // Преобразование выражения в постфиксную форму
// -------------------------------------------------------

// -------------------- calculate ------------------------
int calculateResult(Stack* rpn, double x,
                    double* result);  // Вычисление результата выражения
double calculateTrig(Lexeme* operation,
                     Lexeme* number);  // Вычисление тригонометрической операции
double calculateSimpleOperation(
    Lexeme* operation, double firstNumber,
    double secondNumber);  // Вычисление простой операции
// -------------------------------------------------------

//-------------------------------------------------------
int from_answer(char* str, double* result,
                double x);  // Преобразование результата в строку
//-------------------------------------------------------

#ifdef __cplusplus
}

#endif

#endif