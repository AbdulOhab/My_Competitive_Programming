#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

double pi = 2.0 * acos(0.0);

int main() {
  int n;
  cin>>n;

  for(int i=1;i<=n;i++)
  {
    double r;
    cin>>r;
    double area=(2 * r * 2 * r) - ( pi * r * r);
    printf("Case %d: %.2lf\n",i,area);
  }
  return 0;
}
