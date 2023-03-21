#include<bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        cin>>n;
        int a[n+1],ind=0;
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1, a+n+1);
        for(int i=2; i<=n; i++)
            if(a[i]-a[i-1]>1)
            {
                ind=1;
                break;
            }
        if(ind==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}
