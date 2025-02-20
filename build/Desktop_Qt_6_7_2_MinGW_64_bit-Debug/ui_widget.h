/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_negativo;
    QPushButton *pushButton_05;
    QPushButton *pushButton_Porcentaje;
    QPushButton *pushButton_04;
    QPushButton *pushButton_Restar;
    QPushButton *pushButton_Limpiar;
    QPushButton *pushButton_Igual;
    QPushButton *pushButton_Parentesis;
    QPushButton *pushButton_08;
    QPushButton *pushButton_01;
    QPushButton *pushButton_06;
    QPushButton *pushButton_Multiplicar;
    QPushButton *pushButton_09;
    QPushButton *pushButton_03;
    QPushButton *pushButton_02;
    QPushButton *pushButton_07;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Punto;
    QPushButton *pushButton_dividir;
    QPushButton *pushButton_sumar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(228, 233);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(Widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_negativo = new QPushButton(Widget);
        pushButton_negativo->setObjectName("pushButton_negativo");
        pushButton_negativo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_negativo, 4, 0, 1, 1);

        pushButton_05 = new QPushButton(Widget);
        pushButton_05->setObjectName("pushButton_05");
        pushButton_05->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_05, 2, 1, 1, 1);

        pushButton_Porcentaje = new QPushButton(Widget);
        pushButton_Porcentaje->setObjectName("pushButton_Porcentaje");
        pushButton_Porcentaje->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Porcentaje, 0, 2, 1, 1);

        pushButton_04 = new QPushButton(Widget);
        pushButton_04->setObjectName("pushButton_04");
        pushButton_04->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_04, 2, 0, 1, 1);

        pushButton_Restar = new QPushButton(Widget);
        pushButton_Restar->setObjectName("pushButton_Restar");
        pushButton_Restar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Restar, 2, 3, 1, 1);

        pushButton_Limpiar = new QPushButton(Widget);
        pushButton_Limpiar->setObjectName("pushButton_Limpiar");
        pushButton_Limpiar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Limpiar, 0, 0, 1, 1);

        pushButton_Igual = new QPushButton(Widget);
        pushButton_Igual->setObjectName("pushButton_Igual");
        pushButton_Igual->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Igual, 4, 3, 1, 1);

        pushButton_Parentesis = new QPushButton(Widget);
        pushButton_Parentesis->setObjectName("pushButton_Parentesis");
        pushButton_Parentesis->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Parentesis, 0, 1, 1, 1);

        pushButton_08 = new QPushButton(Widget);
        pushButton_08->setObjectName("pushButton_08");
        pushButton_08->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_08, 1, 1, 1, 1);

        pushButton_01 = new QPushButton(Widget);
        pushButton_01->setObjectName("pushButton_01");
        pushButton_01->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_01, 3, 0, 1, 1);

        pushButton_06 = new QPushButton(Widget);
        pushButton_06->setObjectName("pushButton_06");
        pushButton_06->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_06, 2, 2, 1, 1);

        pushButton_Multiplicar = new QPushButton(Widget);
        pushButton_Multiplicar->setObjectName("pushButton_Multiplicar");
        pushButton_Multiplicar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Multiplicar, 1, 3, 1, 1);

        pushButton_09 = new QPushButton(Widget);
        pushButton_09->setObjectName("pushButton_09");
        pushButton_09->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_09, 1, 2, 1, 1);

        pushButton_03 = new QPushButton(Widget);
        pushButton_03->setObjectName("pushButton_03");
        pushButton_03->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_03, 3, 2, 1, 1);

        pushButton_02 = new QPushButton(Widget);
        pushButton_02->setObjectName("pushButton_02");
        pushButton_02->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_02, 3, 1, 1, 1);

        pushButton_07 = new QPushButton(Widget);
        pushButton_07->setObjectName("pushButton_07");
        pushButton_07->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_07, 1, 0, 1, 1);

        pushButton_0 = new QPushButton(Widget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, \n"
"stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));

        gridLayout->addWidget(pushButton_0, 4, 1, 1, 1);

        pushButton_Punto = new QPushButton(Widget);
        pushButton_Punto->setObjectName("pushButton_Punto");
        pushButton_Punto->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_Punto, 4, 2, 1, 1);

        pushButton_dividir = new QPushButton(Widget);
        pushButton_dividir->setObjectName("pushButton_dividir");
        pushButton_dividir->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_dividir, 0, 3, 1, 1);

        pushButton_sumar = new QPushButton(Widget);
        pushButton_sumar->setObjectName("pushButton_sumar");
        pushButton_sumar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
" stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout->addWidget(pushButton_sumar, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_negativo->setText(QCoreApplication::translate("Widget", "+/-", nullptr));
        pushButton_05->setText(QCoreApplication::translate("Widget", "5", nullptr));
        pushButton_Porcentaje->setText(QCoreApplication::translate("Widget", "%", nullptr));
        pushButton_04->setText(QCoreApplication::translate("Widget", "4", nullptr));
        pushButton_Restar->setText(QCoreApplication::translate("Widget", "-", nullptr));
        pushButton_Limpiar->setText(QCoreApplication::translate("Widget", "C", nullptr));
        pushButton_Igual->setText(QCoreApplication::translate("Widget", "=", nullptr));
        pushButton_Parentesis->setText(QCoreApplication::translate("Widget", "()", nullptr));
        pushButton_08->setText(QCoreApplication::translate("Widget", "8", nullptr));
        pushButton_01->setText(QCoreApplication::translate("Widget", "1", nullptr));
        pushButton_06->setText(QCoreApplication::translate("Widget", "6", nullptr));
        pushButton_Multiplicar->setText(QCoreApplication::translate("Widget", "*", nullptr));
        pushButton_09->setText(QCoreApplication::translate("Widget", "9", nullptr));
        pushButton_03->setText(QCoreApplication::translate("Widget", "3", nullptr));
        pushButton_02->setText(QCoreApplication::translate("Widget", "2", nullptr));
        pushButton_07->setText(QCoreApplication::translate("Widget", "7", nullptr));
        pushButton_0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        pushButton_Punto->setText(QCoreApplication::translate("Widget", ".", nullptr));
        pushButton_dividir->setText(QCoreApplication::translate("Widget", "/", nullptr));
        pushButton_sumar->setText(QCoreApplication::translate("Widget", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
