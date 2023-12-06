#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class Plus_Minus : public QWidget {
	Q_OBJECT // this macro should be included in classes
	//that declare their own signals and slots
private slots:
	void OnPlus();
	void OnMinus();
private:
	QLabel* label;
public:
	Plus_Minus(QWidget* parent = nullptr);
}; 