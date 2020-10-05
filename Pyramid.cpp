// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O
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
for (size_t i = 1; i <= y; i++)
{
for (size_t j = 1; j <= i; j++)    
cout<<"*";
cout<<endl;

}   

   return 0;
}
