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
	//���Qt��ʾ����ʱ��������

	QString sTempName("����");

	//---------------------------------------------------------------------------------------------
	QByteArray byteArray;
	byteArray = sTempName.toLatin1();
	const char* szName = byteArray.data();  //�Ƚ�QStringתΪconst char* �ַ������ٽ���Unicodeת��

	//QString sTitle = QTextCodec::codecForName("GBK")->toUnicode(szName);  // Way 1
	//QString sTitle = G2U(szName);                                         
	//---------------------------------------------------------------------------------------------

	QString sTitle = GBK_To_Unicode(sTempName);                            // Way 2

	ui.textTitle->setText(sTitle); //GBK�� --> Unicode��

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
	const char* szText = byteArray.data();  //�Ƚ�QStringתΪconst char* �ַ������ٽ���Unicodeת��

	QString sRetText = QTextCodec::codecForName("GBK")->toUnicode(szText);
	
	return sRetText;
	
}