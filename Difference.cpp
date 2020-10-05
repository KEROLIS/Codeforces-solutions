// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;


int main(){
    long long  int B=0,A=0,C=0,D=0;
    cin>>A>>B>>C>>D;
    while(cin.fail())
    {cin.clear();
    cin.ignore(10000);
    cin>>A>>B>>C>>D;
    }
     cout<<"Difference = "<< (A * B) - (C * D);
    return 0;
}

