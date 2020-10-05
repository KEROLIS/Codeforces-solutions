// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int lli; 
lli factorial(lli n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}
int main()
{int x=0;
lli *y;
   cin>>x;
y=new long long int [x];
for (size_t i = 0; i <x; i++)
{
    cin>>y[i];
    
}
   for (size_t i = 0; i <x; i++)
cout<<factorial(y[i])<<endl;
   


   return 0;
}
