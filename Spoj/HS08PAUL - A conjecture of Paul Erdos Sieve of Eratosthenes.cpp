#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

//Sieve of Eratosthenes
const int mx=1e7+123;
bitset<mx> is_prime;
vector<int> prime;
int answ[mx];
void primeGenSieve(int n) {
  for(auto i = 3; i <= n; i += 2) is_prime[ i ] = 1;
  //memset(is_prime,1,sizeof(is_prime));

  int sq=sqrt(n);
  for( auto i = 3 ;i <= sq; i+=2 ){
    if( is_prime[ i ] == 1){
      for( auto j = i*i; j <= n; j += (i + i )){
        is_prime[ j ] = 0;
      }
    }
  }
  is_prime[2] = 1;
  prime.push_back (2);
  for( auto i = 3; i < n; i++ )
  {
    if(is_prime[i] == 1) prime.push_back( i );
  }
}

int main(int argc, char const *argv[])
{
   optimize();
   int limit=1e7;
   primeGenSieve(limit);
   for ( int x = 1; x <= 3200; x++ ) {
        for ( int y = 1; y <= 60; y++ ) {
            int num = ( x * x ) + ( y * y * y * y );
            if ( num > limit ) continue;
            if ( is_prime[num] ) answ[num] = 1;
        }
    }
    for(int i = 0; i <=limit ; i++ )
    {
      answ[i]+=answ[i-1];
    }
    int l;
    cin>>l;
    while(l--)
    {
      int q;
      cin>>q;
      cout<<answ[q]<<endl;
    }

    return 0;
}
