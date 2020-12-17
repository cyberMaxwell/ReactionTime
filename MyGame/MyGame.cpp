#include "MyGame.h"

MyGame::MyGame(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.startButton, &QPushButton::clicked, this, &MyGame::OnClickStartButton);

	connect(ui.pushButton, &QPushButton::clicked, this, &MyGame::SetTime);

	QSettings settings("settings.ini", QSettings::IniFormat);
	settings.beginGroup("main");
	min = settings.value("min").toInt();
	ui.labelRecord->setText("Record: 0." + QString::number(min));
}

void MyGame::OnClickStartButton()
{
	ui.labelTime->setText("");

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
		int elapsedTime = elapsedTimer.elapsed();

		ui.labelTime->setText("Your speed reaction: 0." + QString::number(elapsedTime));
		if (elapsedTime < min) {
			ui.labelRecord->setText("Record: 0." + QString::number(elapsedTime));
			min = elapsedTime;
		}

		QString style = QString("background-color: gray; border: 2px solid black");
		ui.pushButton->setStyleSheet(style);
	}
	else {
		ui.labelTime->setText("BRAVO! You just stopped the timer.");
	}
	isRed = false;
	timer.stop();
		
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
