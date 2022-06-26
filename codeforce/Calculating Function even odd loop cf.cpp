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
  ll n;
  cin >> n;
  if (n % 2 == 0) {
    cout << n / 2 << endl;
  } else {
    cout << n / 2 - n << endl;
  }
  // int even = 0;
  // int odd = 0;
  // for (auto i = 1; i <= n; i++) {
  //   if (i % 2 == 0) {
  //     even += i;
  //     // cout << i << " ";
  //   } else {
  //     odd += i;
  //   }
  // }
  // cout << odd << endl;
  // cout << even << endl;
  // cout << even - odd << endl;
  return 0;
}
