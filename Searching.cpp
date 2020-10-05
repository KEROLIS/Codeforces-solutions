//  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
#include <functional>
#include <utility>
#include <numeric>
#include <set>
#include <map>
#include <list>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <valarray>

using namespace std;
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define loop(i, from, to) for (int i = from; i <= to; i++)
#define loopr(i, from, to) for (int i = from; i >= to; i--)
#define pb(x) push_back(x)
#define mkpr(x, y) make_pair(x, y)

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
//typedef vector<pair<int, int> vii;
typedef pair<int, int> ii;
typedef vector<ll>::iterator intIt;

bool isPost(int n)
{
    return n > 0;
}
bool isNeg(int n) { return n < 0; }
void dance()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    dance();
    ll *x, z, mini = 0;

    cin >> z;
    x = new ll[z];
    for (int i = 0; i < z; i++)
        cin >> x[i];

    cin >> mini;
    for (int i = 0; i < z; i++)
        if (mini == x[i])
           { cout << i;return 0;}
            
            cout<<-1;
    return 0;
}
