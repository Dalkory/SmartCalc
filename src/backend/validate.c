#include "calc.h"

int validateStr(char* str) {
  int status = OK;

  // Проверка длины строки
  if (strlen(str) == 0 || strlen(str) > 255) {
    status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                               // некорректной длины строки
  }

  // Проверка наличия некорректных элементов в выражении
  if (status == OK) {
    if (validateBrackets(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректных скобок
    else if (validateDots(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректного использования десятичной точки
    else if (validateOperators(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректных операторов
    else if (validateTrig(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректного использования
                                 // тригонометрических функций
    else if (validateOtherFuncs(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректного использования других
                                 // математических функций
    else if (validateX(str))
      status = INCORRECT_INPUT;  // Установка статуса INCORRECT_INPUT в случае
                                 // некорректного использования переменной x
  }

  return status;
}

int validateBrackets(char* str) {
  int leftBracket = 0;   // Счетчик открывающих скобок
  int rightBracket = 0;  // Счетчик закрывающих скобок
  int status = OK;       // Статус проверки
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == '(') {
      leftBracket++;  // Увеличение счетчика открывающих скобок
      if (str[i + 1] == ')') {
        status =
            INCORRECT_INPUT;  // Если следующий символ после открывающей скобки
                              // - закрывающая скобка, выражение некорректно
      }
    }
    if (str[i] == ')') {
      rightBracket++;  // Увеличение счетчика закрывающих скобок
      if (rightBracket > leftBracket) {
        status =
            INCORRECT_INPUT;  // Если количество закрывающих скобок превышает
                              // количество открывающих, выражение некорректно
      }
    }
  }
  if (rightBracket != leftBracket) {
    status = INCORRECT_INPUT;  // Если количество открывающих скобок не равно
                               // количеству закрывающих скобок, выражение
                               // некорректно
  }
  if (status == OK) {
    status =
        validateBracketsPosition(str);  // Проверка позиции скобок в выражении
  }
  return status;
}

int validateBracketsPosition(char* str) {
  int len = strlen(str);  // Длина строки
  int status = OK;        // Статус проверки

  for (int i = 0; str[i] != '\0'; i++) {
    if (i == 0 && str[i] == ')') {
      status = INCORRECT_INPUT;  // Если первый символ - закрывающая скобка,
                                 // выражение некорректно
    }

    if (i == len - 1 && str[i] == '(') {
      status = INCORRECT_INPUT;  // Если последний символ - открывающая скобка,
                                 // выражение некорректно
    }

    if (str[i] == '(' && i != 0) {
      if (str[i - 1] == ')' || isdigit(str[i - 1])) {
        status = INCORRECT_INPUT;  // Если перед открывающей скобкой стоит
                                   // закрывающая скобка или цифра, выражение
                                   // некорректно
      }
      if (str[i + 1] == ')') {
        status = INCORRECT_INPUT;  // Если после открывающей скобки стоит
                                   // закрывающая скобка, выражение некорректно
      }
    }

    if (str[i] == ')' && i != 0) {
      if (str[i + 1] == '(' || isdigit(str[i + 1])) {
        status =
            INCORRECT_INPUT;  // Если после закрывающей скобки стоит открывающая
                              // скобка или цифра, выражение некорректно
      }
      if (str[i - 1] == '(') {
        status = INCORRECT_INPUT;  // Если перед закрывающей скобкой стоит
                                   // открывающая скобка, выражение некорректно
      }
    }
  }

  return status;
}

int validateDots(char* str) {
  int status = OK;  // Статус проверки
  char* ptr = str;  // Указатель на текущий символ в строке

  while (*ptr != '\0' && status == OK) {
    int dotsCount = 0;  // Количество точек в текущем числе

    if (isdigit(*ptr) || (*ptr == '.')) {
      while (isdigit(*ptr) || *ptr == '.') {
        if (*ptr == '.') {
          dotsCount++;  // Увеличение счетчика точек
          if (!isdigit(*(ptr - 1))) {
            status = INCORRECT_INPUT;  // Если перед точкой не стоит цифра,
                                       // выражение некорректно
          }
        }
        ptr++;
      }
      ptr--;
    }

    if (dotsCount > 1) {
      status = INCORRECT_INPUT;  // Если в текущем числе больше одной точки,
                                 // выражение некорректно
    }

    ptr++;
  }

  return status;
}

int validateOperators(char* str) {
  int status = OK;             // Статус проверки
  int len = (int)strlen(str);  // Длина строки

  for (int i = 0; i < len && status == OK; i++) {
    if (strchr("+-", str[i])) {
      if (i == len - 1) {
        status = INCORRECT_INPUT;  // Если оператор "+" или "-" находится в
                                   // конце выражения, выражение некорректно
      }
      if (i != 0 && i != len - 1) {
        if (i > 0 &&
            (strchr(")/*^", str[i + 1]) || strchr("/*^+-", str[i - 1]))) {
          status =
              INCORRECT_INPUT;  // Если перед или после оператора "+" или "-"
                                // стоит другой оператор, выражение некорректно
        }
      }
    }

    if (strchr("/*^", str[i])) {
      if (i == 0 || i == len - 1) {
        status = INCORRECT_INPUT;  // Если оператор "*" или "/" или "^"
                                   // находится в начале или в конце выражения,
                                   // выражение некорректно
      }
      if (i != 0 && i != len - 1) {
        if (i > 0 &&
            (strchr(")/*^", str[i + 1]) || strchr("/*^+-", str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед или после оператора "*" или
                                     // "/" или "^" стоит другой оператор,
                                     // выражение некорректно
        }
      }
    }

    if (str[i] == 'm') {
      if (i == 0 || i > len - 4) {
        status =
            INCORRECT_INPUT;  // Если оператор "m" находится в начале или близко
                              // к концу выражения, выражение некорректно
      }
      if (i != 0 || i < len - 4) {
        if (i > 0 && !isdigit(str[i - 1]) &&
            (strchr(")x", str[i - 1]) == NULL)) {
          status = INCORRECT_INPUT;  // Если перед оператором "m" не стоит цифра
                                     // или закрывающая скобка или "x",
                                     // выражение некорректно
        }
        if (i > 0 && !isdigit(str[i + 3]) &&
            (strchr("(x", str[i + 3]) == NULL)) {
          status = INCORRECT_INPUT;  // Если после оператора "m" не стоит цифра
                                     // или открывающая скобка или "x",
                                     // выражение некорректно
        }
      }
      i += 2;  // Пропустить следующие два символа, так как оператор "m" имеет
               // длину 3 символа
    }
  }

  return status;
}

int validateTrig(char* str) {
  int status = OK;             // Статус проверки
  int len = (int)strlen(str);  // Длина строки

  for (int i = 0; i < len && status == OK; i++) {
    // Проверка sin, cos, tan
    if (str[i] == 'c' || (str[i] == 't' && str[i - 1] != 'r') ||
        (str[i] == 's' && str[i + 1] == 'i')) {
      if (i > len - 6) {
        status =
            INCORRECT_INPUT;  // Если оператор sin, cos или tan находится близко
                              // к концу выражения, выражение некорректно
      }
      if (i != 0 || i < len - 6) {
        if (i > 0 && (strchr(")x", str[i - 1]) || isdigit(str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед оператором sin, cos или tan
                                     // стоит закрывающая скобка или "x" или
                                     // цифра, выражение некорректно
        }
      }
      i += 2;  // Пропустить следующие два символа, так как оператор sin, cos
               // или tan имеет длину 3 символа
    }

    // Проверка asin, acos, atan
    if (str[i] == 'a') {
      if (i > len - 7) {
        status =
            INCORRECT_INPUT;  // Если оператор asin, acos или atan находится
                              // близко к концу выражения, выражение некорректно
      }
      if (i != 0 || i < len - 7) {
        if (i > 0 && (strchr(")x", str[i - 1]) || isdigit(str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед оператором asin, acos или
                                     // atan стоит закрывающая скобка или "x"
                                     // или цифра, выражение некорректно
        }
      }
      i += 3;  // Пропустить следующие три символа, так как оператор asin, acos
               // или atan имеет длину 4 символа
    }
  }

  return status;
}

int validateOtherFuncs(char* str) {
  int status = OK;             // Статус проверки
  int len = (int)strlen(str);  // Длина строки

  for (int i = 0; i < len && status == OK; i++) {
    // Проверка ln
    if (str[i] == 'l' && str[i + 1] == 'n') {
      if (i > len - 5) {
        status = INCORRECT_INPUT;  // Если оператор ln находится близко к концу
                                   // выражения, выражение некорректно
      }
      if (i != 0 || i < len - 5) {
        if (i > 0 && (strchr(")x", str[i - 1]) || isdigit(str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед оператором ln стоит
                                     // закрывающая скобка или "x" или цифра,
                                     // выражение некорректно
        }
      }
      i++;  // Пропустить следующий символ, так как оператор ln имеет длину 2
            // символа
    }

    // Проверка sqrt
    if (str[i] == 's' && str[i + 1] == 'q') {
      if (i > len - 6) {
        status = INCORRECT_INPUT;  // Если оператор sqrt находится близко к
                                   // концу выражения, выражение некорректно
      }
      if (i != 0 || i < len - 7) {
        if (i > 0 && (strchr(")x", str[i - 1]) || isdigit(str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед оператором sqrt стоит
                                     // закрывающая скобка или "x" или цифра,
                                     // выражение некорректно
        }
      }
      if (str[i + 5] == '-') {
        status =
            INCORRECT_INPUT;  // Если после оператора sqrt следует знак "-"
                              // (отрицательное значение), выражение некорректно
      }
      i += 3;  // Пропустить следующие три символа, так как оператор sqrt имеет
               // длину 4 символа
    }

    // Проверка log
    if (str[i] == 'l' && str[i + 1] == 'o') {
      if (i > len - 6) {
        status = INCORRECT_INPUT;  // Если оператор log находится близко к концу
                                   // выражения, выражение некорректно
      }
      if (i != 0 || i < len - 6) {
        if (i > 0 && (strchr(")x", str[i - 1]) || isdigit(str[i - 1]))) {
          status = INCORRECT_INPUT;  // Если перед оператором log стоит
                                     // закрывающая скобка или "x" или цифра,
                                     // выражение некорректно
        }
      }
      i += 2;  // Пропустить следующие два символа, так как оператор log имеет
               // длину 3 символа
    }
  }

  return status;
}

int validateX(char* str) {
  int status = OK;             // Статус проверки
  int len = (int)strlen(str);  // Длина строки

  for (int i = 0; i < len && status == OK; i++) {
    if (str[i] == 'x' && len != 1) {
      // Проверка на первое вхождение символа 'x'
      if (i == 0 && (isdigit(str[i + 1]) || strchr(")x", str[i + 1]))) {
        status = INCORRECT_INPUT;  // Если после символа 'x' следует цифра,
                                   // закрывающая скобка или другой символ 'x',
                                   // выражение некорректно
      }
      // Проверка на последнее вхождение символа 'x'
      if (i == len - 1 && (isdigit(str[i - 1]) || strchr(")x", str[i - 1]))) {
        status = INCORRECT_INPUT;  // Если перед символом 'x' стоит цифра,
                                   // открывающая скобка или другой символ 'x',
                                   // выражение некорректно
      }
      // Проверка на вхождение символа 'x' в середине выражения
      if (i > 0 && i < len - 1 &&
          (isdigit(str[i + 1]) || str[i + 1] == '(' || str[i + 1] == 'x')) {
        status = INCORRECT_INPUT;  // Если после символа 'x' следует цифра,
                                   // открывающая скобка или другой символ 'x',
                                   // выражение некорректно
      }
      if (i > 0 && i < len - 1 &&
          (isdigit(str[i - 1]) || str[i - 1] == ')' || str[i - 1] == 'x')) {
        status = INCORRECT_INPUT;  // Если перед символом 'x' стоит цифра,
                                   // закрывающая скобка или другой символ 'x',
                                   // выражение некорректно
      }
    }
  }

  return status;
}
