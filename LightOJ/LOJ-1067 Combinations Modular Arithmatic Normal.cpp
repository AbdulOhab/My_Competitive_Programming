#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000003

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

const int mx = 1e6+123;
ll fact[mx];
ll invfact[mx];

int main(int argc, char const *argv[])
{
   optimize();
   int lim=1e6;
   fact[0]=1;
   invfact[0]=1;
   for(int i = 1; i <= lim; i++)
   {
     fact[i]=modMul ( fact[i-1], i );
     invfact[i] = modInverse( fact[i] );
   }
   int T ;
   cin>>T;
   int tc=1;
   while (T--) {
     int n,a;
     cin>>n>>a;

     ll ans = modMul ( modMul ( fact[n], invfact[n-a] ), invfact[a] );
     cout << "Case " << tc++ << ": " << ans << endl;
   }
   return 0;
}
