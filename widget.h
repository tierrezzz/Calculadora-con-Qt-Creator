#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QString>
#include <QFile>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void botonNumericoClickeado();
    void botonLimpiar();
    void operacionClickeada();
    void igualClickeado();
    void metodoParentesis();
    void initStyleSheet();

private:
    Ui::Widget *ui;
    QString entradaActual;
    double valorAlmacenado;
    QString operacionActual;

    // Nuevos métodos para evaluar expresiones
    int prioridad(QChar op);
    double aplicarOperacion(double a, double b, QChar op);
    double evaluarExpresion(const QString& expr);
};

#endif // WIDGET_H
