/**
 *    @author: Ab_ohab
 *    created: 07.04.2021 13:14:29 fr
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

int main(int argc, char const *argv[])
{
    ios;
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int j=1; j<=n; j++)
    {
        int a;
        cin>>a;
        ans = ans+a;
        int p=min(8,ans);
        //cout<<"p: "<<p<<endl;
        k=k-p;
        //cout<<"k: "<<k<<endl;
        ans=ans-p;
        //cout<<"ans: "<<ans<<endl;
        if(k<=0)
        {
            cout<<j<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";

    return 0;
}
