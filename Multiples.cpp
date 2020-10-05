// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;


int main(){
    long long  int B=0,A=0;
    cin>>A>>B;
    if(B>A)
    swap(A,B);
  if (A%B==0)
  cout<<"Multiples";
  else
  cout<<"No Multiples";

    return 0;
}

