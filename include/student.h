#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
#include "contact.h"
class student:private contact
{
public:
    string *roll,*name;
    student();
    student(string e,string p,string r,string n,string y,string t,double c);//:contact(e,p,a);
    void show();
    void stroll(string r);
    void stname(string r);
    void styear(string r);
    void stterm(string r);
    void stcg(double c);
    void stphn(string r);
    void steml(string r);
    friend istream& operator>>(istream& cin,student &s);
    friend ostream& operator<<(ostream& out,student &s);
    string gtroll();
    string gtname();
    string gtyear();
    string gtterm();
    string gteml();
    string gtphn();
    double gtcg();
//    student(student &s);
    student& operator=(student b);
    virtual ~student();

protected:

private:
    string *year,*term;
    double *cg;
};
bool cmp(student a,student b);
#endif // STUDENT_H
