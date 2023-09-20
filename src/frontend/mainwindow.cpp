#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  // Устанавливаем заголовок окна с названием "Calculator"
  QWidget::setWindowTitle("Calculator");

  // Инициализация флага credit_flag
  credit_flag = 0;

  // Создание соединений между кнопками и слотами
  // Соединение 0 - 9 кнопок с слотом pushButton
  connect(ui->btn_0, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_1, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_2, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_3, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_4, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_5, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_6, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_7, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_8, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_9, SIGNAL(clicked()), this, SLOT(pushButton()));

  // Создание соединений для арифметических кнопок
  connect(ui->btn_plus, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_minus, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_ymnogenie, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_delenie, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_stepen, SIGNAL(clicked()), this, SLOT(pushButton()));

  // Создание соединений для скобок и других специальных символов
  connect(ui->btn_LBR, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_RBR, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_tochka, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_mod, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_x, SIGNAL(clicked()), this, SLOT(pushButton()));

  // Создание соединений для тригонометрических и логарифмических функций
  connect(ui->btn_sin, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_asin, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_cos, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_acos, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_tan, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_atan, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_log, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_ln, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_sqrt, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));

  // Создание соединений для кнопок AC и CE
  connect(ui->btn_AC, SIGNAL(clicked()), this, SLOT(pushButtonAC()));
  connect(ui->btn_CE, SIGNAL(clicked()), this, SLOT(pushButtonCE()));

  // Создание соединений для кнопок, выполняющих вычисления и отображения
  // графика
  connect(ui->btn_calc, SIGNAL(clicked()), this, SLOT(pushButton_EQ()));
  connect(ui->btn_plot, SIGNAL(clicked()), this,
          SLOT(on_pushButton_graph_clicked()));

  // Создание соединений для кнопки информации о кредите
  connect(ui->btn_credit, SIGNAL(clicked()), this,
          SLOT(on_pushButton_credit_clicked()));

  // Создание и настройка окна с информацией о кредите
  credit = new credit_window;
  connect(credit, &credit_window::firstWindow, this, &MainWindow::show);
}

// Деструктор главного окна
MainWindow::~MainWindow() {
  delete ui;  // Удаление объекта пользовательского интерфейса
}

// Обработчик нажатия кнопки
void MainWindow::pushButton() {
  QPushButton *button =
      (QPushButton *)sender();  // Получение указателя на кнопку-отправителя
  QString new_label =
      ui->le_entry->text();  // Получение текущего текста из метки
  std::string label_text =
      ui->le_entry->text()
          .toStdString();  // Конвертация текущего текста метки в строку
  if (label_text == "0" ||
      new_label == "Error") {  // Если на метке "0" или "Error"
    label_text =
        button->text()
            .toStdString();  // Задаем новый текст метки с номером кнопки
  } else {
    label_text += button->text().toStdString();  // Иначе добавляем текст кнопки
                                                 // к текущему тексту метки
  }
  ui->le_entry->setText(QString::fromStdString(
      label_text));  // Устанавливаем новый текст для метки
}

// Обработчик нажатия тригонометрической кнопки
void MainWindow::pushBUttonTrig() {
  QPushButton *button =
      (QPushButton *)sender();  // Получение указателя на кнопку-отправителя
  QString new_label =
      ui->le_entry->text();  // Получение текущего текста из метки
  if (new_label == "0" ||
      new_label == "Error")  // Если на метке "0" или "Error"
    ui->le_entry->setText(
        button->text() +
        "(");  // Задаем новый текст: название кнопки и открывающая скобка
  else
    ui->le_entry->setText(new_label + button->text() +
                          "(");  // Иначе добавляем к текущему тексту метки
                                 // название кнопки и открывающую скобку
  flag_bracket++;  // Увеличение счетчика скобок
}

// Функция очищает строку ввода, устанавливая пустую строку
void MainWindow::pushButtonAC() { ui->le_entry->setText(""); }

// Функция удаляет последний символ в строке ввода
void MainWindow::pushButtonCE() {
  QString text = ui->le_entry->text();
  if (!text.isEmpty()) {
    text.chop(1);
    ui->le_entry->setText(text);
  }
}

