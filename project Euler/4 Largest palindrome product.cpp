//A. Twins
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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solve()
{
  int n;
  cin>>n;
  int l=n;
  while(n--)
  {
    int l=n;
    string t=to_string(l);
    string inside=t;
    reverse(all(t));
    if(t==inside)
    {
      cout<<n<<endl;
      break;
    }
  }
}

int main()
{
  optimize();
  ll  t;
  cin>> t;
  while( t--) solve();
  return 0;
}
