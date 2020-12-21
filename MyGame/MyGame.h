#pragma once

#include "ui_MyGame.h"
#include <QtWidgets>



class MyGame : public QWidget
{
    Q_OBJECT

public:
    MyGame(QWidget *parent = Q_NULLPTR);
    ~MyGame();

    //int GetMin() { return min; }
    //void SetMin(int value) { min = value; }

    void OnClickRestartButton();
    void CleanLabels();

    void OnClickStartButton();
    void ColorChange();
    void SetTime();
    int randomBetween(int low, int high, int seed);
    bool isRed = false;
    

private:
    Ui::MyGameClass ui;
    QElapsedTimer elapsedTimer;
    QTimer timer;
    int min = INT_MAX;
    int attempt = 1;

    int attempt1Time;
    int attempt2Time;
    int attempt3Time;
    int attempt4Time;
    int attempt5Time;

    float average = 0;
};
