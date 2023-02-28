/********************************************************************************
** Form generated from reading UI file 'dialog_pause.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PAUSE_H
#define UI_DIALOG_PAUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog_pause
{
public:
    QLabel *label;

    void setupUi(QDialog *Dialog_pause)
    {
        if (Dialog_pause->objectName().isEmpty())
            Dialog_pause->setObjectName(QString::fromUtf8("Dialog_pause"));
        Dialog_pause->resize(200, 150);
        Dialog_pause->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/image/dialog_back.png);R"));
        Dialog_pause->setSizeGripEnabled(false);
        Dialog_pause->setModal(false);
        label = new QLabel(Dialog_pause);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 91, 41));
        label->setStyleSheet(QString::fromUtf8("font: 87 18pt \"Arial Black\";\n"
"color: rgb(255, 170, 255);"));

        retranslateUi(Dialog_pause);

        QMetaObject::connectSlotsByName(Dialog_pause);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pause)
    {
        Dialog_pause->setWindowTitle(QCoreApplication::translate("Dialog_pause", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_pause", "Pause", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_pause: public Ui_Dialog_pause {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PAUSE_H
