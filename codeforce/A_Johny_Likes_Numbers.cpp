#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {
  ll a, b;
  cin>>a>>b;
  ll t=a/b;
  cout<<(t+1)*b<<endl;

  // if(a<b)
  // {
  //   cout<<b<<endl;
  // }
  // else if(t>a)
  // {
  //   cout<<t<<endl;
  // }
  // else
  // {
  //   cout<<a+b<<endl;
  // }
  return 0;
}
