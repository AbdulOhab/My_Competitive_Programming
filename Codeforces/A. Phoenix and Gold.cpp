#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int>v;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int arr;
        cin>>arr;
        v.push_back(arr);
        sum += arr;
    }
    if(sum==x)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int j=0;j<n;j++)
    {
      if(x==v[j])
      {
        swap(v[j],v[j+1]);
      }
      cout<<v[j]<<' ';
      x=x-v[j];
      //cout<<x<<"tt"<<endl;
    }
    cout<<endl;
    return;
}
int main(int ab_ohab, char const *abohab[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
