#include "Post.h"


Post::Post(Thread *_thread, string _content):
    thread(_thread), content(_content)
{
    allPosts.push_back(this);

    //ctor
}

Post::~Post()
{
    //dtor
}

vector<Post*> Post::allPosts;
