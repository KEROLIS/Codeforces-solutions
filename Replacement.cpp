// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
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
typedef vector<pair<int, int>> vii;
typedef pair<int, int> ii;
typedef vector<int>::iterator intIt;

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
    int x, z;
    cin >> x;
    vector<int> valdez;

    for (size_t i = 0; i < x; i++)
    {
        cin >> z;
        valdez.insert(valdez.begin() + i, z);
    }
    replace_if(all(valdez), isPost, 1);
    replace_if(all(valdez), isNeg, 2);
    for(intIt i=valdez.begin();i<valdez.end();i++)
    cout<<*i<<" ";

    return 0;
}

