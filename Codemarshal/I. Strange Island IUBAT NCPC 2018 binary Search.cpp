#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

const int mx = 1e5+123;
ll a[mx];
ll n, m, k;

bool check(ll d)
{
  ll last = a[1] + d;
  int cnt=k-1;
  for(int i=2;i<=m;i++)
  {
    if(abs(a[i]-last)>d)
    {
      if(cnt==0) return 0;
      last = a[i]+d;
      cnt--;
    }
  }
  return -1;
}

int main()
{
	optimize();

	int T;
	cin >> T;
	for ( int tc = 1; tc <= T; tc++ ) {

		cin >> n >> m >> k;
		for ( int i = 1; i <= m; i++ ) cin >> a[i];

		ll l = 0, r = 1e10;
		ll ans;
		while ( l <= r ) {
			ll mid = ( l + r ) >> 1;

			if ( check ( mid ) ) {
				ans = mid;
				r = mid-1;
			}
			else l = mid+1;
		}
		cout << "Case " << tc << ": " << ans << endl;
	}
	return 0;
}
