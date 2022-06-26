/**
 *    @author: Ab_ohab
 *    created: 30.03.2021 10:23:29
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
  while (n--) {
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll x1,x2;
      x1=y-x;
      x2=a+b;
      if(x1%x2==0)
      {
        cout<<x1/x2<<endl;
      }
      else
      {
        cout<<-1<<endl;
      }
  }
  return 0;
}
