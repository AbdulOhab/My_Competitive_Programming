#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isSquareNumber(ll x)
{
        ll sr = sqrt(x);
        return (sr * sr == x);
}
int main(int ab_ohab, char const *abohab[]){
	// ios::sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);
  int test;
  cin>>test;
  while(test--)
  {
    int n;
    cin>>n;
    if (n%2==0 && isSquareNumber(n/2))
    {
      cout<<"YES\n";
    }
    else if(n%4==0 && isSquareNumber(n/4))
    {
      cout<<"YES\n";
    }
    else
    {
      cout<<"NO\n";
    }

  }
	return 0;
}
