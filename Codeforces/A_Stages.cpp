#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  // #ifndef ONLINE_JUDGE
  // freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
  // freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
  // #endif
  int n,k;
  string s;
  cin>>n>>k>>s;
  sort(s.begin(),s.end());
  char last='a'-2;
  cout<<last;
  return 0;
}
