#include "settingdialog.h"

SettingDialog::SettingDialog(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint); //QTȥ���������Ͻǵ��ʺ�
}

SettingDialog::~SettingDialog()
{

}

