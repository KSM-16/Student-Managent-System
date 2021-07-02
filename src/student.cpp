#include "student.h"
#include <bits/stdc++.h>
using namespace std;
student::student()
{
    //ctor
}
student::student(string e,string p,string r,string n,string y,string t,double c):contact(e,p)
{
    //this->email=e,this->phn=p;
    //this->roll=r,this->year=y,this->cg=c,this->name=n,this->term=t;
    roll=new string;
    *roll=r;
   // email=new string;
    *email=e;
   // phn=new string;
    *phn=p;
    cg=new double;
    *cg=c;
    year=new string;
    *year=y;
    term=new string;
    *term=t;
    name=new string;
    *name=n;
}
istream& operator>>(istream& cin,student &s)
{
    string t;
    cout<<"Name : ";
    cin>>t;
    s.stname(t);
    cout<<"Roll : ";
    cin>>t;
    s.stroll(t);
    cout<<"Year : ";
    cin>>t;
    s.styear(t);
    cout<<"Term : ";
    cin>>t;
    s.stterm(t);
    cout<<"CGPA : ";
    double d;
    cin>>d;
    s.stcg(d);
    cout<<"Email : ";
    getline(cin,t);
    getline(cin,t);
    s.steml(t);
X:
    cout<<"Phone no : ";
    cin>>t;
    if(t.size()!=11)
    {
        cout<<"Try Again!"<<endl;
        goto X;
    }
    else s.stphn(t);
    return cin;
}
ostream& operator<<(ostream& out,student &s)
{
    out<<"1.Roll : "<<s.gtroll()<<endl;
    out<<"2.Name : "<<s.gtname()<<endl;
    out<<"3.Year : "<<s.gtyear()<<endl;
    out<<"4.Term : "<<s.gtterm()<<endl;
    out<<"5.CGPA : ";
    out << std::fixed;
    out << std::setprecision(2)<<s.gtcg()<<endl;
    out<<"6.Email : "<<s.gteml()<<endl;
    out<<"7.Phone no : "<<s.gtphn()<<endl;
    out<<endl;
    return out;
}
void student::show()
{
    cout<<" Roll : "<<gtroll()<<endl;
    cout<<" Name : "<<gtname()<<endl;
    cout<<" Year : "<<gtyear()<<endl;
    cout<<" Term : "<<gtterm()<<endl;
    cout<<" CGPA : ";
    cout << std::fixed;
    cout << std::setprecision(2)<<gtcg()<<endl;
    cout<<" Email : "<<gteml()<<endl;
    cout<<" Phone no : "<<gtphn()<<endl;
}
bool cmp(student a,student b)
{
    return (a.gtroll()<b.gtroll());
}
/*student::student(student &s)
{
    *roll=s.gtroll();
    *name=s.gtname();
    *year=s.gtyear();
    *term=s.gtterm();
    *cg=s.gtcg();
    *email=s.gteml();
    *phn=s.gtphn();
}*/
void student::stroll(string r)
{
    roll=new string;
    *roll=r;
}
void student::stname(string r)
{
    name=new string;
    *name=r;
}
void student::styear(string r)
{
    year=new string;
    *year=r;
}
void student::stterm(string r)
{
    term=new string;
    *term=r;
}
void student::steml(string r)
{
    email=new string;
    *email=r;
}
void student::stphn(string r)
{
    phn=new string;
    *phn=r;
}
void student::stcg(double c)
{
    cg=new double;
    *cg=c;
}
string student::gtroll()
{
    string t;
    return t=*roll;
}
string student::gtname()
{
    string t;
    return t=*name;
}
string student::gtyear()
{
    string t;
    return t=*year;
}
string student::gtterm()
{
    string t;
    return t=*term;
}
string student::gteml()
{
    string t;
    return t=*email;
}
string student::gtphn()
{
    string t;
    return t=*phn;
}
double student::gtcg()
{
    double d;
    return d=*cg;
}
student& student::operator=(student b)
{
    *name=b.gtname();
    *roll=b.gtroll();
    *email=b.gteml();
    *phn=b.gtphn();
    *year=b.gtyear();
    *cg=b.gtcg();
    *term=b.gtterm();
    return *this;
}
student::~student()
{
    //delete name,year,term,cg,roll;
    //dtor
}
