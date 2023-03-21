#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
	ll n, m;
	cin>>n>>m;
	string s;
	cin>>s;
	string t=s;
	while (m--) {
		for(int i=0;i<n;i++)
		{
     if(t[i] == '0' && ( t[i-1] == '1' && t[i+1] != '1' ) ||
		    ( t[i-1] != '1' && t[i+1] == '1' ) )
		 {
			 s[i]='1';
		 }
	 }
	 if(s==t) break;
	 else  t = s;
	}
	cout<<s<<endl;
}
int main() {
    optimize();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
}
