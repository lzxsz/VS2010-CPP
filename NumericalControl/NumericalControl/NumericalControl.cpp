#include "stdafx.h"
#include "numericalcontrol.h"
#include "SettingDialog.h"


NumericalControl::NumericalControl(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	//Disable Window Maximize
	setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
    setFixedSize(this->width(), this->height());

	pWorkProcess = new WorkProcess(this);
}

NumericalControl::~NumericalControl()
{
}

//Start
void NumericalControl::OnButtonStartClick()
{
	pWorkProcess->StartMechanicalHand("START");

}

//Stop
void NumericalControl::OnButtonStopClick()
{
	pWorkProcess->StopMechanicalHand();
}

//Setting
void NumericalControl::OnButtonSettingClick()
{
	SettingDialog  dlgSetting(this);
	dlgSetting.exec();  //model 
}

//Open Door
void NumericalControl::OnButtonOpenDoorClick()
{

	pWorkProcess->setDoorStatus(true);
}

//Close Door
void NumericalControl::OnButtonCloseDoorClick()
{
	pWorkProcess->setDoorStatus(false);
}


