#include "StdAfx.h"
#include "SettingDialog.h"

#include <QTextCodec>
#include <QString>

#define G2U(s) ( QTextCodec::codecForName("GBK")->toUnicode(s) )
//#define U2G(s) ( QTextCodec::codecForName("GBK")->fromUnicode(s) )


SettingDialog::SettingDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//Disable Window Maximize and Fixed Size
	setWindowFlags(windowFlags()& ~Qt::WindowMaximizeButtonHint);
	setFixedSize(this->width(), this->height());

	setWindowFlags(windowFlags() & ~Qt::WindowContextHelpButtonHint); //Delete "?" of dialog
}

SettingDialog::~SettingDialog()
{

}


void SettingDialog::showEvent(QShowEvent *event)
{
	//解决Qt显示中文时乱码问题

	QString sTempName("中文");

	//---------------------------------------------------------------------------------------------
	QByteArray byteArray;
	byteArray = sTempName.toLatin1();
	const char* szName = byteArray.data();  //先将QString转为const char* 字符串，再进行Unicode转换

	//QString sTitle = QTextCodec::codecForName("GBK")->toUnicode(szName);  // Way 1
	//QString sTitle = G2U(szName);                                         
	//---------------------------------------------------------------------------------------------

	QString sTitle = GBK_To_Unicode(sTempName);                            // Way 2

	ui.textTitle->setText(sTitle); //GBK码 --> Unicode码

}

//OK
void SettingDialog::accept()
{
	QDialog::accept();

}

QString SettingDialog::GBK_To_Unicode(QString sTemp)
{
	QByteArray byteArray;
	byteArray = sTemp.toLatin1();
	const char* szText = byteArray.data();  //先将QString转为const char* 字符串，再进行Unicode转换

	QString sRetText = QTextCodec::codecForName("GBK")->toUnicode(szText);
	
	return sRetText;
	
}