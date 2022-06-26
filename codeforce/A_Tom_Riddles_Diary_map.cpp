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
  map<string,bool>mpd;
  while (n--)
  {
    string s;
    cin>>s;
    if ( mpd[s] == 1 ) cout << "YES\n";
    else cout << "NO\n";
    
    mpd[s]=1;
  }

	return 0;
}
