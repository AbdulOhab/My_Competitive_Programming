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
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int m, n;
    cin >> m >> n;
    if (m == 1 or n == 1) {
      cout << "Case " << i << ": " << max(n, m) << endl;
    }
    else if (n == 2 or m == 2) {
      cout << "Case " << i << ": "<< ((m * n) / 8) * 4 + (((m * n) % 8) >= 4 ? 4 : (m * n) % 8)<< endl;
    }
    else {
      cout << "Case " << i << ": " << (m * n + 1) / 2 << endl;
    }
  }
}
