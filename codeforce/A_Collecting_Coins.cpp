/**
 *    @author: Ab_ohab
 *    created: 29.03.2021 19:09:29
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

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int a,b,c,v;
  for(int i=0;i<n;i++)
  {
    cin>>a>>b>>c>>v;
    if((a+b+c+v)%3 || (a+b+c+v)/3<max(a,max(b,c)))
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
// pased only one test case
// int main(int argc, char const *argv[]) {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//   int n;
//   cin>>n;
//   int a,b,c,v;
//   for(int i=0;i<n;i++)
//   {
//
//     cin>>a>>b>>c>>v;
//     ull ans;
//     ans=(a+b+c+v)/3;
//     cout<<"Case" <<i<<":"<<ans<<endl;
//     // if(ans%2==0)
//     // {
//     //   cout<<"YES"<<endl;
//     // }
//     // else{
//     //   cout<<"NO"<<endl;
//     // }
//   }
//   return 0;
// }
