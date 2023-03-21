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
  string s;
  cin >> s;

  bool digit = false;
  bool a = false;
  bool A = false;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= '0' && s[i] <= '9')
      digit = true;
    if (s[i] >= 'a' && s[i] <= 'z')
      a = true;
    if (s[i] >= 'A' && s[i] <= 'Z')
      A = true;
  }
  if (s.size() > 4 && a && A && digit) {
    cout << "Correct\n";
  } else {
    cout << "Too weak\n";
  }
  return 0;
}
