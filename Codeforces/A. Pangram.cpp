#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  string s;
  cin>>n>>s;
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  set<char>v;
  for(int i=0;i<n;i++)
  {
    v.insert(s[i]);
  }
  if(v.size()==26) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
	return 0;
}
