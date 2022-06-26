#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

void s()
{
    ll ans=1;
    ll w,b,n;
    cin>>w>>b>>n;
    while(w)
    {
        if(w%2==0)
        {
            ans*=2;
            w/=2;
        }
        else
            break;
    }
    while(b)
    {
        if(b%2==0)
        {
            ans*=2;
            b/=2;
        }
        else
            break;

    }
    if(ans>=n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}

int main()
{
    ll t;
    t=1;
    cin>>t;
    while(t--)
        s();
    return 0;
}
