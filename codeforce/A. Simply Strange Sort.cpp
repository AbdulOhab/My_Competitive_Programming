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
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solve()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int cnt = 0, ev = 0, od = 0;
  for (int i = 0; i < n; i++)
  {
    ev = 0;
    od = 0;
    if (i % 2 == 0) {
      for (int j = 0; j < n - 1; j += 2) {
        if (a[j] > a[j + 1]) {
          swap(a[j], a[j + 1]);
          ev = 1;
        }
      }
    }
    else {
      for (int j = 1; j < n - 1; j += 2) {
        if (a[j] > a[j + 1]) {
          swap(a[j], a[j + 1]);
          od = 1;
        }
      }
    }
    if (ev == 0 && od == 0) break;
    cnt++;
  }
  cout << cnt << endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int T;
   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
