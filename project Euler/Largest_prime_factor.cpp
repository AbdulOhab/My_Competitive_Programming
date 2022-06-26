#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);


const int MX = 1e8+123;
bitset<MX> is_prime;
vector<long long> prime;

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

ull fact(ll n)
{
  ull rr;
  for(auto p:prime){
    if(1LL *p * p > n) break;
    if( n % p == 0)
    {
      //rr.push_back(p); // for unique
      while ( n % p == 0 ) {
        //rr.push_back(p); //for all
        n/=p;
      }
    }
  }
  if ( n > 1 ) rr=n;
  return rr;
}
// wrong first testcase
int main(int argc, char const *argv[])
{
    optimize();
    primeGen(1e7);
    ll t;
    cin>>t;
    while(t--)
    {
      unsigned long long  n;
      cin>>n;
      ull ans = fact(n);
      cout<<ans<<endl;
    }
    return 0;
}
