#ifndef EVENT_H
#define EVENT_H

#include <iostream>
using namespace std;

class Event
{
    public:
        Event();
        virtual ~Event();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getdescription() { return description; }
        void Setdescription(string val) { description = val; }
        string GeteventDate() { return eventDate; }
        void SeteventDate(string val) { eventDate = val; }

    protected:

    private:
        unsigned int id;
        string name;
        string description;
        string eventDate;
};

#endif // EVENT_H
