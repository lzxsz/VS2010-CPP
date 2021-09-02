#include "cnzh.h"

#include <QTextCodec>
#include <QString>

#define G2U(s) ( QTextCodec::codecForName("GBK")->toUnicode(s) )
//#define U2G(s) ( QTextCodec::codecForName("GBK")->fromUnicode(s) )

CNZH::CNZH(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	int count = 1;
	
	QString sTemp;
	QString sTempName("地球");

	QString sName;
	QString sNumber;
	QString sRemark;

	//名称
	QString qsName = QString("%1").arg(sTempName); //赋值。由于中文是GBK码，所以需要转为Unicode码，否则会出乱码

	//方法1
	//---------------------------------重点-----------------------------------------------
	//QString转char*
	//QByteArray ba2;
	//ba2 = qsName.toLatin1();
	//const char* szName = ba2.data();  //先将QString转为const char* 字符串，再进行Unicode转换

	char szName[50]={0};
	sprintf(szName,"%s",qsName.toStdString().c_str());
	sName = QTextCodec::codecForName("GBK")->toUnicode(szName); //GBK码 --> Unicode码
	//------------------------------------------------------------------------------------
	//显示内容
	ui.labName->setText(sName);

	//方法2
	char szNumber[50]={0};
	sprintf(szNumber,"%d个",count);
	ui.labNumber->setText(G2U(szNumber)); //GBK码 --> Unicode码

	//备注
	char * szTempRemark = "请爱护";
	sRemark = QTextCodec::codecForName("GBK")->toUnicode(szTempRemark);  //直接用中文

	ui.labRemark->setText(sRemark);
}

CNZH::~CNZH()
{

}
