#ifndef DEMODIALOG_H
#define DEMODIALOG_H

#include <QDialog>
#include "ui_DemoDialog.h"

class DemoDialog : public QDialog
{
	Q_OBJECT

public:
	DemoDialog(QWidget *parent = 0);
	~DemoDialog();

private:
	Ui::DemoDialog ui;
};

#endif // DEMODIALOG_H
