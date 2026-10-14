#ifndef LAB6_H
#define LAB6_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Lab6Class; }
QT_END_NAMESPACE

class Lab6 : public QMainWindow {
    Q_OBJECT

public:
    explicit Lab6(QWidget *parent = nullptr);
    ~Lab6();

private:
    void calcularTotal();
    void limpiarFormulario();

    Ui::Lab6Class *ui;
};

#endif
