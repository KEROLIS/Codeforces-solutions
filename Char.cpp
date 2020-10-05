// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(){
char a;
cin>>a;
if (a>='A' && a<='Z')
    {a=a+32;
    cout<<a;}
    else 
    {a-=32;
    cout<<a;}
    return 0;
}

