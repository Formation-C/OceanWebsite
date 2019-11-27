#include "Thread.h"

Thread::Thread(string _title) : title(_title)
{
    allThreads.push_back(this);
    //ctor
}

Thread::~Thread()
{
    //dtor
}

vector<Thread*> Thread::allThreads;
