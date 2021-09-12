#ifndef INOUTMONITOR_H
#define INOUTMONITOR_H

#include <QObject>

class InoutMonitor : public QThread //QObject
{
	Q_OBJECT

public:
	//InoutMonitor(QObject *parent);
	InoutMonitor();

	~InoutMonitor();

public slots:
	void recvDoorStatus(bool status);

private:
	bool isDoorOpen;

	virtual void run() override;

public:
	void doStart();
	void doStop();

private:
	QMutex m_lock;
	bool m_isCanRun;

};

#endif // INOUTMONITOR_H
