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
    QLabel *labelAttempt1;
    QLabel *labelAttempt2;
    QLabel *labelAttempt3;
    QLabel *labelAttempt4;
    QLabel *labelAttempt5;
    QLabel *attempt1;
    QLabel *attempt5;
    QLabel *attempt4;
    QLabel *attempt3;
    QLabel *attempt2;
    QLabel *averageText;
    QLabel *averageTimeLabel;
    QPushButton *restartButton;

    void setupUi(QWidget *MyGameClass)
    {
        if (MyGameClass->objectName().isEmpty())
            MyGameClass->setObjectName(QString::fromUtf8("MyGameClass"));
        MyGameClass->resize(600, 397);
        MyGameClass->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(MyGameClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(20, 100, 551, 291));
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
        labelTime->setGeometry(QRect(100, 40, 291, 21));
        labelTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(MyGameClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 10, 321, 20));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        startButton = new QPushButton(MyGameClass);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(20, 10, 75, 21));
        startButton->setStyleSheet(QString::fromUtf8(""));
        labelRecord = new QLabel(MyGameClass);
        labelRecord->setObjectName(QString::fromUtf8("labelRecord"));
        labelRecord->setGeometry(QRect(20, 70, 71, 21));
        labelAttempt1 = new QLabel(MyGameClass);
        labelAttempt1->setObjectName(QString::fromUtf8("labelAttempt1"));
        labelAttempt1->setGeometry(QRect(450, 0, 51, 16));
        labelAttempt2 = new QLabel(MyGameClass);
        labelAttempt2->setObjectName(QString::fromUtf8("labelAttempt2"));
        labelAttempt2->setGeometry(QRect(450, 20, 51, 16));
        labelAttempt3 = new QLabel(MyGameClass);
        labelAttempt3->setObjectName(QString::fromUtf8("labelAttempt3"));
        labelAttempt3->setGeometry(QRect(450, 40, 51, 16));
        labelAttempt4 = new QLabel(MyGameClass);
        labelAttempt4->setObjectName(QString::fromUtf8("labelAttempt4"));
        labelAttempt4->setGeometry(QRect(450, 80, 51, 16));
        labelAttempt5 = new QLabel(MyGameClass);
        labelAttempt5->setObjectName(QString::fromUtf8("labelAttempt5"));
        labelAttempt5->setGeometry(QRect(450, 60, 51, 16));
        attempt1 = new QLabel(MyGameClass);
        attempt1->setObjectName(QString::fromUtf8("attempt1"));
        attempt1->setGeometry(QRect(510, 0, 47, 16));
        attempt5 = new QLabel(MyGameClass);
        attempt5->setObjectName(QString::fromUtf8("attempt5"));
        attempt5->setGeometry(QRect(510, 80, 47, 16));
        attempt4 = new QLabel(MyGameClass);
        attempt4->setObjectName(QString::fromUtf8("attempt4"));
        attempt4->setGeometry(QRect(510, 60, 47, 16));
        attempt3 = new QLabel(MyGameClass);
        attempt3->setObjectName(QString::fromUtf8("attempt3"));
        attempt3->setGeometry(QRect(510, 40, 47, 16));
        attempt2 = new QLabel(MyGameClass);
        attempt2->setObjectName(QString::fromUtf8("attempt2"));
        attempt2->setGeometry(QRect(510, 20, 47, 16));
        averageText = new QLabel(MyGameClass);
        averageText->setObjectName(QString::fromUtf8("averageText"));
        averageText->setGeometry(QRect(100, 70, 51, 21));
        averageTimeLabel = new QLabel(MyGameClass);
        averageTimeLabel->setObjectName(QString::fromUtf8("averageTimeLabel"));
        averageTimeLabel->setGeometry(QRect(150, 70, 47, 21));
        restartButton = new QPushButton(MyGameClass);
        restartButton->setObjectName(QString::fromUtf8("restartButton"));
        restartButton->setGeometry(QRect(20, 40, 75, 23));

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
        labelAttempt1->setText(QCoreApplication::translate("MyGameClass", "Attempt 1:", nullptr));
        labelAttempt2->setText(QCoreApplication::translate("MyGameClass", "Attempt 2:", nullptr));
        labelAttempt3->setText(QCoreApplication::translate("MyGameClass", "Attempt 3:", nullptr));
        labelAttempt4->setText(QCoreApplication::translate("MyGameClass", "Attempt 5:", nullptr));
        labelAttempt5->setText(QCoreApplication::translate("MyGameClass", "Attempt 4:", nullptr));
        attempt1->setText(QString());
        attempt5->setText(QString());
        attempt4->setText(QString());
        attempt3->setText(QString());
        attempt2->setText(QString());
        averageText->setText(QCoreApplication::translate("MyGameClass", "Average: ", nullptr));
        averageTimeLabel->setText(QString());
        restartButton->setText(QCoreApplication::translate("MyGameClass", "Restart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyGameClass: public Ui_MyGameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYGAME_H
