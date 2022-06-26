#include <bits/stdc++.h>
#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int f=1,tmp;
    while(c>0)
    {
        if(f==1)
        {
            tmp=__gcd(a,c);
            f=0;
            c=c-tmp;
            if(c<1)
            {
                cout<<0;
                break;
            }
        }
        else
        {
            tmp=__gcd(b,c);
            f=1;
            c=c-tmp;
            if(c<1)
            {
                cout<<1;
                break;
            }
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
simon:

    n=n-__gcd(a,n);
    if(n==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
        goto antisimon;
antisimon:
    n=n-__gcd(b,n);
    if(n==0)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
        goto simon;
}
