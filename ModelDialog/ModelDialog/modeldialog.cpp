#include "modeldialog.h"
#include "DemoDialog.h"

ModelDialog::ModelDialog(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

 }

ModelDialog::~ModelDialog()
{

}

void ModelDialog::OnShowDialog()
{
	DemoDialog dlgDemo(this);
	dlgDemo.exec();  //�ص㣬����ģʽ��ʾ�Ի���.show��������ʾ�Ի���

	//dlgDemo.show();  //��������ʾ�����ﲻҪʹ��

}
