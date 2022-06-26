#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  string s;
  cin>>s;
  int n=s.size();
  int flagsum=0;
  for(int i=0;i<n;i++)
  {
    int t=s[i]-'0';
    flagsum+=t;
  }
  string s1=to_string(flagsum);
  string s2=s1;
  reverse(s1.begin(),s1.end());
  (s2==s1)? cout<<"1\n":cout<<"0\n";
	return 0;
}
