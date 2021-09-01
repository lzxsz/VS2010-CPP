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
	dlgDemo.exec();  //重点，阻塞模式显示对话框.show是阻塞显示对话框

	//dlgDemo.show();  //非阻塞显示，这里不要使用

}
