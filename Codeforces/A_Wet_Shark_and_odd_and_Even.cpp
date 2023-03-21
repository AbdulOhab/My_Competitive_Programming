/**
 *    @author: Ab_ohab
 *    created: 06.04.2021 12:31:29 sa
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
  int a;
  cin>>a;
  vector<ull>v;
  for(int i=0;i<a;i++)
  {
  ll n;
  cin>>n;
  v.push_back(n);
  }
  sort(v.begin(),v.end());
  ull ans=0;
  for(auto i=0;i<a;i++)
  {
    ans=ans+v[i];
  }
  if(ans%2==0)
  {
    cout<<ans<<endl;
  }
  else
  {
    for(auto i=0;i<v.size();i++)
    {
      if(v[i]%2==1)
      {
        ans=ans-v[i];
      }
      if(ans%2==0)
      {
        cout<<ans<<endl;
        break;
      }
    }
  }
  return 0;
}
// long long n,m=1000000001,i,x,y;
// main(){
// 	cin>>n;
// for(i=0; i<n; i++){
// 	cin>>x;
// 	y=y+x;
// 	if(x%2==1 && m>x) m=x;
// }
// if(y%2==1) y=y-m;
// 	cout<<y;
// }
