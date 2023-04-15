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

int ProFCFS::forkingrequest(int AT)
{}

void ProFCFS::inctimer()
{}

void ProFCFS::dectimer()
{}

