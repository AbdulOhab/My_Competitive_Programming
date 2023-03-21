#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
  ll a,b;
  cin>>a>>b;

  ll d=abs(a-b);
  ll x=d/2;
  ll y=d-x;
  ll t=(x*(x+1))/2 + (y*(y+1))/2;
  cout<<t<<endl;
  return 0;
}
