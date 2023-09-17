#ifndef CREDIT_WINDOW_H
#define CREDIT_WINDOW_H

#include <QMainWindow>
extern "C" {

#endif
#include "../backend/parser.h"

int evaluate(char *expr, int num_params, double x, double *result);
void credit_evualete_ann(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
int credit_evualete_diff(double percents, double month, double sum,
                         double *percents_result, double *result,
                         double *montly_pay);
#ifdef __cplusplus
}
namespace Ui {
class credit_window;
}

class credit_window : public QMainWindow {
    Q_OBJECT

public:
    explicit credit_window(QWidget *parent = nullptr);
    ~credit_window();

signals:
    void firstWindow();

private slots:
    void on_pushButton_calculate_clicked();
    void on_btn_back_clicked();

private:
    Ui::credit_window *ui;
};

#endif  // CREDIT_WINDOW_H
