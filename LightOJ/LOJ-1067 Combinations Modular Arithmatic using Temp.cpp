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
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;
#define MOD 1000003
ll modPow ( ll b, ll p )
{
    long long rr = 1;

    while ( p > 0 ) {
        if ( p % 2 == 1 ) {
            rr *= b;
            rr %= MOD;
        }
        p /= 2;

        b *= b;
        b %= MOD;
    }
    return rr;
}

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
     fact[i]=(fact[i-1] * i ) % MOD;
     invfact[i] = modPow( fact[i], MOD-2 ) % MOD;
   }
   int T ;
   cin>>T;
   int tc=1;
   while (T--) {
     int n,a;
     cin>>n>>a;

     ll ans = (fact[n] * invfact[n-a] * invfact[a]) % MOD;
     cout << "Case " << tc++ << ": " << ans << endl;
   }
   return 0;
}
