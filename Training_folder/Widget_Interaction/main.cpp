#include "plusminus.h"
int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	Plus_Minus window;
	window.resize(350, 150);
	window.setWindowTitle("Widget Interaction");
	window.show();
	app.exec();
}