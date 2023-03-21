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
  ll x,y,z;
  cin>>a>>b>>x>>y>>z;

  ll yellow=x*2+y;
  ll blue=y+z*3;
  ll ans=0;

  if(yellow>a)
  {
    ans+=yellow-a;
  }
  if(blue>b)
  {
    ans+=blue-b;
  }
  cout<<ans<<endl;
  return 0;
}
