#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

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

int phi(int n)
{
  int rr=n;

  for(auto p:prime)
  {
    if( 1LL * p * p >n || n==0 ) break;

    if( n % p ==0 )
    {
      rr/=p;
      rr*=(p-1);

      while( n % p == 0 )
      {
        n/=p;
      }
    }
  }
  if( n > 1)
  {
    rr/=n;
    rr*=(n-1);
  }
  return rr;
}
int main()
{
   optimize();

   primeGen(1e3);
   int n;
   cin>>n;
   while(n--)
   {
     int t;
     cin>>t;
     cout<<phi(t)<<endl;
   }
   return 0;
}
