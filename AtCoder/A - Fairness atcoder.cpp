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
  ll a, b, c, k;
  ll ans = 0;
  cin >> a >> b >> c >> k;

  if (k % 2 == 0) {
    ans = a - b;
  } else {
    ans = b - a;
  }
  cout << ans << endl;
  return 0;
}
