#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
	//freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
	//#endif
  ll n;
  cin>>n;
  //vector<ll>v;
  map<int,int>maped;
  for(int i=1;i<=n;i++)
  {
    int t;
    cin>>t;
    maped[t]++;
  }
  int ans=0;
  for(auto u:maped)
  {
    if(u.second>=u.first) ans+=u.second-u.first;
    else ans+=u.second;
  }
  cout<<ans<<endl;
	return 0;
}
