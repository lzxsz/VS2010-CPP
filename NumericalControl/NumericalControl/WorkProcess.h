#ifndef WORKPROCESS_H
#define WORKPROCESS_H

#include <QObject.h>
#include <QThread.h>

#include "MechanicalHand.h"
#include "InoutMonitor.h"

class WorkProcess : public QObject
{
	Q_OBJECT

public:
	WorkProcess(QObject *parent);
	~WorkProcess();

private:
	MechanicalHand* pMechanicalHand;
	InoutMonitor* pInoutMonitor;


public:
	void StartMechanicalHand(const QString & param);
	void StopMechanicalHand();

	void setDoorStatus(bool status);

signals:
	void doStartMechanicalHand(const QString &);
	void doStopMechanicalHand();

	void sendDoorStatus(bool);

public slots:

};

#endif // WORKPROCESS_H
