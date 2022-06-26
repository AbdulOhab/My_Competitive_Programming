#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

map<ll,bool> isPqr;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int lim =32e4;
    for(int i=1 ; i<=lim; i++)
    {
      isPqr[1LL*i*i] = 1;
    }
    int n ;
    cin >> n;
    while( n -- )
    {
      ll a ;
      cin>> a;
      if(isPqr[a]) cout<<"YES\n";
      else cout<<"NO\n";
    }
    return 0;
}
