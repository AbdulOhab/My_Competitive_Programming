#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 10000007
int const mx=10003;
int dp[mx];
int a, b, c, d, e, f;
int fn(int n)
{
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
    if(dp[n] != -1) return dp[n];

    dp[n] = ( fn(n-1)%mod + fn(n-2)%mod + fn(n-3)%mod + fn(n-4)%mod + fn(n-5)%mod + fn(n-6)%mod )%10000007;
    return dp[n]%10000007;
}

int main()
{
   optimize();
   ll t,n,i=1;
   cin>>t;
   while (t--) {
     memset(dp, -1 , sizeof(dp));
     cin >> a >> b >> c >> d >> e >> f >> n;
     cout<<"Case "<<i++<<": " << fn(n) % 10000007<<endl;
    }
   return 0;
}
