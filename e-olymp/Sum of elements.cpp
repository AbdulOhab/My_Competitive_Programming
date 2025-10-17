#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
  int a;
  cin>>a;
  double fl=0.0;
  for(int i=0; i<a; i++)
  {
    double b;
    std::cin >> b;
    fl+=b;
  }
  std::cout << fl << '\n';

  return 0;
}
