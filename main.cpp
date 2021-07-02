#include"menu.h"
vector<student>st;
int id;
#define pb push_back
int main()
{
    ifstream fin("in.txt");
    string line,nm,y,tr,rl,ph,cg,ad,ml;
    double c;
    while(getline(fin,line))
    {
        id++;
        getline(fin,rl);
        // cout<<rl<<endl;
        getline(fin,nm);
        // cout<<nm<<endl;
        getline(fin,y);
        // cout<<y<<endl;
        getline(fin,tr);
        cout<<tr<<endl;
        getline(fin,cg);
        stringstream sin(cg);
        sin>>c;
        //  cout<<"c"<<c<<endl;
        getline(fin,ml);
        //  cout<<ml<<endl;
        getline(fin,ph);
        //  cout<<ph<<endl;
        student A(ml,ph,rl,nm,y,tr,c);
        st.pb(A);
        // A.show();
    }
    fin.close();
    sort(st.begin(),st.end(),cmp);
    menu();
    return 0;
}
