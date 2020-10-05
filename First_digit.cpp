// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
    long long  int B=0;
     cin>>B;
     while(cin.fail())
    {cin.clear();
    cin.ignore(10000);
    cin>>B;
    }
    
   if( ((B-(B%1000))/1000)%2==0)
    cout<<"EVEN";
    else
    cout<<"ODD";
    return 0;
}

