#include "toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

Toolbar::Toolbar(QWidget *parent):QMainWindow(parent) {

	QPixmap new_pix("src/add.png");
	QPixmap open_pix("src/open.png");
	QPixmap quit_pix("src/sign-out.png");

	QToolBar* toolbar = addToolBar("main toolbar");

	toolbar->addAction(QIcon(new_pix), "New file");
	toolbar->addAction(QIcon(open_pix), "Open file");
	toolbar->addSeparator();
	QAction* quit = toolbar->addAction(QIcon(quit_pix), "Quit");

	connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}