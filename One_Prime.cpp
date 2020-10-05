// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
typedef long long int ll;
bool isprime4(ll n) {	// O( sqrt(n)
    if(n == 2) 				return true;

    if(n < 2 || n%2 == 0) 	return false;


    for(ll i=3; i*i <= n; i+=2)
    {
    	if(n%i == 0)
    		return false;
    }
    return true;
}

int main()
{ll p=0;
cin>>p;
if(isprime4(p))
cout<<"YES";
else
cout<<"NO";

   return 0;
}
