#include "modeldialog.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ModelDialog w;
	w.show();
	return a.exec();
}
