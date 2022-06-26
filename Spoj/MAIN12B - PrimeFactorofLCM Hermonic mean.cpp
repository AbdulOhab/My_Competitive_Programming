#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
////////////////////////this is given TLE
const int MX = 1e7+123;
vector <ll> factorial[MX];
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

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int lim=1e6;
    primeGen(lim);

    for(auto p:prime)
      {
        for(int i = p; i<=lim;i+=p)
        {
            factorial[i].push_back( p);
            int temp = i;
            while( temp>0  and temp % p ==0)
            {
              temp /=p;
            }
        }
      }
    int t;
    cin>>t;
    int i=1;
    while (t--) {
      int n;
      cin>>n;
      set<ll> primef;
      vector<ll> re ;
      for(int i=0;i<n;i++)
      {
        ll a;
        cin>>a;
        //for(auto U:factorial[a]) re.push_back(U);
        vector<ll> re = factorial[a];
        for(auto u:re ) primef.insert(u);
      }
      cout << "Case #" << i++ << ": " << primef.size() << endl;
      for ( auto u : primef ) cout << u << endl;
    }
    // for(int i = 1 ; i <= 10 ; i++ )
    // {
    //   cout<<i<<" : ";
    //   for(auto U:factorial[i]) cout<< U << " ";
    //   cout<<endl;
    // }
    return 0;
}
