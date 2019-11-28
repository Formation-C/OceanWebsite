#ifndef POST_H
#define POST_H

#include <iostream>
#include <vector>

class Thread;
#include "Thread.h"

class Post
{
    public:
        Post(Thread *_thread, string _content);
        virtual ~Post();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string GetauthorName() { return authorName; }
        void SetauthorName(string val) { authorName = val; }
        string Getcontent() { return content; }
        void Setcontent(string val) { content = val; }
        string Getdate() { return date; }
        void Setdate(string val) { date = val; }
        Thread* Getthread() { return thread; }
        void SetThread(Thread* val) { thread = val; }

        static vector<Post*> objects;

    protected:

    private:
        unsigned int id;
        Thread *thread;
        string content;
        string date;
        string authorName;
};

#endif // POST_H
