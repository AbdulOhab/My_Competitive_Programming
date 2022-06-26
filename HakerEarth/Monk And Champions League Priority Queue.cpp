#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n,m;
  cin>>n>>m;
  priority_queue<int>v;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    v.push(t);
  }
  ll ans=0;
  for(int i=0;i<m;i++)
  {
    int t=v.top();
    ans+=t;
    v.pop();
    //if(t>0) v.push(t-1);
    v.push(t-1);
  }
  cout<<ans<<"\n";
  return 0;
}
