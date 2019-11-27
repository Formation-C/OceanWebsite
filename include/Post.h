#ifndef POST_H
#define POST_H

#include <iostream>
#include "Thread.h"

class Post
{
    public:
        Post();
        virtual ~Post();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string GetauthorName() { return authorName; }
        void SetauthorName(string val) { authorName = val; }
        string Getcontent() { return content; }
        void Setcontent(string val) { content = val; }
        string Getdate() { return date; }
        void Setdate(string val) { date = val; }
        Thread GetThread() { return *thread; }
        void SetThread(Thread val) { *thread = val; }

    protected:

    private:
        unsigned int id;
        string authorName;
        string content;
        string date;
        Thread *thread;
};

#endif // POST_H
