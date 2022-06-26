#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


const int MX = 1e7+123;
vector<ll> factorial[MX];
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
    int lim=3e3;
    primeGen(lim);
    int na;
    cin>>na;
    for(auto p:prime)
    {
      for(int i=0; i<=lim;i+=p)
      {
        factorial[i].push_back ( i );
      }
    }
    int ans=0;
      for(int i=1;i<=na;i++)
      {
        if(factorial[i].size() == 2) ans++;
      }
      cout << ans << endl;
    return 0;
}
