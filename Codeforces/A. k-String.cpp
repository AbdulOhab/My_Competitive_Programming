#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int a;
  string s;
  cin>>a>>s;
  string s1="",s2="";
  sort(s.begin(),s.end());
  for(int i=0;i<s.size();i+=a)
  {
    s1+=s[i];
  }
  for(int i=0;i<a;i++)
  {
    s2+=s1;
  }
  s1=s2;
  sort(s1.begin(),s1.end());
  if(s1!=s) cout<<-1<<endl;
  else cout<<s2<<endl;
  return 0;
}
