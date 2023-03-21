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
  map<string,int>mpd;
  while(n--)
  {
    string s;
    cin>>s;
    if ( mpd[s] == 0 ) cout << "OK\n";
    else cout<< s << mpd[s] << endl;

    mpd[s]++;
  }
  // for(auto u:mpd)
  // {
  //   cout<<u.second<<endl;
  //   //if(mpd[j])
  // }
	return 0;
}
