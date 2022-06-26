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

const int mx= 2e4+123;
bool vis[mx];
vector<int> adj[mx];
int total_cnt;
int cnt1;
bool isnode[mx];


void dfs(int u,int col)
{
  vis[u]=1;
  if(col == 1) cnt1++;
  total_cnt++;

  int temp;
  if(col == 1) temp = 2;
  else temp = 1;
  for(auto v:adj[u])
  {
    if(vis[v]==0)
    {
      dfs(v,temp);
    }
  }
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int T;
   cin>>T;
   for (int tc = 1; tc <= T; tc++)
   {
     for (int j = 0; j < mx; j++) {
       adj[j].clear();
       isnode[j]=0;
       vis[j]=0;
     } // graph clear


     int n;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
       int u, v;
       cin >> u >> v;
       adj[u].push_back ( v );
       adj[v].push_back ( u );

       isnode[u]=1;
       isnode[v]=1;
     }

     int ans=0;
     for (int i = 1; i <= 2e4; i++) {
       if(isnode[i]==1 and vis[i]==0)
       {
         total_cnt=0,cnt1=0;
         dfs(i,1);
         ans+=max(cnt1,total_cnt-cnt1);
       }
     }
     cout<<"Case "<<tc<<": "<<ans<<endl;
   }
   return 0;
}
