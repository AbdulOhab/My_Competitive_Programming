#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int main(int argc, char const *argv[]) {
  int sum;
  for (int i = 1; i <= 10; i++)
	{
        cout<< factorial(i) << endl;
  }
  return 0;
}
