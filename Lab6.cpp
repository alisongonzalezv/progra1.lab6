#include "Lab6.h"
#include "ui_Lab6.h"
#include <QPushButton>
#include <QString>

Lab6::Lab6(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Lab6Class) {
    ui->setupUi(this);


    connect(ui->btnCalcular, &QPushButton::clicked, this, &Lab6::calcularTotal);
    connect(ui->btnLimpiar, &QPushButton::clicked, this, &Lab6::limpiarFormulario);
}

Lab6::~Lab6() {
    delete ui;
}

void Lab6::calcularTotal() {
    double precio = ui->spnPrecio->value();
    int cantidad = ui->spnCantidad->value();
    double total = precio * cantidad;

    ui->lblTotal->setText(
        QString("Total: CRC %1").arg(total, 0, 'f', 2)
    );
}

void Lab6::limpiarFormulario() {
    ui->spnPrecio->setValue(0);
    ui->spnCantidad->setValue(1);
    ui->lblTotal->setText("Total: CRC 0.00");
    ui->spnPrecio->setFocus();
}