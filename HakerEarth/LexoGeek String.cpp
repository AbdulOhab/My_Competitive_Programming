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
    string s;
    cin>>s;
    if(next_permutation(s.begin(),s.end()))
    {
      cout<<s<<"\n";
    }
    else
    {
      cout<<"no answer\n";
    }
  }
	return 0;
}
