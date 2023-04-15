#include "processor.h"
#include "LinkedList.h"
#pragma once
class ProFCFS : public processor
{
private:
	LinkedList Plist;

public:

	ProFCFS(scheduler* p);

	virtual ~ProFCFS();

	virtual  int gettimer() const override;

	virtual bool ScheduleAlgo() override;

	void  forkingrequest(int AT, int RT);

	virtual void inctimer() override;
	virtual void dectimer() override;





};

