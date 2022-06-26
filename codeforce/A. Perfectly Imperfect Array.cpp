#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

void solve()
{
  int a;
  cin>>a;
  bool flag=false;
  for(int i=0;i<a;i++)
  {
    int a;
    cin>>a;
    int sq=(int)sqrt(a);
    if(sq*sq!=a) flag=true;

  }
  if(flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  while(n--)
  {
    solve();
  }
	return 0;
}
