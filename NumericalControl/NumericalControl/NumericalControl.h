#ifndef NUMERICALCONTROL_H
#define NUMERICALCONTROL_H

#include <QtGui/QMainWindow>
#include "ui_numericalcontrol.h"

#include "WorkProcess.h"


class NumericalControl : public QMainWindow
{
	Q_OBJECT

public:
	NumericalControl(QWidget *parent = 0, Qt::WFlags flags = 0);
	~NumericalControl();

public slots:
	void OnButtonStartClick();
	void OnButtonStopClick();
	void OnButtonSettingClick();

	void OnButtonOpenDoorClick();
	void OnButtonCloseDoorClick();

private:
	WorkProcess* pWorkProcess;

private:
	Ui::NumericalControlClass ui;
};

#endif // NUMERICALCONTROL_H
