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

vector<Post*> Thread::Getposts(void)
{
    vector<Post*> result;

    vector<Post*>::iterator iter, iter_end;
    for(iter=Post::allPosts.begin(), iter_end=Post::allPosts.end(); iter!=iter_end; ++iter)
    {
        Post* post = *iter;
        if(post->GetThread() == this)
        {
            result.push_back(post);
        }
    }

    return result;
}

vector<Thread*> Thread::allThreads;
