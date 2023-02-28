/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QPushButton *pushButton_2;
    QLabel *label_5;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(350, 300);
        Dialog->setMinimumSize(QSize(350, 300));
        Dialog->setMaximumSize(QSize(350, 300));
        Dialog->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/dialog_back.png);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-color: rgba(255, 255, 255, 0);\n"
"border-color: rgb(255, 255, 255);"));
        Dialog->setModal(false);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 160, 53, 51));
        pushButton->setMinimumSize(QSize(53, 51));
        pushButton->setMaximumSize(QSize(53, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/music_open.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        pushButton->setAutoDefault(true);
        pushButton->setFlat(true);
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 120, 151, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"selection-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"selection-background-color: rgb(255, 255, 255);\n"
"font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 120, 71, 31));
        label->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 170, 81, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 70, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(170, 60, 151, 41));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"selection-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"selection-background-color: rgb(255, 255, 255);\n"
"font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        comboBox_2->setFrame(true);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 20, 121, 31));
        label_4->setStyleSheet(QString::fromUtf8("font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        comboBox_3 = new QComboBox(Dialog);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(170, 20, 151, 31));
        comboBox_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"selection-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"selection-background-color: rgb(255, 255, 255);\n"
"font: 87 14pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 240, 131, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 170, 255);\n"
"font: 18pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";"));
        pushButton_2->setFlat(false);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 240, 131, 31));
        label_5->setStyleSheet(QString::fromUtf8("font: 14pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color: rgb(255, 170, 255);"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Snake", nullptr));
        pushButton->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "easy", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "ordinary", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "difficult", nullptr));

        label->setText(QCoreApplication::translate("Dialog", "Level:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Music:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Snake Style:", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "red", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "colorful", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Dialog", "changeable", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Dialog", "amazing", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Dialog", "DJ", nullptr));

        label_4->setText(QCoreApplication::translate("Dialog", "Food Style:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog", "red", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog", "DJ", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog", "LOVE", nullptr));

        pushButton_2->setText(QCoreApplication::translate("Dialog", "\351\235\236\344\272\272\347\261\273\346\250\241\345\274\217", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\344\270\200\351\224\256\345\274\200\345\220\257    --->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
