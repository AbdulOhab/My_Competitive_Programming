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
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a1=0,a2=0,l;
        for(int i=0; i<n; ++i)
        {
            cin>>l;
            if(l==1)
            {
                a1++;
            }
            else
            {
                a2++;
            }
        }

        if(a1==0)
        {
            if(a2%2==0)
                cout<<"YES";
            else
                cout<<"NO";
            cout<<endl;
            continue;
        }
        else
        {
            if(a1%2==1)
                cout<<"NO";
            else
                cout<<"YES";
            cout<<endl;
        }
    }
    /* stuff you should look for
    * int overflow, array bounds
    * special cases (n=1?)
    * do smth instead of nothing and stay organized
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
    */

    return 0;
}
