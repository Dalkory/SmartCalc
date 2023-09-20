#include "calc.h"

int from_answer(char* str, double* result, double x) {
  int status = OK;
  *result = 0;
  Stack infix;
  Stack reversed;
  Stack buffer;

  // Проверяем валидность строки
  status = validateStr(str);

  // Преобразуем строку в инфиксное выражение в стеке "infix"
  if (status == OK) {
    initStack(&infix);
    status = parseToStack(str, &infix);
  }

  // Разворачиваем стек "infix" для получения обратной польской записи в стеке
  // "reversed"
  if (status == OK) {
    initStack(&reversed);
    status = reverseStack(&infix, &reversed);
  }

  // Создаем буферный стек "buffer" и получаем постфиксное выражение в нем
  if (status == OK) {
    initStack(&buffer);
    status = getPostfix(&reversed, &buffer, &infix);
  }

  // Разворачиваем стек "infix" обратно
  if (status == OK) {
    status = reverseStack(&infix, &reversed);
  }

  // Вычисляем результат выражения
  if (status == OK) {
    status = calculateResult(&reversed, x, result);

    // Проверяем на специальные значения "NaN" и "Infinity" и устанавливаем
    // соответствующий статус
    if (isnan(*result)) {
      *result = NAN;
      status = NAN_RESULT;
    }
    if (isinf(*result)) {
      *result = INFINITY;
      status = INF_RESULT;
    }
  }

  return status;
}

int parseToStack(char* str, Stack* stack) {
  int status = OK;
  int unaryPlus = 0, unaryMinus = 0;
  int len = (int)strlen(str);

  // Проходим по каждому символу строки
  for (int i = 0; i < len && status == OK; i++) {
    // Получаем число из строки и помещаем его в стек
    status = getNumber(str, stack, &i, &unaryMinus, &unaryPlus);

    if (status == OK) {
      // Устанавливаем операторы с нулевым приоритетом в стеке
      setZeroPriority(str, stack, i);

      // Устанавливаем операторы с первым приоритетом в стеке
      setFirstPriority(str, stack, i, &unaryMinus, &unaryPlus);

      // Устанавливаем операторы со вторым приоритетом в стеке
      setSecondPriority(str, stack, &i);

      // Устанавливаем операторы с третьим приоритетом в стеке
      setThirdPriority(str, stack, i);

      // Устанавливаем операторы с четвертым приоритетом в стеке
      setFourthPriority(str, stack, &i);
    }
  }

  return status;
}

int getNumber(char* str, Stack* stack, int* i, int* unaryMinus,
              int* unaryPlus) {
  char buffer[256] = {0};  // Буфер для хранения числа из строки
  int status = OK;
  double num = 0;

  if (isdigit(str[*i])) {
    int dot_count = 0;
    int buffer_index = 0;

    // Читаем символы, пока они являются цифрами или точкой
    while ((isdigit(str[*i])) || (str[*i] == '.')) {
      if (str[*i] == '.') {
        dot_count++;
      }

      // Если точек не больше одной, добавляем символ в буфер
      if (dot_count <= 1) {
        buffer[buffer_index++] = str[(*i)++];
      }
    }

    num = atof(buffer);  // Преобразуем буфер в число типа double

    if (*unaryMinus == 1) {
      num *= -1;  // Если есть унарный минус, меняем знак числа
    }

    Lexeme tmpLexeme = {num, NUM, 0};
    status = push(stack, tmpLexeme);  // Помещаем число в стек
  }

  // Сбрасываем флаги унарного минуса и унарного плюса
  *unaryMinus = 0;
  *unaryPlus = 0;

  return status;
}

int reverseStack(Stack* inputStack, Stack* reversedStack) {
  int status = OK;

  // Переносим элементы из входного стека в обратном порядке в результирующий
  // стек
  while (inputStack->top != NULL) {
    status = push(
        reversedStack,
        inputStack->top->lexeme);  // Помещаем элемент в результирующий стек
    pop(inputStack);  // Удаляем верхний элемент из входного стека
  }

  return status;
}

