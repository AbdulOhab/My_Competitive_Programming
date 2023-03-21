//B. Non-Substring Subsequence
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
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solve()
{
  ll n,t; string s;
  cin>>n>>t;
  cin>>s;
  while (t--) {
    string Substring = "";
    ll l,r;
    cin>>l>>r;
    for(int i=l-1;i<r;i++) Substring+=s[i];

    bool fl=false;
    char c1=Substring.back();

    for(int i=r; i<n; i++)
    {
      if(s[i]==c1) fl=true;
    }

    c1=*Substring.begin();
    for(int i=0; i<l-1; i++)
    {
      if(s[i]==c1) fl=true;
    }
    if(fl) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }
}
int main()
{
  optimize();
  int l;
  cin>> l;
  while(l--)
  {
    solve();
  }
  return 0;
}
