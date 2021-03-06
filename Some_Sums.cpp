// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
#include <bits/stdc++.h>
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
typedef vector<ll> vl;
typedef vector<ll>::iterator lIt;
typedef vector<int>::iterator it;

void dance()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void eraseChar(string &str, char ch)
{
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            str.erase(i, 1);
            i--;
            continue;
        }
    }
}
void eraseWord(string &str, string word)
{
    int n;
    if (strstr(str.c_str(), word.c_str()))
    {
        n = str.find(word);
        str.erase(n, word.length());
    }
}
ll fact(ll x)
{
    unsigned int n;
    unsigned long long factorial = 1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }
    return factorial;
}
bool isprime4(ll n)
{
    if (n == 2)
        return true;

    if (n < 2 || n % 2 == 0)
        return false;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isSqr(int num)
{

    if (num < 0)
        return false;

    for (int i = 0; i * i <= num; i++)
    {
        if (i * i == num)
        {
            return true;
        }
    }
    return false;
}
bool printNumber(int n) // for n > 0
{                       // 1234567
    // cout << n %10  << endl;
    if (n)
    {
        printNumber(n / 10); // 214/10 = 21
        cout << n % 10 << " ";
        // 214%10 = 4
    }
    return 1;
}
vector<ll> factorization(ll n) //   max n is 1e12
{                              //  O( sqrt(n) )

    vector<ll> primes;

    for (ll i = 2; i * i <= n; ++i) //Improve start by i = 3.
        while (n % i == 0)
            primes.push_back(i), n = i; // Get every prime inside n.  n  i^j  is a new number

    //  Two ways to prove that n will be prime number if n  1
    //  1) Think in n  pi^x as a NEW sub-problem. If we went to its sqrt and % applied, then we are facing a prime number
    //  2) Prove that, for any n either all its primes before sqrt(n), or only the biggest prime after sqrt(n).
    if (n > 1)
        primes.push_back(n);

    return primes;
}

bool isDistinc(int n)
{
    int last[4];
    for (size_t i = 0; i < 4; i++)
    {
        last[i] = n % 10;
        n = n / 10;
    }
    sort(last, last + 4);
    for (size_t i = 0; i < 3; i++)

        if (last[i] == last[i + 1])
        { //cout<<last[i]<<" "<<last[i+1]<<" ";
            return 1;
        }
    return 0;
}
void printVec(vector<int> v2)
{

    for (int i = 0; i < (int)v2.size(); ++i)
        cout << v2[i] << " ";
}
bool isEve(vi v)
{
    for (int i = 0; i < (int)v.size(); ++i)
        if (v[i] % 2 == 1)
            return 0;
    return 1;
}
ll su(ll num)
{
    ll sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}
int main()
{
    dance();
    ll range, x, y, sum = 0;
    cin >> range >> x >> y;
    vi r(36);
    for (size_t i = x, j = 0; i <= y; j++, i++)
    {
        r[j] = i;
    }
    r.resize(y-x+1);
    
    for (ll i = 0; i <= range; i++)
    {
        if (binary_search( all(r) , su(i)))
            sum += i;
    }
    cout << sum;
    return 0;
}
