#ifndef MECHANICALHAND_H
#define MECHANICALHAND_H

#include <QObject>

class MechanicalHand : public QThread //QObject
{
	Q_OBJECT

public:
	//MechanicalHand(QObject *parent);
	MechanicalHand();

	~MechanicalHand();

	virtual void run() override;

public:
	void doStart(const QString &);
	void doStop();

private:
	QMutex m_lock;
	bool m_isCanRun;

};

#endif // MECHANICALHAND_H
