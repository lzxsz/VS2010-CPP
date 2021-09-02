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
	QString sTempName("����");

	QString sName;
	QString sNumber;
	QString sRemark;

	//����
	QString qsName = QString("%1").arg(sTempName); //��ֵ������������GBK�룬������ҪתΪUnicode�룬����������

	//����1
	//---------------------------------�ص�-----------------------------------------------
	//QStringתchar*
	//QByteArray ba2;
	//ba2 = qsName.toLatin1();
	//const char* szName = ba2.data();  //�Ƚ�QStringתΪconst char* �ַ������ٽ���Unicodeת��

	char szName[50]={0};
	sprintf(szName,"%s",qsName.toStdString().c_str());
	sName = QTextCodec::codecForName("GBK")->toUnicode(szName); //GBK�� --> Unicode��
	//------------------------------------------------------------------------------------
	//��ʾ����
	ui.labName->setText(sName);

	//����2
	char szNumber[50]={0};
	sprintf(szNumber,"%d��",count);
	ui.labNumber->setText(G2U(szNumber)); //GBK�� --> Unicode��

	//��ע
	char * szTempRemark = "�밮��";
	sRemark = QTextCodec::codecForName("GBK")->toUnicode(szTempRemark);  //ֱ��������

	ui.labRemark->setText(sRemark);
}

CNZH::~CNZH()
{

}
