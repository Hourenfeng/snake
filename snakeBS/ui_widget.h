/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(600, 500);
        Widget->setMinimumSize(QSize(600, 500));
        Widget->setMaximumSize(QSize(600, 500));
        QFont font;
        font.setItalic(false);
        Widget->setFont(font);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(510, 210, 71, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Berlin Sans FB Demi"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"\n"
"color: rgb(255, 170, 255);"));
        pushButton->setFlat(true);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(513, 50, 81, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 255);"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(510, 10, 71, 31));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 170, 255);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 360, 61, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 170, 255);\n"
"font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 292, 101, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(255, 170, 255);\n"
"font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        pushButton_3->setFlat(true);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "play", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\345\276\227\345\210\206\357\274\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "\347\273\247\347\273\255\346\270\270\346\210\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
