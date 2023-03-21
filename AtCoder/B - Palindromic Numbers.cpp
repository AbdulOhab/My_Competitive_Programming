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
  int a, b;
  int ans = 0;
  cin >> a >> b;

  for (int i = a; i <= b; i++) {
    string s = to_string(i);
    string t = to_string(i);
    reverse(t.begin(), t.end());
    if (s == t) {
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
