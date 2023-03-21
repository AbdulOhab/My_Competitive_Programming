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
  int arr1[n];
  int arr2[n];
  for(int j=0;j<n;j++) cin>>arr1[j];
  for(int j=0;j<n;j++) cin>>arr2[j];

  int ans=0;
  for(int i=1;i<=1000;i++)
  {
    bool yes=true;
    for(int j=0;j<n;j++)
    {
      if(i<arr1[j] || i>arr2[j]) yes= false;
    }
    if(yes) ans++;

  }
  cout<<ans<<"\n";
	return 0;
}
