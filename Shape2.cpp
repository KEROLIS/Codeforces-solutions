// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
typedef long long int ll;

void dance()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    dance();

    int x;
    cin >> x;
for (size_t i = 0; i < x; i++)
{for (size_t j = 0; j < x-i-1; j++)
cout<<" ";

for(size_t k = 0; k < i+1; k++)
cout<<"*";    

for(size_t k = 0; k < i; k++)
cout<<"*";    
    

cout<<endl;
}
    return 0;
}
//    *
//   ***
//  *****
// *******
