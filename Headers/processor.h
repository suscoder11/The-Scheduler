#include <iostream>
#include "process.h"
using namespace std;


#pragma once
class processor
{
protected:
	Scheduler* pS;
	int timer; // a sum for all CTs in the processor's rdy list
	bool flag; // a flag to determine whether the processor is IDLE(=1) or BUSY(=0)
	int RUNLIST[1]; 

public:
	processor(Scheduler* p) { pS = p };
	virtual ~processor() {};
	virtual bool ScheduleAlgo() = 0;
	virtual int gettimer() const {};
	virtual void inctimer() = 0;
	virtual void dectimer() = 0;
	virtual void add_process(process p) = 0;











};

