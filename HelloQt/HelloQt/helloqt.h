#ifndef HELLOQT_H
#define HELLOQT_H

#include <QtGui/QMainWindow>
#include "ui_helloqt.h"

#include "settingdialog.h"

class HelloQt : public QMainWindow
{
	Q_OBJECT

public:
	HelloQt(QWidget *parent = 0, Qt::WFlags flags = 0);
	~HelloQt();

	SettingDialog* dlgSetting;
	 
	public slots:
		void OnSettingClick();
  
private:
	Ui::HelloQtClass ui;
};

#endif // HELLOQT_H
