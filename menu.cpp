#include "menu.h"
using namespace std;
extern vector<student>st;
extern int id;
#include<algorithm>
#define pb push_back
void insrt()
{
    student A;
    cin>>A;
    st.pb(A);
    id++;
    sort(st.begin(),st.end(),cmp);
    write();
    int g;
    cout<<"1.Show Updated List\n2.Main Menu\n3.Exit\nOption :";
    cin>>g;
    if(g==1)
    {
        for(int i=0; i<id; i++)
        {
            cout<<i+1<<"."<<endl;
            st[i].show();
        }
        cout<<"1.Main Menu\n2.Exit\nOption : ";
        int u;
        cin>>u;
        if(u==1)
        {
            menu();
        }
        else exit(0);
    }
    else if(g==2) menu();
    else exit(0);
}
void dlt()
{
    int v=fnd(),u;
    if(v<0)
    {
        cout<<"1.Main Menu\n2.Exit\nOption : ";
        cin>>u;
        if(u==1) menu();
        else exit(0);
    }
    else
    {
        /*for(int i=v; i<id-1; i++)
        {
            st[i]=st[i+1];
        }*/
        id--;
        st.erase(st.begin()+v);
        cout<<"This data is deleted."<<endl<<endl;
        write();
        int g;
        cout<<"1.Show Updated List\n2.Main Menu\n3.Exit\nOption :";
        cin>>g;
        if(g==1)
        {
            for(int i=0; i<id; i++)
            {
                cout<<i+1<<"."<<endl;
                st[i].show();
            }
            cout<<"1.Main Menu\n2.Exit\nOption : ";
            int u;
            cin>>u;
            if(u==1)
            {
                menu();
            }
            else exit(0);
        }
        else if(g==2) menu();
        else exit(0);
    }
}
void write()
{
    int i=0;
    ofstream fout("in.txt");
    for( ; i<id-1; i++)
    {
        fout<<i+1<<"."<<endl;
        fout<<st[i].gtroll()<<endl;
        fout<<st[i].gtname()<<endl;
        fout<<st[i].gtyear()<<endl;
        fout<<st[i].gtterm()<<endl;
        fout<<st[i].gtcg()<<endl;
        fout<<st[i].gteml()<<endl;
        fout<<st[i].gtphn()<<endl;
    }
    fout<<i+1<<"."<<endl;
    fout<<st[i].gtroll()<<endl;
    fout<<st[i].gtname()<<endl;
    fout<<st[i].gtyear()<<endl;
    fout<<st[i].gtterm()<<endl;
    fout << std::fixed;
    fout << std::setprecision(3)<<st[i].gtcg()<<endl;
    fout<<st[i].gteml()<<endl;
    fout<<st[i].gtphn();
    fout.close();
}
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
            cout<<o<<".";
            st[i].show();
        }
    }
    if(!o) cout<<"Not found!"<<endl;
    cout<<"1.Main Menu\n2.Exit\nOption : ";
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
           // cout<<endl;
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
        cout<<"1.Main Menu\n2.Exit\nOption : ";
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
        cout<<"1.Main Menu\n2.Exit\nOption : ";
        cin>>u;
        if(u==1) menu();
        else exit(0);
    }
    else edit(j);
}
 void display()
{
    for(int i=0; i<id; i++)
    {
        cout<<i+1<<".";
        st[i].show();
        cout<<endl;
    }
    cout<<"1.Main Menu\n2.Exit\nOption : ";
    int u;
    cin>>u;
    if(u==1)
    {
        menu();
    }
    else exit(0);
}
void menu()
{
    int t;
    system("@cls||clear");
    cout <<"********************************************"<<endl<<endl<<endl;
    cout<<"       2k16 STUDENT INFORMATION DESK"<<endl<<endl<<endl;
    cout <<"********************************************"<<endl;
    cout<<endl<<"\tMain Menu:"<<endl;
    cout<<"\t1.Search Student"<<endl;
    cout<<"\t2.Edit Information"<<endl;
    cout<<"\t3.Insert"<<endl;
    cout<<"\t4.Delete"<<endl;
    cout<<"\t5.Show Data"<<endl;
    cout<<"\t6.Exit"<<endl;
    cout<<"Option :";
    cin>>t;
    switch(t)
    {
    case 1:
        serch();
        break;
    case 2:
        inf();
        break;
    case 3:
        insrt();
        break;
    case 4:
        dlt();
        break;
    case 5:
        display();
        break;
    case 6:
        break;
    default:
        break;
    }
    return;
}
