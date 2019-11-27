#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"

class Member : public User
{
    public:
        Member();
        virtual ~Member();

        unsigned int Getrole() { return role; }
        void Setrole(unsigned int val) { role = val; }
        string Getavatar() { return avatar; }
        void Setavatar(string val) { avatar = val; }
        void Setpassword(string val) { password = val; }

    protected:

    private:
        unsigned int role;
        string avatar;
        string password;
};

#endif // MEMBER_H
