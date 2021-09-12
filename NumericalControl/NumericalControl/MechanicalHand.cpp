#include "StdAfx.h"
#include "mechanicalhand.h"

//MechanicalHand::MechanicalHand(QObject *parent)
//	: QObject(parent)
//{
//
//}

MechanicalHand::MechanicalHand()
{

}

MechanicalHand::~MechanicalHand()
{

}

//Start Thread
void MechanicalHand::doStart(const QString &)
{
   start(); //Start Qt Thread
}

//Qt Loop Function
void MechanicalHand::run()
{
	m_isCanRun = true;

	while(1)
	{
		sleep(1);
		qDebug("Hand Working ...");

		{
			QMutexLocker locker(&m_lock);
			if(!m_isCanRun) //Checking Stop value
			{
				break;  //Break Loop
			}
		}

	};

	qDebug("Hand Working Stop");
}

//Start Thread
void MechanicalHand::doStop()
{
	QMutexLocker locker(&m_lock);
	m_isCanRun = false; //Ctrl Thread Stop
}

