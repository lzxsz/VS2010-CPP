#include "StdAfx.h"
#include "inoutmonitor.h"

//InoutMonitor::InoutMonitor(QObject *parent)
//	: QObject(parent)
//{
//
//}


InoutMonitor::InoutMonitor()
{

}

InoutMonitor::~InoutMonitor()
{

}

//Start Thread
void InoutMonitor::doStart()
{
	start(); //Start Qt Thread
}

//Qt Loop Function
void InoutMonitor::run()
{
	m_isCanRun = true;

	while(1)
	{
		sleep(1);

		if( isDoorOpen == true)
		{
		    qDebug("Door is Opened!");
		}
		else
		{
		  qDebug("Checking Door (Closed)");
		}

		{
			QMutexLocker locker(&m_lock);
			if(!m_isCanRun) //Checking Stop value
			{
				break;  //Break Loop
			}
		}

	};
}

//Start Thread
void InoutMonitor::doStop()
{
	QMutexLocker locker(&m_lock);
	m_isCanRun = false; //Ctrl Thread Stop
}

void InoutMonitor::recvDoorStatus(bool status)
{
    isDoorOpen = status;
}