#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  int arr[n];
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  sort(arr,arr+n);
  ll m;
  cin>>m;
  while (m--)
  {
    ll t;
    cin>>t;
    cout<<sum-arr[n-t]<<endl;
  }
	return 0;
}
