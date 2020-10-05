// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{int count;
cin>>count ;
if(count>1)
for(int i=1; i <= count; i++)
{
    if(i%2==0)
cout<<i<<"\n";
}
else
cout<<-1;

    return 0;
}
