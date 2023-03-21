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
  int a,b,c;
  cin >> a>>b>>c;
    int t=b/a;
    if(t>c)
    {
      cout<<c<<endl;
    }
    else if(a>b)
    {
      cout<<0<<endl;
    }
    else
    {
      cout<<b/a<<endl;
    }
  return 0;
}
