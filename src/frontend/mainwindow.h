#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cred.h>

#include <QMainWindow>
#include <QVector>

extern "C" {
#include <../backend/calc.h>
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  int flag_bracket, flag_plot;
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void pushButton();
  void pushBUttonTrig();
  void bracket();
  void pushButtonAC();
  void pushButtonCE();
  void on_pushButton_credit_clicked();
  void on_pushButton_graph_clicked();
  void pushButton_EQ();

 private:
  Ui::MainWindow *ui;
  credit_window *credit;
  double xBegin, xEnd, h, X;
  int N;
  int x_detector;
  int credit_flag;
};

#endif  // MAINWINDOW_H