// Объявление функции pushButton_EQ, которая вызывается при нажатии кнопки "="
void MainWindow::pushButton_EQ() {
  // Получение текста из LineEdit компонента, в котором пользователь вводит
  // выражение
  std::string text = ui->le_entry->text().toStdString();
  // Преобразование строки в указатель на символ, который будет передаваться в
  // функцию from_answer
  char *str = &text[0];
  // Получение значения переменной x из DoubleSpinBox компонента
  double x = ui->doubleSpinBox_x->text().toDouble();
  // Объявление переменной для хранения результата вычисления
  double result = 0;
  // Вычисление выражения с использованием функции from_answer и получение
  // статуса операции
  int status = from_answer(str, &result, x);

  // Обработка различных результатов операции:
  if (status == OK) {
    // Если все хорошо, выводим результат в LineEdit компонент
    QString new_label = QString::number(result, 'g', 15);
    ui->le_entry->setText(new_label);
  } else if (status == INCORRECT_INPUT) {
    // Если неверный ввод, выводим сообщение об ошибке в LineEdit компонент
    QString new_label = "INCORRECT INPUT";
    ui->le_entry->setText(new_label);
  } else if (status == CALCULATION_ERROR) {
    // Если ошибка вычисления, выводим сообщение об ошибке в LineEdit компонент
    QString new_label = "CALCULATION ERROR";
    ui->le_entry->setText(new_label);
  } else if (status == MEMORY_ERROR) {
    // Если ошибка памяти, выводим сообщение об ошибке в LineEdit компонент
    QString new_label = "MEMORY ERROR";
    ui->le_entry->setText(new_label);
  } else if (status == NAN_RESULT) {
    // Если результат - "не число" (Not a Number), выводим "nan" в LineEdit
    // компонент
    QString new_label = "nan";
    ui->le_entry->setText(new_label);
  } else if (status == INF_RESULT) {
    // Если результат - бесконечность, выводим "inf" в LineEdit компонент
    QString new_label = "inf";
    ui->le_entry->setText(new_label);
  }
}

// Обрабатываем нажатие кнопки "Отрисовать график"
void MainWindow::on_pushButton_graph_clicked() {
  // Если уже был построен график, то очистить текущую область
  if (flag_plot) {
    ui->widget->addGraph();
    ui->widget->graph(0)->data()->clear();
    ui->widget->replot();
  }

  // Декларируем векторы x и y для точек графика
  QVector<double> x, y;
  h = 0.1;

  // Флаги для проверки корректного введения значений
  bool x_max_detector, x_min_detector, y_min_detector, y_max_detector = false;

  // Считываем значения из соответствующих полей
  int x_max = ui->line_x_max->text().toInt(&x_max_detector);
  int x_min = ui->line_x_min->text().toInt(&x_min_detector);
  int y_max = ui->line_y_max->text().toInt(&y_min_detector);
  int y_min = ui->line_y_min->text().toInt(&y_max_detector);

  // Проверяем корректность введенных значений
  if (x_max_detector && x_min_detector && y_min_detector && y_max_detector &&
      x_min < x_max && y_min < y_max) {
    xBegin = x_min;
    xEnd = x_max;

    // Задаем диапазон осей x и y
    ui->widget->xAxis->setRange(x_min, x_max);
    ui->widget->yAxis->setRange(y_min, y_max);

    X = xBegin;
    QString currentText = ui->le_entry->text();
    QByteArray tmp_byte_array = currentText.toLatin1();
    char *str = tmp_byte_array.data();

    // Проходимся по всем значениям X в заданном диапазоне
    for (X = xBegin; X <= xEnd; X += h) {
      double res;
      int status = from_answer(str, &res, X);

      // Обрабатываем статус полученного результата
      switch (status) {
        case OK:
          ui->le_entry->setText(QString::number(res));
          break;
        case INCORRECT_INPUT:
          ui->le_entry->setText("INCORRECT INPUT");
          break;
        case CALCULATION_ERROR:
          ui->le_entry->setText("CALCULATION ERROR");
          break;
        case MEMORY_ERROR:
          ui->le_entry->setText("MEMORYERROR");
          break;
        case NAN_RESULT:
          ui->le_entry->setText("nan");
          break;
        case INF_RESULT:
          ui->le_entry->setText("inf");
          break;
      }

      // Заполнение векторов x и y
      y.push_back(res);
      x.push_back(X);
    }

    // Добавление графика на виджет и его отрисовка
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();

    // Увеличиваем счетчик построенных графиков
    flag_plot++;
  } else {
    // Выводим сообщение об ошибке ввода
    ui->le_entry->setText("Error, please input xmax xmin ymax ymin");
  }
}

// Функция обработчик события нажатия на кнопку "pushButton_credit"
void MainWindow::on_pushButton_credit_clicked() {
  credit->show();  // Показать окно "credit"
  this->close();   // Закрыть текущее окно
}
