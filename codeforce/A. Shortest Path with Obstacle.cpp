//A. Shortest Path with Obstacle
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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

void solver()
{
  int x, y, xx, yy;
  cin >> x >> y >> xx >> yy;
  int a, b;
  cin >> a >> b;
  int ans = 0;
  ans += abs(x - xx) + abs(y - yy);
  if (x == xx && a == xx && b <= max(y, yy) && b >= min(y, yy))
  {
    ans += 2;
  }
  else if (y == yy && b == y && a <= max(x, xx) && a >= min(x, xx))
  {
    ans += 2;
  }
  cout << ans << endl;
}
int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin>>t;
   while(t--) solver();

   return 0;
}
