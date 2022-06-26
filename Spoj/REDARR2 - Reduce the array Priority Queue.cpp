#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  while (n--) {
    long long a;
    cin>>a;
    priority_queue<long long,vector<long long>,greater<long long> >q;
    for(int i=0;i<a;i++)
    {
      int t;
      cin>>t;
      q.push(t);
    }
    long long ans=0;
    while (q.size()>1)
    {
      long long x=q.top();
      q.pop();
      long long y=q.top();
      q.pop();
      ans+=x+y;
      q.push(x+y);
    }
    cout<<ans<<"\n";
  }
	return 0;
}
//or
int main()
{
	optimize();

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		priority_queue<ll> q;

		for ( int i = 0; i < n; i++ ) {
			int a;
			cin >> a;
			q.push ( -a );
		}

		ll ans = 0;
		while ( q.size() > 1 ) {
			ll a = -q.top();
			q.pop();

			ll b = -q.top();
			q.pop();

			q.push ( - (a + b) );
			ans += (a+b);
		}

		cout << ans << endl;
	}
	return 0;
}
