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
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

int solve()
{
  int n;
  cin>>n;
  if(n>45)
  {
    cout<<"-1"<<endl;
    return 0;
  }
  vector< int > ans;

  for(int i = 9; i>=1; i-- )
  {
    if(n >= i)
    {
      ans.push_back(i);
      n = n-i;
    }
  }
  sort(all(ans));

  for(auto j:ans)
    cout<<j;
  cout<<endl;
  return 0;
}

int main()
{
   optimize();
   int t;
   cin>>t;
   while(t--) solve();
   return 0;
}
