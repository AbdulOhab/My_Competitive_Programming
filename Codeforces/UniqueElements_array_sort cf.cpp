#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {
  int a;
  cin >> a;
  int arr[a];
  int cnt = 0;
  unordered_map<int, int> v;

  for (auto i = 0; i < a; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + a);

  for (int i = 0; i < a; i++) {
    v[arr[i]]++;
  }

  // for (auto it = v.begin(); it != v.end(); it++) {
  //   cout << it->second << " ";
  // }

  for (auto it = v.begin(); it != v.end(); it++) {
    if (it->second == 1) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}
