#include "processor.h"
#pragma once
class ProRoundRobin : public processor
{
private:
	Queue Plist;
	int RTF; //a thershold to be used in migration functioanlity

public:

	ProRoundRobin(scheduler* p);

	virtual ~ProRoundRobin();

	virtual  int gettimer() const override;
	virtual bool ScheduleAlgo() override;

	virtual void inctimer() override;
	virtual void dectimer() override;





};
