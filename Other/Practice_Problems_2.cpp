#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

// Recursive
int sum(int n)
{

    if (n == 1)
        return 1;
    else
        // Recursive call
        return ((ll)pow(n, n) + sum(n - 1));
}
int main(int argc, char const *argv[]) {

  for(int i=0;i<100;i++)
  {
    cout<<i*i<<" + ";
  }
  return 0;
}
