/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(600, 500);
        Form->setMinimumSize(QSize(600, 500));
        Form->setMaximumSize(QSize(600, 500));
        Form->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 270, 201, 61));
        pushButton->setStyleSheet(QString::fromUtf8("font: 87 25pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 200, 71, 41));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223\";\n"
"color: rgb(255, 170, 255);"));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 110, 301, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 25pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        label_3 = new QLabel(Form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 200, 61, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 20pt \"\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223\";\n"
"color: rgb(0, 170, 255);"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "play again", nullptr));
        label->setText(QCoreApplication::translate("Form", "\345\276\227\345\210\206\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "     GAME OVER", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
