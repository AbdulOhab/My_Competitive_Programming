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
//const int mx=1e6+123;
//Tle solution
// bool is_prime[mx];
// vector<int > prime;
//
// void primeGen(ll n) {
//
//   memset(is_prime,1,sizeof(is_prime));
//   is_prime[1] = 0;
//
//   for( auto i = 2;i <= n; i++ ) //[n ln n];
//   {
//     for( auto j = i+i; j <= n; j += i )
//     {
//       is_prime[j]=0;
//     }
//   }
//   for( int i=2;i<n;i++)
//   {
//     if(is_prime[i]==1)
//     {
//       if(i%2!=0)
//       {
//         prime.push_back(i);
//       }
//       //prime.push_back(i);
//     }
//   }
// }
//
// int main(int argc, char const *argv[])
// {
//    optimize();
//    ll n;
//    while(cin>>n)
//    {
//      primeGen(n);
//      if(n==0) break;
//
//      ll i=0;
//      ll j = prime.size()-1;
//      //for(int i=1;i<n*n;i++)
//      while(i<j)
//      {
//        ll sum = prime[ i ] + prime[ j ];
//        if(sum == n)
//        {
//          break;
//        }
//        else if(sum<n) i++;
//        else j--;
//      }
//      if(i>0) cout << "Goldbach's conjecture is wrong." << endl;
//      else cout<<n<<" = "<<prime[ i ]<<" + "<<prime[ j ]<<endl;
//    }
//
//    return 0;
// }

//squre(n) solution
// bool is_prime[mx];
// vector<int > prime;
//
// void primeGen(int n) {
//
//   memset(is_prime,1,sizeof(is_prime));
//
//   for( int i = 2 ;i <= n; i++ ) //[n ln n];
//   {
//     for( int j = i+i; j <= n; j += i )
//     {
//       is_prime[j]=0;
//     }
//   }
//   for( int i= 3 ; i < n; i++)
//   {
//     if(is_prime[i]==1) prime.push_back(i);
//   }
// }
const int mx=1e6+123;
bool is_prime[ mx ];
vector<int> prime;

void primeGen(int n) {
  //Sieve of Eratosthenes
  for(int i = 3; i <= n; i += 2) is_prime[ i ] = 1;

  int sq=sqrt(n);
  for( int i = 3 ;i <= sq; i+=2 ){
    if( is_prime[ i ] == 1){
      for( int j = i*i; j <= n; j += (i + i )){
        is_prime[ j ] = 0;
      }
    }
  }
  //is_prime[2] = 0;
  //prime.push_back( 2 );
  for( int i = 3; i < n; i+=2 )
  {
    if(is_prime[i] == 1) prime.push_back( i );
  }
}

int main(int argc, char const *argv[])
{
    primeGen(1e6);
    optimize();

    int n;
    while(cin>>n)
    {
      if(n ==0) break;
      int dif = -1, p1 = -1, p2 = -1;
      for(auto u : prime )
      {
        if ( u > n ) break;
        int tp1 = u, tp2 = n - u;

        if ( tp2 > 2 && is_prime[tp2] == 1 ) {
          //dif = abs ( tp1 - tp2 );
          p1 = tp1;
          p2 = tp2;
          break;
        }
      }
      if ( p1 == -1 ) cout << "Goldbach's conjecture is wrong." << endl;
      else cout << n << " = " << p1 << " + " << p2 << endl;
    }
    return 0;
}
