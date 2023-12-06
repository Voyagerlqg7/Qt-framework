#include<QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>

class Cursors : public QWidget {
public:
	Cursors(QWidget* parent = nullptr);
};

Cursors::Cursors(QWidget* parent) :QWidget(parent) {

	QFrame* frame_1 = new QFrame(this);
	frame_1->setFrameStyle(QFrame::Box);
	frame_1->setCursor(Qt::SizeAllCursor);

	QFrame* frame_2 = new QFrame(this);
	frame_2->setFrameStyle(QFrame::Box);
	frame_2->setCursor(Qt::WaitCursor);

	QFrame* frame_3 = new QFrame(this);
	frame_3->setFrameStyle(QFrame::Box);
	frame_3->setCursor(Qt::PointingHandCursor);

	QGridLayout* grid = new QGridLayout(this);
	grid->addWidget(frame_1, 0, 0);
	grid->addWidget(frame_2, 0, 1);
	grid->addWidget(frame_3, 0, 2);

	setLayout(grid);
}
int main(int argc, char* argv[]) {
	QApplication app(argc, argv);

	Cursors window;
	window.resize(350, 150);
	window.setWindowTitle("Cursors");
	window.show();

	return app.exec();
}

