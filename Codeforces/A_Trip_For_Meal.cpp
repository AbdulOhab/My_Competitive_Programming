/**
 *    @author: Ab_ohab
 *    created: 08.04.2021 12:26:29 th
**/
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
  // int a,b,c,d;
  // cin>>a>>b>>c>>d;
  //
  // int r = min(b,min(c,d));
  // if(a==1) cout<<"0"<<endl;
  // else
  // {
  //   if(r==b or r==c) cout<<(a-1)*r;
  //   else cout<<(min(b,c)+max(0,(a-2)*r));
  // }
  int n,a,b,c;
cin>>n>>a>>b>>c;
cout<<max(min(min(a,b)*(n-1),min(a,b)+c*(n-2)),0);

  return 0;
}
