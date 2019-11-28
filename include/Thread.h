#ifndef THREAD_H
#define THREAD_H

#include <vector>
#include "ThreadCategory.h"

// forward declaration
// include is at the end of the file
class Post;
#include "Post.h"

using namespace Thread_Namespace;

class Thread
{
    public:
        Thread(string _title);
        virtual ~Thread();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string Gettitle() { return title; }
        void Settitle(string val) { title = val; }
        bool Getlocked() { return locked; }
        void Setlocked(bool val) { locked = val; }
        string GetcreatorName() { return creatorName; }
        void SetcreatorName(string val) { creatorName = val; }
        Category* Getcategory() { return category; }
        void Setcategory(Category* val) { category = val; }

        vector<Post*> Getposts(void);
        static vector<Thread*> allThreads;
    protected:

    private:
        unsigned int id;
        string title;
        bool locked;
        string creatorName;
        Category* category;

};

#endif // THREAD_H
