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
  set<int> v;
  for(int i=0;i<n;i++)
  {
    int arr;
    cin>>arr;
    v.insert(arr);
  }
  int len=v.size();
  if(len==1) cout<<"NO\n";
  else
  {
    cout<<*(++v.begin())<<"\n";
  }
	return 0;
}
