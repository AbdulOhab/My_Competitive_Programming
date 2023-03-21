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
  ll n;
  cin>>n;
  n%=4;
  //cout<<n<<endl;
  if(n==0 || n==3)
  {
    cout<<0<<endl;
  }
  else
  {
    cout<<1<<endl;
  }
  return 0;
}
