#include "stdafx.h"
#include "numericalcontrol.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NumericalControl w;

	w.show();
	return a.exec();
}
