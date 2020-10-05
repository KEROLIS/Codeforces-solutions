// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> ii;
typedef vector<ll> vl;
typedef vector<ll>::iterator lIt;
typedef vector<int>::iterator it;

#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define loop(i, from, to) for (int i = from; i <= to; i++)
#define loopr(i, from, to) for (int i = from; i >= to; i--)
#define pb(x) push_back(x)
#define mkpr(x, y) make_pair(x, y)

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
    for (int i = 0; i < (int)v2.size(); i++)
        cout << v2[i] << " ";
}
bool isEve(vi v)
{
    for (int i = 0; i < (int)v.size(); ++i)
        if (v[i] % 2 == 1)
            return 0;
    return 1;
}

/* Function to print three largest elements */
void print2largest(int arr[], int arr_size)
{
    int i, first, second, third;

    /* There should be atleast two elements */
    if (arr_size < 3)
    {
        // printf(" Invalid Input ");
        return;
    }

    third = first = second = INT_MIN;
    for (i = 0; i < arr_size; i++)
    {
        /* If current element is smaller than first*/
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and second then update second  */
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }

        else if (arr[i] > third)
            third = arr[i];
    }

    // printf("Three largest elements are %d %d %d\n", first, second, third);
}
int main()
{
    dance();
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    if (s[x] == '-')
    {
        s[x] = 'p';
        if (s.find('-') == -1)
        {
            cout<<"Yes";
        }else
        {
            /* code */cout << "No";
        }
        
    }
    else
        cout << "No";
    return 0;
}
