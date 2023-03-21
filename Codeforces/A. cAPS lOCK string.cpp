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
  for(int i=1; i<s.size(); i++)
    if(islower(s[i])){
      cout<<s<<endl;
      return 0;
    }
  for(int i=0; i<s.size(); i++)
  {
    s[i]=s[i]^32;
    //cout<<s[i];
  }
  cout<<s;
	return 0;
}
