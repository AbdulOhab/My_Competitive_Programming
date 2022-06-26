#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
// some input not handed properly
int solver(int n)
{
	ull p=1;
	ull i=0;
	while(1)
	{
		p*=prime[i];
		if(p>n) return i;

		i++;
	}
	return 0;
}
int main(int argc, char const * argv[])
{
  optimize();
  int n;
  cin >> n;
  while (n--) {
    int n;
    cin >> n;
    // ull p = 0;
    // ull result = 1;
    // for (auto u: prime) {
    //   result = result * u;
    //   if (result <= n) {
    //     p++;
    //   }
    // }
    // cout << p << endl;
		cout<<solver(n)<<endl;

  }
  return 0;
}
