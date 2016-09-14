#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_button_calcular_clicked();

    void on_pushButton_borrar1_clicked();

    void on_pushButton_borrar_2_clicked();

    void on_pushButton_reset_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
