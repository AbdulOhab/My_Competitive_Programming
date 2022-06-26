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

long long SOD(long long n)
{
  long long rr=1;
  for(auto p:prime){
    if(1LL *p * p > n) break;
    if( n % p == 0)
    {
      long long currSum =1;
      long long powP =1;
      while ( n % p == 0 ) {
        powP *= p;
        currSum+= powP;
        n/=p;
      }
      rr *=currSum;
    }
  }
  if ( n > 1 ) rr *= (1+n);
  return rr;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    primeGen(1e6);
    ll n;
    cin>> n;
    ll t=n*2;
    if(SOD(N)==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //cout<<SOD()<<endl;
    return 0;
}
