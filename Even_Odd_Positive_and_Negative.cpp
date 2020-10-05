// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;

int main()
{
int y=0,even=0, odd=0,pos=0,ne=0;
long long int x;
cin>>y;


for(int i=0; i < y; i++)
{
cin>>x;    

if (x%2==0) 
even++;
else
odd++;
if (x>0)
pos++; 
else if (x<0)
ne++;
}
cout<<"Even: "<<even<<"\nOdd: "<<odd<<"\nPositive: "<<pos<<"\nNegative: "<<ne;


  


    return 0;
}
