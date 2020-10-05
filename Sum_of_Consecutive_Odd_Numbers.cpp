// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int ll;


int main()
{int  p=0;
ll  y,x,*res;

cin>>p;
res=new ll [p];
for(int i=0;i<p;i++)
	{res[i]=0;
        cin>>y>>x;
    if(x>y)
    swap(x,y);
    if(y-x==0)
    continue;
    else
    for (size_t j = x+1; j < y; j++)
    {if(j%2!=0)
    res[i]+=j;
        
    }
    
 }
  for(size_t i = 0; i < p; i++)
        cout<<res[i]<<endl;

   return 0;
}
