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
  cin>>n;
  vector<pair<ll, int>> v(n);
  for(int i=0;i<n;i++)
  {
    int t;
    cin >>t;
    v[i].first  =t;
		v[i].second = i;
  }
  sort(all(v)); reverse(all(v));
  cout << v[1].second + 1 << endl;
  // for(int i=0;i<n;i++)
  // {
  //   cout<<v[i].first<<" "<<v[i].second<<endl;
  // }
  // for (auto &p : v){
  //   std::cout << p.first << ", " << p.second << endl;
  // }
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int T=1;
   //cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
