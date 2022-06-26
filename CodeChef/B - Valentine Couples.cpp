#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
	while(n--)
  {
    int N;
		cin>>N;
    ll boys[N];
    ll girls[N];
    for(int i=0;i<N;i++) cin>>boys[i];
    for(int i=0;i<N;i++) cin>>girls[i];
    sort(boys,boys+N);
    sort(girls,girls+N,greater<int>());
    ll ans=boys[0]+girls[0];
		for(int i=1;i<N;i++)
		{
			if(boys[i]+girls[i]>ans) {
				ans=boys[i]+girls[i];
			}
		}
		cout<<ans<<endl;
  }
	return 0;
}
