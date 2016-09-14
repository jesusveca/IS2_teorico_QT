#include "widget.h"
#include "ui_widget.h"
#include "calculadora.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_button_calcular_clicked(){

    double valor1 = ui->lineEdit_input1->text().toDouble();
    double valor2 = ui->lineEdit_input2->text().toDouble();

    double v1 = sumar(valor1,valor2);
    double v2 = restar(valor1,valor2);
    double v3 = multiplicar(valor1,valor2);
    double v4 = dividir(valor1,valor2);
    QString v1_str = QString::number(v1);
    QString v2_str = QString::number(v2);
    QString v3_str = QString::number(v3);
    QString v4_str = QString::number(v4);
    ui->label_suma->setText(v1_str);
    ui->label_resta->setText(v2_str);
    ui->label_multiplicacion->setText(v3_str);
    ui->label_division->setText(v4_str);
}
void Widget::on_pushButton_borrar1_clicked(){
    ui->lineEdit_input1->setText("0");
}
void Widget::on_pushButton_borrar_2_clicked(){
    ui->lineEdit_input2->setText("0");
}

void Widget::on_pushButton_reset_clicked()
{
    this->on_pushButton_borrar1_clicked();
    this->on_pushButton_borrar_2_clicked();
    ui->label_suma->setText("0");
    ui->label_resta->setText("0");
    ui->label_multiplicacion->setText("0");
    ui->label_division->setText("0");
}
