/********************************************************************************
** Form generated from reading UI file 'MyGame.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYGAME_H
#define UI_MYGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyGameClass
{
public:
    QPushButton *pushButton;
    QLabel *labelTime;
    QLabel *label;
    QPushButton *startButton;
    QLabel *labelRecord;

    void setupUi(QWidget *MyGameClass)
    {
        if (MyGameClass->objectName().isEmpty())
            MyGameClass->setObjectName(QString::fromUtf8("MyGameClass"));
        MyGameClass->resize(600, 397);
        MyGameClass->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(MyGameClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(30, 70, 531, 321));
        QPalette palette;
        QBrush brush(QColor(128, 128, 128, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton->setPalette(palette);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid black;\n"
"background-color: gray;"));
        labelTime = new QLabel(MyGameClass);
        labelTime->setObjectName(QString::fromUtf8("labelTime"));
        labelTime->setGeometry(QRect(140, 40, 291, 21));
        labelTime->setAlignment(Qt::AlignCenter);
        label = new QLabel(MyGameClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 321, 20));
        label->setAlignment(Qt::AlignCenter);
        startButton = new QPushButton(MyGameClass);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(30, 10, 75, 21));
        startButton->setStyleSheet(QString::fromUtf8(""));
        labelRecord = new QLabel(MyGameClass);
        labelRecord->setObjectName(QString::fromUtf8("labelRecord"));
        labelRecord->setGeometry(QRect(30, 40, 71, 21));

        retranslateUi(MyGameClass);

        QMetaObject::connectSlotsByName(MyGameClass);
    } // setupUi

    void retranslateUi(QWidget *MyGameClass)
    {
        MyGameClass->setWindowTitle(QCoreApplication::translate("MyGameClass", "MyGame", nullptr));
        pushButton->setText(QString());
        labelTime->setText(QString());
        label->setText(QCoreApplication::translate("MyGameClass", "Click the start button, then wait for the red color and click on it.", nullptr));
        startButton->setText(QCoreApplication::translate("MyGameClass", "Start", nullptr));
        labelRecord->setText(QCoreApplication::translate("MyGameClass", "Record: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyGameClass: public Ui_MyGameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYGAME_H
