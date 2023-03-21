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
  int a;
  string s;
  cin>>a>>s;
  int j=2;
  for(int i=0;i<a;)
  {
    cout<<s.at(i);
    i=i+j;
    j++;
  }
  cout<<endl;
  return 0;
}
