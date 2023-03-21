// A. System of Equations
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
  int n, m;

  cin >> n >> m;
  int tmp = 0;

  for (int i = 0; i < 1000; i++) {
    for (int j = 0; j < 1000; j++) {
      if (i * i + j == n and i + j * j == m)
        tmp++;
    }
  }
  cout << tmp << endl;
  // tmp = 0;
  return 0;
}
