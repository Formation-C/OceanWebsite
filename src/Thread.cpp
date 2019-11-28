#include "Thread.h"
#include "Template.h"

Thread::Thread(string _title) : title(_title)
{
    objects.push_back(this);
    //ctor
}

Thread::~Thread()
{
    //dtor
}

vector<Post*> Thread::getPosts(void)
{
//    vector<Post*> result;
//    vector<Post*>::iterator iter, iter_end;
//    for(iter=Post::allPosts.begin(), iter_end=Post::allPosts.end(); iter!=iter_end; ++iter)
//    {
//        Post* post = *iter;
//        if(post->GetThread() == this)
//        {
//            result.push_back(post);
//        }
//    }
//    return result;

    return Templates::Filterobjects<Post>(
        // Fonction lambda
        // Commence toujours par [] pour capturer cette valeur
        // Ensuite les paramètres de la fonction entre ()
        // Puis le contenu de la fonction entre {}
        [this](Post* object) {return object->Getthread()==this;}
        );
}

vector<Thread*> Thread::objects;
