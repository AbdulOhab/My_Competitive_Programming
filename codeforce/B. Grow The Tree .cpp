#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  ll n,arr[100010];
  ll x=0,y=0;
  cin>>n;
  for(int i=0 ; i<n ; i++) cin>>arr[i];
  sort(arr,arr+n);
   //sort(arr,arr+n);
  //for(auto i:arr) cout<<i<<" ";
  for(int i=0;i<n/2;i++) y+=arr[i];
  for(int i=n/2;i<n;i++) x+=arr[i];
  cout<<x*x+y*y<<"\n";
	return 0;
}
