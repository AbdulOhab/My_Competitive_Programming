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
#define outfile() freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solvei() {
  int n;
  int cnt1 = 0, cnt2 = 0, cnt3 = 0;
  cin >> n;
  ll arr[n + 5], mx = -1, mn = 1000;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    mx = max(mx, arr[i]);
    mn = min(mn, arr[i]);
  }

  int f = 0, f1 = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] == mx) f = 1;
    if (arr[i] == mn) f1 = 1;
    cnt1++;
    if (f and f1) break;
  }

  int t = 0, t1 = 0;
  for (int i = n; i >= 1; i--) {
    if (arr[i] == mx) t = 1;
    if (arr[i] == mn) t1 = 1;
    cnt2++;
    if (t and t1) break;
  }
  int j;
  for (j = 1; j <= n; j++) {
    cnt3++;
    if (arr[j] == mx or arr[j] == mn) break;
  }

  for (j = n; j >= 1; j--) {
    cnt3++;
    if (arr[j] == mx or arr[j] == mn) break;
  }
  cout << min(cnt1, min(cnt2, cnt3)) << endl;
}

void solve()
{
  
}
int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   while (T--) {
      solve();
   }
    return 0;
}
