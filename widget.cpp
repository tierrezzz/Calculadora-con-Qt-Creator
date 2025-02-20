#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QDebug>
#include <stack>
#include <cctype>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculadora");
    initStyleSheet();

    // numeros
    connect(ui->pushButton_0, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_01, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_02, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_03, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_04, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_05, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_06, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_07, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_08, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_09, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_Punto, &QPushButton::clicked, this, &Widget::botonNumericoClickeado);
    connect(ui->pushButton_Parentesis, &QPushButton::clicked, this, &Widget::metodoParentesis);

    // limpiar
    connect(ui->pushButton_Limpiar, &QPushButton::clicked, this, &Widget::botonLimpiar);

    // operaciones
    connect(ui->pushButton_sumar      , &QPushButton::clicked, this, &Widget::operacionClickeada);
    connect(ui->pushButton_Restar     , &QPushButton::clicked, this, &Widget::operacionClickeada);
    connect(ui->pushButton_Multiplicar, &QPushButton::clicked, this, &Widget::operacionClickeada);
    connect(ui->pushButton_dividir    , &QPushButton::clicked, this, &Widget::operacionClickeada);
    connect(ui->pushButton_Porcentaje , &QPushButton::clicked, this, &Widget::operacionClickeada);
    connect(ui->pushButton_negativo   , &QPushButton::clicked, this, &Widget::operacionClickeada);

    // igual
    connect(ui->pushButton_Igual, &QPushButton::clicked, this, &Widget::igualClickeado);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::botonNumericoClickeado()
{
    QPushButton *boton = qobject_cast<QPushButton*>(sender());

    if (boton)
    {
        QString botonTexto = boton->text();
        entradaActual += botonTexto;
        ui->label->setText(entradaActual);
    }
}

void Widget::metodoParentesis()
{
    static bool abrirParentesis = true;

    if (abrirParentesis) {
        entradaActual += "(";
    } else {
        entradaActual += ")";
    }

    abrirParentesis = !abrirParentesis;
    ui->label->setText(entradaActual);
}

void Widget::botonLimpiar()
{
    entradaActual = "";
    valorAlmacenado = 0;
    operacionActual = "";
    ui->label->setText("0");
}

void Widget::operacionClickeada()
{
    QPushButton *Boton = qobject_cast<QPushButton*>(sender());

    if (Boton)
    {
        QString operador = Boton->text();
        entradaActual += operador;
        ui->label->setText(entradaActual);
    }
}

int Widget::prioridad(QChar op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

double Widget::aplicarOperacion(double a, double b, QChar op) {
    switch (op.toLatin1()) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return b != 0 ? a / b : 0;
    default: return 0;
    }
}

double Widget::evaluarExpresion(const QString& expr) {
    std::stack<double> valores;
    std::stack<QChar> ops;

    QString num;

    for (int i = 0; i < expr.length(); ++i) {
        QChar c = expr[i];

        if (c.isDigit() || c == '.') {
            num += c;
        } else {
            if (!num.isEmpty()) {
                valores.push(num.toDouble());
                num.clear();
            }

            if (c == '(') {
                ops.push(c);
            } else if (c == ')') {
                while (!ops.empty() && ops.top() != '(') {
                    double val2 = valores.top(); valores.pop();
                    double val1 = valores.top(); valores.pop();
                    QChar op = ops.top(); ops.pop();
                    valores.push(aplicarOperacion(val1, val2, op));
                }
                ops.pop();
            } else if (c == '+' || c == '-' || c == '*' || c == '/') {
                while (!ops.empty() && prioridad(ops.top()) >= prioridad(c)) {
                    double val2 = valores.top(); valores.pop();
                    double val1 = valores.top(); valores.pop();
                    QChar op = ops.top(); ops.pop();
                    valores.push(aplicarOperacion(val1, val2, op));
                }
                ops.push(c);
            }
        }
    }

    if (!num.isEmpty()) {
        valores.push(num.toDouble());
    }

    while (!ops.empty()) {
        double val2 = valores.top(); valores.pop();
        double val1 = valores.top(); valores.pop();
        QChar op = ops.top(); ops.pop();
        valores.push(aplicarOperacion(val1, val2, op));
    }

    return valores.top();
}

void Widget::igualClickeado()
{
    double resultado = evaluarExpresion(entradaActual);
    ui->label->setText(QString::number(resultado));
    entradaActual = QString::number(resultado);
}

void Widget::initStyleSheet()
{
    QFile estilo(":/src/stylesheets/stylesheet_01.css");
    bool ok = estilo.open(QFile::ReadOnly);

    qDebug() << "Archivo de Style: " << ok;

    QString s = QString::fromLatin1(estilo.readAll());
    this->setStyleSheet(s);
}