int getPostfix(Stack* infix, Stack* buffer, Stack* postfix) {
  int status = OK;

  // Проходим по каждому элементу входного инфиксного стека
  while (infix->top != NULL && status == OK) {
    if (infix->top->lexeme.type == NUM || infix->top->lexeme.type == X) {
      // Если текущий элемент - число или переменная X, помещаем его в
      // постфиксный стек
      status = push(postfix, infix->top->lexeme);
    } else if (infix->top->lexeme.priority == 4 ||
               infix->top->lexeme.type == LEFT_BRACKET) {
      // Если текущий элемент - оператор с приоритетом 4 или открывающая скобка,
      // помещаем его в буферный стек
      status = push(buffer, infix->top->lexeme);
    } else if (infix->top->lexeme.type == RIGHT_BRACKET) {
      // Если текущий элемент - закрывающая скобка
      while (buffer->top != NULL && buffer->top->lexeme.type != LEFT_BRACKET) {
        // Перемещаем операторы из буферного стека в постфиксный стек,
        // пока не встретим открывающую скобку
        status = push(postfix, buffer->top->lexeme);
        pop(buffer);
      }
      if (buffer->top != NULL) {
        pop(buffer);  // Удаляем открывающую скобку из буферного стека
      }
    } else if (buffer->top == NULL ||
               (infix->top->lexeme.priority > buffer->top->lexeme.priority)) {
      // Если буферный стек пуст или текущий оператор входного стека
      // имеет больший приоритет, чем верхний элемент буферного стека,
      // помещаем текущий оператор в буферный стек
      status = push(buffer, infix->top->lexeme);
    } else if ((buffer->top != NULL) &&
               (infix->top->lexeme.priority <= buffer->top->lexeme.priority) &&
               infix->top->lexeme.type != RIGHT_BRACKET) {
      if (buffer->top->lexeme.priority == 3 &&
          infix->top->lexeme.priority == 3) {
        // Если текущий оператор и верхний оператор буферного стека имеют
        // приоритет 3 (умножение и деление), помещаем текущий оператор
        // в буферный стек
        status = push(buffer, infix->top->lexeme);
      } else {
        // Если текущий оператор имеет меньший или равный приоритет,
        // чем верхний оператор буферного стека (кроме случая умножения и
        // деления), перемещаем операторы из буферного стека в постфиксный стек,
        // пока приоритет текущего оператора меньше или равен приоритету
        // верхнего оператора буферного стека, затем помещаем текущий оператор в
        // буферный стек
        while ((buffer->top != NULL) &&
               (infix->top->lexeme.priority <= buffer->top->lexeme.priority)) {
          status = push(postfix, buffer->top->lexeme);
          pop(buffer);
        }
        status = push(buffer, infix->top->lexeme);
      }
    }
    pop(infix);  // Удаляем обработанный элемент из входного инфиксного стека
  }

  // Если входной инфиксный стек пуст, а буферный стек не пуст,
  // перемещаем оставшиеся операторы из буферного стека в постфиксный стек
  if (infix->top == NULL && buffer->top != NULL) {
    while (buffer->top != NULL) {
      status = push(postfix, buffer->top->lexeme);
      pop(buffer);
    }
  }

  return status;
}

int calculateResult(Stack* rpn, double x, double* result) {
  int status = OK;
  Stack buffer;
  initStack(&buffer);

  // Проходим по каждому элементу постфиксного стека
  while (rpn->top != NULL && status == OK) {
    if (rpn->top->lexeme.type == NUM || rpn->top->lexeme.type == X) {
      if (rpn->top->lexeme.type == X) {
        // Если текущий элемент - переменная X, заменяем его значением x
        Lexeme tmpLexeme = {x, NUM, 0};
        status = push(&buffer, tmpLexeme);
      } else {
        // Если текущий элемент - число, помещаем его в буферный стек
        status = push(&buffer, rpn->top->lexeme);
      }
      pop(rpn);
    } else if (rpn->top->lexeme.type != NUM) {
      double result = 0;
      if (rpn->top->lexeme.priority == 4) {
        // Если текущий элемент - тригонометрический оператор с приоритетом 4,
        // вычисляем его значение с помощью функции calculateTrig
        Lexeme operation = rpn->top->lexeme;
        Lexeme number = buffer.top->lexeme;
        result = calculateTrig(&operation, &number);
        pop(&buffer);
        pop(rpn);
        Lexeme tmpLexeme = {result, NUM, 0};
        status = push(&buffer, tmpLexeme);
      } else {
        // Если текущий элемент - простой оператор,
        // вычисляем его значение с помощью функции calculateSimpleOperation
        Lexeme operation = rpn->top->lexeme;
        double firstNumber = pop(&buffer);
        double secondNumber = pop(&buffer);
        result =
            calculateSimpleOperation(&operation, firstNumber, secondNumber);
        pop(rpn);
        Lexeme tmpLexeme = {result, NUM, 0};
        push(&buffer, tmpLexeme);
      }
    }
  }

  *result = buffer.top->lexeme.value;
  pop(&buffer);

  return status;
}

double calculateTrig(Lexeme* operation, Lexeme* number) {
  double result = 0;

  // Вычисление значения тригонометрических и других операций
  if (operation->type == SIN) {
    result = sin(number->value);  // Вычисление синуса
  }
  if (operation->type == ASIN) {
    result = asin(number->value);  // Вычисление арксинуса
  }
  if (operation->type == COS) {
    result = cos(number->value);  // Вычисление косинуса
  }
  if (operation->type == ACOS) {
    result = acos(number->value);  // Вычисление арккосинуса
  }
  if (operation->type == TAN) {
    result = tan(number->value);  // Вычисление тангенса
  }
  if (operation->type == ATAN) {
    result = atan(number->value);  // Вычисление арктангенса
  }
  if (operation->type == SQRT) {
    result = sqrt(number->value);  // Вычисление квадратного корня
  }
  if (operation->type == LOG) {
    result = log10(number->value);  // Вычисление десятичного логарифма
  }
  if (operation->type == LN) {
    result = log(number->value);  // Вычисление натурального логарифма
  }

  return result;
}

double calculateSimpleOperation(Lexeme* operation, double firstNumber,
                                double secondNumber) {
  double result = 0;

  // Вычисление значения простых операций
  if (operation->type == PLUS) {
    result = firstNumber + secondNumber;  // Сложение
  }
  if (operation->type == MINUS) {
    result = secondNumber - firstNumber;  // Вычитание
  }
  if (operation->type == MULT) {
    result = firstNumber * secondNumber;  // Умножение
  }
  if (operation->type == DIV) {
    result = secondNumber / firstNumber;  // Деление
  }
  if (operation->type == MOD) {
    result = fmod(secondNumber, firstNumber);  // Остаток от деления
  }
  if (operation->type == EXP) {
    result = pow(secondNumber, firstNumber);  // Возведение в степень
  }

  return result;
}
