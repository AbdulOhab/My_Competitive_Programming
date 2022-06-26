#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n,friend1,friend2;
  cin>>n>>friend1;
  set<int> v;
  for(int i=0;i<friend1;i++)
  {
    int t;
    cin>>t;
    v.insert(t);
  }
  cin>>friend2;
  for(int i=0;i<friend2;i++)
  {
    int t;
    cin>>t;
    v.insert(t);
  }
  if(n==v.size()) cout<<"I become the guy."<<"\n";
  else cout<<"Oh, my keyboard!"<<"\n";
  return 0;
}
