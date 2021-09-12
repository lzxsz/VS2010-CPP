#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QWidget>
#include "ui_SettingDialog.h"

class SettingDialog : public QDialog
{
	Q_OBJECT

public:
	SettingDialog(QWidget *parent = 0);
	~SettingDialog();

protected: 
	virtual void showEvent(QShowEvent *event) override; 

	QString GBK_To_Unicode(QString sTemp);

public slots:
	virtual void accept() override;

private:
	Ui::SettingDialog ui;
};

#endif // SETTINGDIALOG_H
