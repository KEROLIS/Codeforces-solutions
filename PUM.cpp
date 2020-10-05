// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V
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
    int n, j = 0,l=1;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (int j=l, w=0; w < 3; w++,j++)
            {cout << j << " ";
            l=j;}

        cout << "PUM" << endl;
    l+=2;
    }


    return 0;
}
