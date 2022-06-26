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
  int n;
  cin >> n;
  int s = 0;
  int cunt = 0;
  while (s <= n) {
    s = s + (cunt * (cunt + 1)) / 2;
    if (s > n)
      break;
    cunt++;
  }
  cout << cunt - 1 << endl;
  return 0;
}
