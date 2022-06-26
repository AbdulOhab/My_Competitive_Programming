#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


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
      rr.push_back(p);
      while ( n % p == 0 ) {
        n/=p;
      }
    }
  }
  if ( n > 1 ) rr.push_back(n);
  return rr;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    primeGen(1e6);
    int t;
    cin>>t;
    int i=1;
    while (t--) {
      int n;
      cin>>n;
      set<ll> primef;
      for(int i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        vector<ll> re = fact(a);
        for(auto u:re ) primef.insert(u);
      }
      cout << "Case #" << i++ << ": " << primef.size() << endl;
      for ( auto u : primef ) cout << u << endl;
    }

    return 0;
}
