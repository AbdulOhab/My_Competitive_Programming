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
  for(int i=0;i<n;i++)
  {
    string s,s1;
    cin>>s1;
    s=s1;
    reverse(s1.begin(),s1.end());
    if(s1==s) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";

  }
	return 0;
}
