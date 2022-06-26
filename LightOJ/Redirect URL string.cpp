#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  string str= "https:";
  int test;
  cin>>test;
  int j=1;
  while(test--)
  {
    string s;
    cin>>s;
    int i=0;
    for(auto u:s)
    {
      if(u=='/') break;
      else i++;
    }
    s.erase(s.begin(), s.begin()+i);
    cout<<"Case "<<j<<": "<<str+s<<"\n";
    j++;
  }
	return 0;
}
