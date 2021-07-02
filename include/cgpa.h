#ifndef CGPA_H
#define CGPA_H

#include <bits/stdc++.h>
using namespace std;
class cgpa
{
    public:
        string roll;
        cgpa();
        virtual ~cgpa();

    protected:
        int mark[10];
        double cg,grade[10];
};

#endif // CGPA_H
