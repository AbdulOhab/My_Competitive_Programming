#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  ll m,n;
  cin>>m>>n;
  int a=min(m,n);
  ll cnt=1;
  for(auto i=1;i<=a;i++ )
  {
      cnt*=i;
  }
  cout<<cnt;
  return 0;
}
