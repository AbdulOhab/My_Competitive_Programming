#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
  optimize();
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> dp(n, vector<bool>(n, false));

  for (int i = 0; i < m; i++) {
    int N;
    cin >> N;
    vector<int> v(N);
    for (int j = 0; j < N; j++) {
      cin >> v[j];
      v[j]--;
    }

    for (int j = 0; j < N; j++) {
      for (int l = 0; l < N; l++) {
        dp[v[j]][v[l]] = true;
      }
    }
  }

  // cout << "this is test" << endl;
  // for (int i = 0; i < n ; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << check[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j] == false) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}
