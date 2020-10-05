// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{

    int x[3],y[3];
    for (int i = 0; i < 3; i++)
        {cin >> x[i];
        y[i]=x[i];}

     sort(x,x+3);
    for (int i = 0; i < 3; i++)
        cout << x[i]<<"\n";
        for (int i = 0; i < 3; i++)
        cout <<"\n"<< y[i];

    return 0;
}

