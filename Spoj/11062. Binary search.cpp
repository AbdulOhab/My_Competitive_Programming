#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    while(x--)
    {
        int a;
        cin>>a;
        int lo = lower_bound( arr, arr + n, a) - arr;
        if( lo>= n or arr[lo]!=a) cout<<"-1"<<endl;
        else cout<<lo<<endl;
    }
    return 0;
}
