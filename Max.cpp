// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int lli; 
int main()
{int y;
cin>>y;
lli ma=0,in=0;
for (int i = 0; i < y; i++)
{ cin>>in;
    ma=max(ma,in);
    
}

cout<<ma;
    return 0;
}
