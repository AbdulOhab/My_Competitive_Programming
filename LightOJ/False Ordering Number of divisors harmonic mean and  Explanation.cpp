#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define endl "\n"

const int MX = 1e6+123;
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

// int NOD(ll n)
// {
//   int rr=1;
//   for(auto p:prime){
//     if(1LL *p * p > n) break;
//     if( n % p == 0)
//     {
//       int cnt=1;
//       while ( n % p == 0 ) {
//         n/=p;
//         cnt++;
//       }
//       rr *=cnt;
//     }
//   }
//   if ( n > 1 ) rr*=2;
//   return rr;
// }
vector<int> Mylist[1232];
int NOD[1123];

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    int limit=1e3;
    primeGen(limit);

    for(auto p : prime)
    {
      for(int i = p;i <= limit; i += p)
      {
        int cnt=1,tmp=i;
        while(tmp % p == 0)
        {
          tmp/=p;
          cnt++;
        }
        Mylist[i].push_back(cnt);
      }
    }
    for(int i = 1;i <= limit; i++)
    {
      NOD[i]=1;
      for(auto u : Mylist[i])
      {
        NOD[i] *= u;
      }
    }

    vector<pair<int,int>> v;

    for(int i = 1 ; i<=limit; i++)
    {
      v.push_back( { NOD[i], -i } );
    }
    sort ( v.begin(), v.end() );
    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        int n;
        cin >> n;

        cout << "Case " << tc << ": " << v[n-1].second * -1 << endl;
    }
    return 0;
}
