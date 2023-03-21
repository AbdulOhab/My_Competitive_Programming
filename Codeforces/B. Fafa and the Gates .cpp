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
  int isR=0,isU=0,c=0;
  for(int i=0;i<n-1;i++)
  {
    if(s[i]=='R') isR++;
    else isU++;
    if(isR==isU && s[i]==s[i+1])
		{
			c++;
		}
  }
  cout<<c<<endl;
	return 0;
}
