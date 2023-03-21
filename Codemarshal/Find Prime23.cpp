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
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int is_prime(int n) {
  if (n == 1) return 0; // 1 is NOT a prime
  if (n == 2) return 1; // 2 is a prime
  if (n % 2 == 0) return 0; // NO prime is EVEN, except 2
  for (int i = 3; i * i <= n; i += 2) // start from 3, jump 2 numbers
    if (n % i == 0) // no need to check even numbers
      return 0;
  return 1;
}

int nextprime(int n)
{
    int i=n+1;
    while(1)
    {
        if(is_prime(i))
            break;
        i++;
    }
    return i;
}

int prevprime(int n)
{
    int i=n-1;
    while(1)
    {
        if(is_prime(i))
            break;
        i--;
    }
    return i;
}



void solve() {
  int first,last,jprime;
    cin >> jprime;
    cout <<prevprime(jprime)<<" "<<nextprime(jprime)<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   // cin.ignore(); must be there when using getline(cin, s)
   while (T--) {
     solve();
   }
   return 0;
}
