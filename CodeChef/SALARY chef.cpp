#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T,n,a;

    int s[105];
    scanf("%d", &T);
    while(T --)
    {
        scanf("%d", &n);
        for(int i=0;i<n;++i){
        scanf("%d", &a);
        s[i]=a;
        }
        sort(s, s+n);
        int ans=0;
        for(int i=1; i<n; ++i){

        ans+=(s[i]-s[0]);

        }
        cout<<ans<<"\n";
    }
    return 0;
}
