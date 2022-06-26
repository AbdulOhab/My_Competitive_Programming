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
// const int mx=1e8+123;
// bool is_prime[ mx ];
// vector<int> prime;
//
// void primeGenSive(int n) {
//   //Sieve of Eratosthenes
//   for(auto i = 3; i <= n; i += 2) is_prime[ i ] = 1;
//   //memset(is_prime,1,sizeof(is_prime));
//
//   int sq=sqrt(n);
//   for( auto i = 3 ;i <= sq; i+=2 ){
//     if( is_prime[ i ] == 1){
//       for( auto j = i*i; j <= n; j += (i + i )){
//         is_prime[ j ] = 0;
//       }
//     }
//   }
//   for( auto i = 3; i < n; i++ )
//   {
//     if(is_prime[i] == 1) prime.push_back( i );
//   }
//   int val=2;
//   prime.insert(prime.begin(),val);
//
// }

//bitset seive
const int MX = 1e8+123;

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
   optimize();
   primeGen(1e8);
   for(int i=0;i<prime.size();i+=100)
   {
     cout<<prime[i]<<endl;
   }
    return 0;
}
