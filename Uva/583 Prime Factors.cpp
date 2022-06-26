//12 = 2 × 2 × 3 = 2^2 × 3  its prime factorization.
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
      while ( n % p == 0 ) {
        rr.push_back(p);
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
    primeGen(1e5);
    ll n;
    while (cin>>n) {
      if( n == 0 ) break ;
      vector<long long> ans = fact(abs(n));
      if ( n < 0 ) ans.insert (ans.begin(),-1);
      cout << n << " = " << ans[0];
      for ( int i = 1; i < ans.size(); i++ ) cout << " x " << ans[i];
      cout << endl;
    }
    return 0;
}
