/**
 *    @author: Ab_ohab
 *    created: 08.04.2021 12:26:29 th
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    long long int  a,b;
    cin>>a>>b;
    long long int c=pow(2,a);
    cout<<b%c;
    return 0;
}
