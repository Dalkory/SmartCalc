#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  QWidget::setWindowTitle("Calculator");
  credit_flag = 0;
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

  connect(ui->btn_plus, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_minus, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_ymnogenie, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_delenie, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_stepen, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_LBR, SIGNAL(clicked()), this, SLOT(bracket()));
  connect(ui->btn_RBR, SIGNAL(clicked()), this, SLOT(bracket()));
  connect(ui->btn_tochka, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_mod, SIGNAL(clicked()), this, SLOT(pushButton()));
  connect(ui->btn_x, SIGNAL(clicked()), this, SLOT(pushButton()));

  connect(ui->btn_sin, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_asin, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_cos, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_acos, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_tan, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_atan, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_log, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_ln, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));
  connect(ui->btn_sqrt, SIGNAL(clicked()), this, SLOT(pushBUttonTrig()));

  connect(ui->btn_AC, SIGNAL(clicked()), this, SLOT(pushButtonAC()));
  connect(ui->btn_CE, SIGNAL(clicked()), this, SLOT(pushButtonCE()));

  connect(ui->btn_calc, SIGNAL(clicked()), this, SLOT(pushButton_EQ()));
  connect(ui->btn_plot, SIGNAL(clicked()), this, SLOT(on_pushButton_graph_clicked()));
  connect(ui->btn_credit, SIGNAL(clicked()), this, SLOT(on_pushButton_credit_clicked()));

  credit = new credit_window;
  connect(credit, &credit_window::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::pushButton() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label = ui->le_entry->text();
  std::string label_text = ui->le_entry->text().toStdString();
  if (label_text == "0" || new_label == "Error") {
      label_text = button->text().toStdString();
  } else {
      label_text += button->text().toStdString();
  }
  ui->le_entry->setText(QString::fromStdString(label_text));
}

void MainWindow::pushBUttonTrig() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label = ui->le_entry->text();
  if (new_label == "0" || new_label == "Error")
      ui->le_entry->setText(button->text() + "(");
  else
      ui->le_entry->setText(new_label + button->text() + "(");
  flag_bracket++;
}

void MainWindow::bracket() {
  QPushButton *button = (QPushButton *)sender();
  QString new_label = ui->le_entry->text();
  QString buttom_info = button->text();
  QChar lastChar;
  if ((new_label) != "0")
      lastChar = new_label.back();
  else
      lastChar = new_label[0];
  if ((buttom_info == "(" && !lastChar.isDigit() && lastChar != '.' &&
       lastChar != ')') ||
      (new_label == "0" || new_label == "Error")) {
      if ((new_label) != "0" && (new_label) != "Error")
          ui->le_entry->setText(new_label + button->text());
      else
          ui->le_entry->setText(button->text());
      flag_bracket++;
  } else if (buttom_info == ")" && flag_bracket &&
             (lastChar.isDigit() || lastChar == ')' || lastChar == '.' ||
              lastChar == 'x')) {
      ui->le_entry->setText(new_label + button->text());
      flag_bracket--;
  }
}

void MainWindow::pushButtonAC() { ui->le_entry->setText(""); }

void MainWindow::pushButtonCE() {
  QString text = ui->le_entry->text();
  if (!text.isEmpty()) {
    text.chop(1);
      ui->le_entry->setText(text);
  }
}

void MainWindow::pushButton_EQ() {
  std::string text = ui->le_entry->text().toStdString();
  char *str = &text[0];
  double x = ui->doubleSpinBox_x->text().toDouble();
  double result = 0;
  int status = from_answer(str, &result, x);
  if (status == OK) {
      QString new_label = QString::number(result, 'f', 7);
      ui->le_entry->setText(new_label);
  } else if (status == INCORRECT_INPUT) {
      QString new_label = "INCORRECT INPUT";
      ui->le_entry->setText(new_label);
  } else if (status == CALCULATION_ERROR) {
      QString new_label = "CALCULATION ERROR";
      ui->le_entry->setText(new_label);
  } else if (status == MEMORY_ERROR) {
      QString new_label = "MEMORY ERROR";
      ui->le_entry->setText(new_label);
  } else if (status == NAN_RESULT) {
      QString new_label = "nan";
      ui->le_entry->setText(new_label);
  } else if (status == INF_RESULT) {
      QString new_label = "inf";
      ui->le_entry->setText(new_label);
  }
}

void MainWindow::on_pushButton_graph_clicked() {
  if (flag_plot) {
      ui->widget->addGraph();
      ui->widget->graph(0)->data()->clear();
      ui->widget->replot();
  }
  QVector<double> x, y;
  h = 0.1;
  bool x_max_detector, x_min_detector, y_min_detector, y_max_detector = false;
  int x_max = ui->line_x_max->text().toInt(&x_max_detector);
  int x_min = ui->line_x_min->text().toInt(&x_min_detector);
  int y_max = ui->line_y_max->text().toInt(&y_min_detector);
  int y_min = ui->line_y_min->text().toInt(&y_max_detector);
  if (x_max_detector && x_min_detector && y_min_detector && y_max_detector &&
      x_min < x_max && y_min < y_max) {
      xBegin = x_min;
      xEnd = x_max;
      ui->widget->xAxis->setRange(x_min, x_max);
      ui->widget->yAxis->setRange(y_min, y_max);
      X = xBegin;
      QString currentText = ui->le_entry->text();
      QByteArray tmp_byte_array = currentText.toLatin1();
      char *str = tmp_byte_array.data();
      for (X = xBegin; X <= xEnd; X += h) {
          double res;
          int status = from_answer(str, &res, X);
          if (status == OK) {
              QString new_label = QString::number(res);
              ui->le_entry->setText(new_label);
          } else if (status == INCORRECT_INPUT) {
              QString new_label = "INCORRECT INPUT";
              ui->le_entry->setText(new_label);
          } else if (status == CALCULATION_ERROR) {
              QString new_label = "CALCULATION ERROR";
              ui->le_entry->setText(new_label);
          } else if (status == MEMORY_ERROR) {
              QString new_label = "MEMORY ERROR";
              ui->le_entry->setText(new_label);
          } else if (status == NAN_RESULT) {
              QString new_label = "nan";
              ui->le_entry->setText(new_label);
          } else if (status == INF_RESULT) {
              QString new_label = "inf";
              ui->le_entry->setText(new_label);
          }
          y.push_back(res);
          x.push_back(X);
      }
      ui->widget->addGraph();
      ui->widget->graph(0)->addData(x, y);
      ui->widget->replot();
      flag_plot++;
  } else {
      ui->le_entry->setText("Error");
  }
}

void MainWindow::on_pushButton_credit_clicked() {
  credit->show();
  this->close();
}
