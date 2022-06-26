/**
 *    @author: Ab_ohab
 *    created: 31.03.2021 11:52:29
**///codeForces
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0,n,c=0,i;
    cin>>n;
    int a[n+9];
    for(i=1; i<=n; i++)
        cin>>a[i];
    for(i=1; i<=n; i++)
    {
        c=0;
        int x=a[i];
        while(x != -1)
        {
            x=a[x];
            c++;
        }
        ans=max(ans, c);
    }
    cout<<ans+1<<endl;

    return 0;
}
