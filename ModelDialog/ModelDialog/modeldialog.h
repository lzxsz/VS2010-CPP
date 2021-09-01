#ifndef MODELDIALOG_H
#define MODELDIALOG_H

#include <QtGui/QMainWindow>
#include "ui_modeldialog.h"

#include "DemoDialog.h"


class ModelDialog : public QMainWindow
{
	Q_OBJECT

public:
	ModelDialog(QWidget *parent = 0, Qt::WFlags flags = 0);
	~ModelDialog();

private slots:
	void OnShowDialog();


private:
	DemoDialog* pDlgDemo;

private:
	Ui::ModelDialogClass ui;
};

#endif // MODELDIALOG_H
