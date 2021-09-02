#ifndef CNZH_H
#define CNZH_H

#include <QtGui/QMainWindow>
#include "ui_cnzh.h"

class CNZH : public QMainWindow
{
	Q_OBJECT

public:
	CNZH(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CNZH();

private:
	Ui::CNZHClass ui;
};

#endif // CNZH_H
