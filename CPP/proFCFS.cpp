#include "ProFCFS.h"


ProFCFS::ProFCFS(scheduler* p) :processor(p)
{
	timer = 0;
}

ProFCFS::~ProFCFS()
{}

int ProFCFS::gettimer() const
{}

bool ProFCFS::ScheduleAlgo()
{}

void ProFCFS::forkingrequest(int AT, int RT)
{}

void ProFCFS::inctimer()
{}

void ProFCFS::dectimer()
{}

