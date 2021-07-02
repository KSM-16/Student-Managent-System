#include <bits/stdc++.h>
using namespace std;
#include "main.h"
void serch()
{
    string x;
    cout<<"Enter Roll :";
    cin>>x;
    int o=0;
    //  char *p=x;
    for(int i=0; i<id; i++)
    {
        // char *q=st[i].gtroll();
        // if(strncmp(p,q,l))
        //if(strncmp(st[i].gtroll(),x,l)==0)
        if(x==st[i].gtroll())
        {
            o++;
            cout<<o<<". ";
            st[i].show();
        }
    }
    if(!o) cout<<"Not found!"<<endl;
    cout<<"1.Main Menu\n2\Exit\nOption : ";
    int u;
    cin>>u;
    if(u==1)
    {
        menu();
    }
    else exit(0);
}
int fnd()
{
    string n;
    cout<<"Enter Roll :";
    cin>>n;
    int f=0,i;
    for( i=0; i<id; i++)
    {
        if(n==st[i].gtroll())
        {
            f++;
            cout<<st[i];
            cout<<endl;
        }
    }
    if(f==0)
    {
        cout<<"Not found!"<<endl;
        return -1;
    }
    else return i;
}
void edit(int i)
{
    int g,u;
    string k;
H:
    cout<<"Which information do you want to edit?"<<endl;
    cin>>g;
    switch(g)
    {
    case 1:
        cout<<"Roll :";
        cin>>k;
        st[i].stroll(k);
        sort(st.begin(),st.end(),cmp);
        break;
    case 2:
        cout<<"Name :";
        cin>>k;
        st[i].stname(k);
        break;
    case 3:
        cout<<"Year :";
        cin>>k;
        st[i].styear(k);
        break;
    case 4:
        cout<<"Term :";
        cin>>k;
        st[i].stterm(k);
        break;
    case 5:
        cout<<"CGPA :";
        double d;
        cin>>d;
        st[i].stcg(d);
        break;
    case 6:
        cout<<"Email :";
        cin>>k;
        st[i].steml(k);
        break;
    case 7:
        cout<<"Phone no :";
        cin>>k;
        st[i].stphn(k);
        break;
    default:
        break;
    }
    cout<<"Edit more?\n1.Yes\n2.No\nOption : ";
    cin>>g;
    if(g==1) goto H;
    else
    {
        cout<<"1.Main Menu\n2\Exit\nOption : ";
        write();
        cin>>u;
        if(u==1)
        {
            menu();
        }
        else exit(0);
    }
}
void inf()
{
    int j=fnd(),u;
    if(j<0)
    {
        cout<<"1.Main Menu\n2\Exit\nOption : ";
        cin>>u;
        if(u==1) menu();
        else exit(0);
    }
    else edit(j);
}
