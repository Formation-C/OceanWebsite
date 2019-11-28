#include <iostream>
#include <algorithm> // include for_each
#include "Thread.h"
#include "Post.h"

using namespace std;

void displayThreadTitle(Thread* thread)
{
    cout << thread->Gettitle() << endl;
}

void displayPost(Post* post)
{
    cout << "In " << post->GetThread()->Gettitle() << ", " << post->Getcontent() << endl;
}


int main()
{
    new Thread("Thread 1");
    new Thread("Thread 2");
    new Thread("Thread 3");

    new Post(Thread::allThreads[0], "Post 1 du Thread 1");
    new Post(Thread::allThreads[0], "Post 2 du Thread 1");
    new Post(Thread::allThreads[1], "Post 1 du Thread 2");
    new Post(Thread::allThreads[1], "Post 2 du Thread 2");
    new Post(Thread::allThreads[1], "Post 3 du Thread 2");
    new Post(Thread::allThreads[1], "Post 4 du Thread 2");
    new Post(Thread::allThreads[2], "Post 1 du Thread 3");
    new Post(Thread::allThreads[2], "Post 2 du Thread 3");
    new Post(Thread::allThreads[2], "Post 3 du Thread 3");

    //for_each(Thread::allThreads.begin(), Thread::allThreads.end(), displayThreadTitle);

    //for_each(Post::allPosts.begin(), Post::allPosts.end(), displayPost);
    vector<Post*>::iterator iter, iter_end;
    for (iter = Post::allPosts.begin(), iter_end = Post::allPosts.end(); iter != iter_end; ++iter)
    {
        Post *post = *iter;
        if(post->GetThread() != Thread::allThreads[1] )
        {
            displayPost(post);
        }
    }

    vector<Post*> postsList = Thread::allThreads[1]->Getposts();
    for_each(postsList.begin(), postsList.end(), displayPost);

    return 0;
}
