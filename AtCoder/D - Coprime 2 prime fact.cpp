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
const int MX = 1e7+123;
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

vector<ll> fact(ll n)
{
  vector<ll> rr;
  for(auto p:prime){
    if(1LL *p * p > n) break;
    if( n % p == 0)
    {
      //rr.push_back(p); // for unique
      while ( n % p == 0 ) {
        rr.push_back(p); //for all
        n/=p;
      }
    }
  }
  if ( n > 1 ) rr.push_back(n);
  return rr;
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int lim=1e6;
   primeGen(lim);
   int n,m;
   cin>>n>>m;
   std::vector<int> v;
   for(int i=1;i<=n;i++)
   {
     int t;
     cin>>t;
     std::vector<ll> ans=fact(t);
     for(auto p:ans)
     {
       v.push_back(p);
     }
   }
   vector<int> vis(m+5,0);
   for(int i=0;i<v.size();i++)
   {
     if(m>=v[i] and vis[v[i]]==0)
     {
       for(int j=v[i];j<=m;j+=v[i])
       {
         vis[j]=1;
       }
     }
   }
   vector<int> flag;
   for(int i=1;i<=m;i++)
   {
     if(vis[i]==0) flag.push_back(i);
   }
   cout<< flag.size()<<endl;
   for(auto p:flag) cout<<p<<endl;
   return 0;
}
