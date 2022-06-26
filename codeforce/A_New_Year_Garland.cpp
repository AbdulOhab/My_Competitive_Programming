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

void solve()
{
 vector<int>v(3);
 cin>>v[0]>>v[1]>>v[2];
 sort(v.begin(),v.end());
 if(v[0]+v[1]<v[2]-1)
 {
   cout<<"No\n";
 }
 else
 {
   cout<<"Yes\n";
 }
}
int main(int argc, char const *argv[]) {
  //ios;
  // #ifndef ONLINE_JUDGE
  // freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
  // freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
  // #endif
  int n;
  cin>>n;
  while(n--)
  {
    solve();
  }
  return 0;
}
