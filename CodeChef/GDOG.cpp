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
  int a,v;
  cin>>a>>v;
  int mx = 0;
  for (size_t i = 1; i <=v; i++) {
    int t = a%i;
    if(t>mx)
    {
      mx = t;
    }
  }
  cout<<mx<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   ll a;
   cin>>a;
   while (a--) {
    solve();
  }
   return 0;
}
