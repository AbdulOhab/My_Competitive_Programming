#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    if (binary_search(arr, arr + n, x))
    {
        auto lo=lower_bound(arr,arr+n,x)-arr;
        auto up= upper_bound(arr,arr+n,x)-arr;
        ans.push_back(lo);
        ans.push_back(up-1);
    }
    else
    {
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}
