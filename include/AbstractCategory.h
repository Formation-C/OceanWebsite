#ifndef ABSTRACTCATEGORY_H
#define ABSTRACTCATEGORY_H

#include <iostream>

using namespace std;

class AbstractCategory
{
    public:
        AbstractCategory();
        virtual ~AbstractCategory();

        string Getname() { return name; }
        void Setname(string val) { name = val; }

    protected:

    private:
        string name;
};

#endif // ABSTRACTCATEGORY_H
