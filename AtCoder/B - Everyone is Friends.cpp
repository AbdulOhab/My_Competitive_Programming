#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 200;
int solve(){
  int n; // number of people;
  int m; // Number of partey
  cin >> n >> m;
  bool dp[N][N];
  // memset(dp, 0, sizeof(dp));


  for (int i = 1; i <= m; i++) {
    int total_people;
    cin >> total_people;

    for (int t = 1; t <= total_people; t++) {
      int people;
      cin >> people;
      dp[i][people] = people;
    }
  }

  int tool1 = 0;
  int tool2 = 0;
  bool java = true;

  for (int i = 1; i <= n; i++) {
    // for (int j = 1; j <= n; j++) {
    //   if (dp[i][j] == true)
    //     tool1++;
    // }
    for (int t = 1; t <= n; t++) {
      if (dp[t][i] == true)
        tool2++;
    }
    if (tool2>=2) {
      continue;
    }
    else {
      java = false;
    }
  }
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= n; j++) {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << "\n";
  // }

  // if(n == tool1) java == true;
  // else false;
  return java;
}

int main(int argc, char const *argv[]) {
  optimize();

  if(solve()) cout<<"Yes";
  else cout << "No";


  return 0;
}
