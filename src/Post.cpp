#include "Post.h"


Post::Post(Thread *_thread, string _content):
    thread(_thread), content(_content)
{
    objects.push_back(this);
    //ctor
}

Post::~Post()
{
    //dtor
}

vector<Post*> Post::objects;
