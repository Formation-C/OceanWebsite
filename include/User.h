#ifndef USER_H
#define USER_H

#include <iostream>
#include "Event.h"

using namespace std;

class User
{
    public:
        User();
        virtual ~User();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }

        void getEvents(Event *_event);
        void subscribeEvent(const Event& _event);
        void unsubscribeEvent(const Event& _event);
        bool isSubscribed(const Event& _event);

    protected:

    private:
        unsigned int id;
        string email;
        string name;
};

#endif // USER_H
