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

const int mx = 1e5+123;
bool v[mx];
vector<int> adj[mx];

void dfs( int u)
{
  v[u] = 1;
  for(auto r:adj[u])
  {
    if(v[r] == 0) dfs(r);
  }
  return;
}

int main(int argc, char const *argv[])
{
   optimize();
   int n, m;
   cin >> n >> m;
   for ( int i = 1; i <= m; i++ )
   {
       int u, v;
       cin >> u >> v;
       adj[u].push_back ( v );
       adj[v].push_back ( u );
   }
   int cnt=0;

   for(int i=1;i<=n;i++)
   {
     if(v[i] == 0)
     {
       dfs(i);
       cnt++;
     }
   }
   cout<<cnt<<endl;

  return 0;
}
