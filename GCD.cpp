// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int ll;


int main()
{int  p=0,x=0,le;
//ll  y,x,*res;

cin>>p>>x;
if(x>p)
swap(x,p);


for (int i = x ; i > 0; i--)
if (p%i==0&&x%i==0)
{cout<<i;break;}


   return 0;
}
