#include "plusminus.h"
#include <QGridLayout>

void Plus_Minus::OnPlus() {
	int val = label->text().toInt();
	val++;
	label->setText(QString::number(val));
}
void Plus_Minus::OnMinus() {
	int val = label->text().toInt();
	val--;
	label->setText(QString::number(val));
}
Plus_Minus::Plus_Minus(QWidget* parent) : QWidget(parent) {
	QPushButton* plus_Btn = new QPushButton("+", this);
	QPushButton* minus_Btn = new QPushButton("-", this);

	QGridLayout* grid = new QGridLayout(this);
	grid->addWidget(plus_Btn, 0, 0);
	grid->addWidget(minus_Btn, 0, 1);
	grid->addWidget(label, 1, 1);

	setLayout(grid);

	connect(plus_Btn, &QPushButton::clicked, this, &Plus_Minus::OnPlus);
	connect(minus_Btn, &QPushButton::clicked, this, &Plus_Minus::OnMinus);
}
