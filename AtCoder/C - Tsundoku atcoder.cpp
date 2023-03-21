#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define l long long
int main()
{
    l a,b,c;
    l f,k;

    cin>>a>>b>>c;
    vector<l> v(a+1),u(b+1);
    u[0] = v[0] = 0;
    for(l i=0; i<=a; i++)
    {
        cin>>v[i], v[i] += v[i-1];
        //v.insert(f);
    }
    for(l i=0; i<=b; i++)
    {
        // cin>>k;
        // u.insert(k);
        cin>>u[i], u[i] += u[i-1];
    }
    // for(;i<a;i++)
    // {
    //   if(f[i]+k[i]>c)
    //
    // }
    // cout<<b<<endl;

    l ans=0;
    l i = 0, j = b;
    for(; i<=a; i++)
    {
        if(v[i]>k)
            break;
        while(v[i]+u[i]>k)
            j--;
        ans=max(ans,i+j);
    }
    cout << ans << endl;
    return 0;
}
