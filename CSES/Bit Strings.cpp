#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007
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

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  ll n;
  cin>>n;
  cout<<modPow(2,n)<<endl;
  return 0;
}
