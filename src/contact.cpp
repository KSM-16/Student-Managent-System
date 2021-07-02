#include "contact.h"

contact::contact()
{
    //ctor
}
contact::contact(string e,string p)
{
    email=new string;
//    email=e;
    phn=new string;
//    phn=p;
}
void contact::show()
{
    cout<<"Email : "<<email<<endl<<"Phone no : "<<phn<<endl;
}
contact::~contact()
{
    //delete email,phn;
    //dtor
}
