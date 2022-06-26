#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

ll sum_ofdigit(ll t)
{
    ll sum=0,remainder = 0;
    while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        t  = t / 10;
    }
    return sum;
}
int main(int ab_ohab, char const *abohab[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll n;
        cin>>n;
        if(n<2050 || n % 2050 != 0)
        {
            cout<<"-1"<<"\n";
        }
        else
        {
            ll s = n/2050;
            cout<<sum_ofdigit(s)<<"\n";
        }
    }
    return 0;
}
