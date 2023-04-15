#include"processor.h"
#pragma once
class ProSJB : public processor
{
private:
	MinHeap Plist;

public:

	ProSJB(scheduler* p);

	virtual ~ProSJB();

	virtual  int gettimer() const override;
	virtual bool ScheduleAlgo() override;

	virtual void inctimer() override;
	virtual void dectimer() override;





};
