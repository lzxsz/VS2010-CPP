#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QWidget>
#include "ui_settingdialog.h"

class SettingDialog : public QDialog
{
	Q_OBJECT

public:
	SettingDialog(QWidget *parent = 0);
	~SettingDialog();

private:


private:
	Ui::SettingDialog ui;
};

#endif // SETTINGDIALOG_H
