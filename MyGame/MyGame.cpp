#include "MyGame.h"

MyGame::MyGame(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.startButton, &QPushButton::clicked, this, &MyGame::OnClickStartButton);

	connect(ui.restartButton, &QPushButton::clicked, this, &MyGame::OnClickRestartButton);

	connect(ui.pushButton, &QPushButton::clicked, this, &MyGame::SetTime);

	QSettings settings("settings.ini", QSettings::IniFormat);
	settings.beginGroup("main");
	min = settings.value("min").toInt();
	ui.labelRecord->setText("Record: 0." + QString::number(min));
}

void MyGame::OnClickRestartButton()
{
	attempt = 1;
	CleanLabels();
}

void MyGame::OnClickStartButton()
{
	CleanLabels();

	connect(&timer, &QTimer::timeout, this, &MyGame::ColorChange);
	timer.start(randomBetween(2000, 10000, QTime().currentTime().msec()));
}

void MyGame::ColorChange()
{
	QString style = QString("background-color: red; border: 2px solid black");
	ui.pushButton->setStyleSheet(style);
	isRed = true;

	elapsedTimer.start();//запуск таймера после того, как кнопка стала красной, время которого-это скорость реакции
}

void MyGame::SetTime()
{
	if (isRed) {
		QString style = QString("background-color: gray; border: 2px solid black");

		switch (attempt)
		{
		case 1: {
			int elapsedTime = elapsedTimer.elapsed();
			attempt1Time = elapsedTime;
			ui.attempt1->setText("0." + QString::number(elapsedTime));
			ui.pushButton->setStyleSheet(style);
			attempt++;
			break;
		}
		case 2: {
			int elapsedTime = elapsedTimer.elapsed();
			attempt2Time = elapsedTime;
			ui.attempt2->setText("0." + QString::number(elapsedTime));
			ui.pushButton->setStyleSheet(style);
			attempt++;
			break;
		}
		case 3: {
			int elapsedTime = elapsedTimer.elapsed();
			attempt3Time = elapsedTime;
			ui.attempt3->setText("0." + QString::number(elapsedTime));
			ui.pushButton->setStyleSheet(style);
			attempt++;
			break;
		}
		case 4: {
			int elapsedTime = elapsedTimer.elapsed();
			attempt4Time = elapsedTime;
			ui.attempt4->setText("0." + QString::number(elapsedTime));
			ui.pushButton->setStyleSheet(style);
			attempt++;
			break;
		}
		case 5: {
			int elapsedTime = elapsedTimer.elapsed();
			attempt5Time = elapsedTime;
			ui.attempt5->setText("0." + QString::number(elapsedTime));
			ui.pushButton->setStyleSheet(style);
			attempt = 1;
			average = (attempt1Time + attempt2Time + attempt3Time + attempt4Time + attempt5Time) / 5;
			ui.averageTimeLabel->setText("0." + QString::number(average));
			if (average < min) {
				min = average;
				ui.labelRecord->setText("Record: 0." + QString::number(min));
			}
			break;
		}
			  
		}
	}
	else {
		CleanLabels();
		ui.labelTime->setText("BRAVO! You just stopped the timer.");
	}

	isRed = false;
	timer.stop();
}

void MyGame::CleanLabels()
{
	ui.labelTime->setText("");
	ui.averageTimeLabel->setText("");
	if (attempt == 1) {
		ui.attempt1->setText("");
		ui.attempt2->setText("");
		ui.attempt3->setText("");
		ui.attempt4->setText("");
		ui.attempt5->setText("");
	}
}


int MyGame::randomBetween(int low, int high, int seed)
{
	qsrand(seed);
	return (qrand() % ((high + 1) - low) + low);
}


MyGame::~MyGame()
{
	QSettings settings("settings.ini", QSettings::IniFormat);
	settings.beginGroup("main");
	settings.setValue("min", min);
}
