// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int ll;


int main()
{int  p=0;
//ll  y,x,*res;

cin>>p;
//res=new ll [p];

for(size_t i = 1; i <= p; i++)
if(p%i==0)
cout<<i<<endl;


   return 0;
}
