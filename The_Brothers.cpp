// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <cstdlib>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;


int main(){
    string first ="",second="";
    getline(cin,first);
        getline(cin,second);
    
    int n = first.find(' ');
    string str1 = first.substr(n+1);
    int z = second.find(' ');
    string str2 = second .substr(z+1);
    size_t comp = str1.compare(str2);
    (comp == 0) ? cout << "ARE Brothers" : cout << "NOT";
        
    return 0;
}

