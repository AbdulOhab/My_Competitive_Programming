///===========================///
///                           ///
///    ID     :ab_ohab        ///
///                           ///
///                           ///
///===========================///
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  ll n, k;
  cin >> n >> k;
  // std::vector<int> v;
  // for (auto i = 0; i <= n; i ++) {
  //   if (i % 2 == 1) {
  //     v.push_back(i);
  //     //cout << i <<" ";
  //   }
  // }
  // for (auto i = 1; i < n; i ++) {
  //   if (i % 2 == 0) {
  //     v.push_back(i);
  //     //cout << i <<" ";
  //   }
  // }
  // //cout<<endl;
  // cout<<v[a-1]<<endl;
  // n,k;
   if(k<=(n+1)/2)
   {
     cout<<k*2-1;
   }
   else
   {
     cout<<((k)-(n+1)/2)*2;
   }
  return 0;
}
