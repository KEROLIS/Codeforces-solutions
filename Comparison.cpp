 // https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V 

#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(){

   
     long long  int  x=0,y=0;
     char c;
    cin>>x>>c>>y;
    if (x>y&&c=='>')
    cout<<"Right";
    else if (x==y&&c=='=')
    cout<<"Right";
    else if (x<y&&c=='<')
        cout<<"Right";
    else
    cout<<"Wrong";



    return 0;
}


