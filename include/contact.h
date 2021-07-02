#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include<string>
using namespace std;

class contact
{
    public:
        contact();
        contact(string e,string p);
        void show();
        virtual ~contact();

    protected:
        string *email,*phn;
};

#endif // CONTACT_H
