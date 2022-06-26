//B. Maximum Cost Deletion
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
void solve()
{
  int n,a,b;
  string s;
  cin>>n>>a>>b;
  cin>>s;
  int ans = 0;
  if(b >=0 ) ans= a*n+b*n;
  else
  {
    int cnt=1;
    for(int i=1 ; i<n; i++)
    {
      if(s[i] != s[i-1]) cnt++;
    }
    cnt=cnt/2+1;
    ans = a*n + b*cnt;
  }
  cout<<ans<<endl;
}

// void solve()
// {
//   int n,a,b;
//   string s;
//   cin>>n>>a>>b;
//   cin>>s;
//   int ans = 1;
//   int zero=0,one=0;
//   for(int i=0;i<n;i++)
//   {
//     if(s[i] == '1') one++;
//     else zero++;
//   }
//   int len=abs(one-zero);
//   int fora=a*len;
//   cout<<fora+b<<endl;
// }
int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin>>t;
   while(t--) solve();
   return 0;
}
