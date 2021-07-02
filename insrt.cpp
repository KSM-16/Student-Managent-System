#include "insrt.h"
using namespace std;
#include<algorithm>
#define pb push_back
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
    }
    else if(g==2) menu();
    else exit(0);
}
void dlt()
{
    int v=fnd(),u;
    if(v<0)
    {
        cout<<"1.Main Menu\n2\Exit\nOption : ";
        cin>>u;
        if(u==1) menu();
        else exit(0);
    }
    else
    {
        for(int i=v; i<id-1; i++)
        {
            st[i]=st[i+1];
        }
        id--;
        st.erase(st.begin()+id);
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
        }
        else if(g==2) menu();
        else exit(0);
    }
}
