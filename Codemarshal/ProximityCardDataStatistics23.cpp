#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {

  int T;
  string s;
  set<string> v;
  cin >> T;
  for (int i = 0; i < T; i++) {
    cin.ignore();
    getline(cin, s);
    v.insert(s);
  }

  //================================================================
  // for blood grouping

  int ap=0;
  int am=0;
  int abp=0;
  int abm=0;
  int bp=0;
  int bm=0;
  int op=0;
  int om=0;

  // for (int i = 0; i < T; i++) {
  //   cout<<v[i].size()<<endl;
  // }

  for ( auto u : v ) cout << u.size() << endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   solve();
   return 0;
}
