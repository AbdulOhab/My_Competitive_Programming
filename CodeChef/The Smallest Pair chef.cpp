#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T,n,a,ans;

    int s[105];
    scanf("%d", &T);
    while(T --)
    {
        scanf("%d", &n);
        for(int i=0; i<n; ++i)
        {
            scanf("%d", &a);
            s[i]=a;
        }
        sort(s,s+n);
        ans=s[0]+s[1];
        cout<<ans<<"\n"<<endl;
    }
    return 0;
}
