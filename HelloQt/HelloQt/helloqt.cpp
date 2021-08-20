#include "helloqt.h"

HelloQt::HelloQt(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	dlgSetting = new SettingDialog(this);
	
	connect(ui.btnSetting,SIGNAL(clicked()),this,SLOT(OnSettingClick()));
	
}

HelloQt::~HelloQt()
{

}



void HelloQt::OnSettingClick()
{

	dlgSetting->show();
}