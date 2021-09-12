#include "StdAfx.h"
#include "workprocess.h"

WorkProcess::WorkProcess(QObject *parent)
	: QObject(parent)
{
	pMechanicalHand = new MechanicalHand();

	pInoutMonitor = new InoutMonitor();
	connect(this,SIGNAL(sendDoorStatus(bool)),pInoutMonitor,SLOT(recvDoorStatus(bool)));

	pInoutMonitor->doStart();

}

WorkProcess::~WorkProcess()
{
}

//Start Mechanical Hand Thread
void WorkProcess::StartMechanicalHand(const QString & param)
{
	if (pMechanicalHand->isRunning())
	{
		qDebug("isRunning -> True");
		return;
	}

	pMechanicalHand->doStart("123456");
}

//Stop Mechanical Hand Thread
void WorkProcess::StopMechanicalHand()
{
	pMechanicalHand->doStop();
}


//Stop Mechanical Hand Thread
void WorkProcess::setDoorStatus(bool status)
{
	emit sendDoorStatus(status);

}