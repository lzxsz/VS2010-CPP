#include "settingdialog.h"

SettingDialog::SettingDialog(QWidget *parent) : QDialog(parent)
{
	ui.setupUi(this);

	setWindowFlags(windowFlags()&~Qt::WindowContextHelpButtonHint); //QT去除窗体右上角的问号
}

SettingDialog::~SettingDialog()
{

}

