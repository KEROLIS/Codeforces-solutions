// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
    long long  int B=0,day=0,month=0;
     cin>>B;
     while(cin.fail())
    {cin.clear();
    cin.ignore(10000);
    cin>>B;
    }
    day=(B%365)%30;
    B-=day;
    month=B%365/30;
        B-=month;
    cout<<B/365 <<" years\n";
    cout<<month<<" months\n";
    cout<<day<<" days";


    return 0;
}

