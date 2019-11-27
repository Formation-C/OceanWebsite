#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include "Post.h"

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

        void getPosts(Post* _posts);
        bool hasPost(const Post& _post);
        void sendPost(const Post& _post);
        void removePost(Post* _post);
        void removeThread(Post* _Thread);
        void setMemberRole(Member *_member, unsigned int role);
    protected:

    private:
        unsigned int role;
        string avatar;
        string password;
};

#endif // MEMBER_H
