/**
 *    @author: Ab_ohab
 *    created: 03.04.2021 00:31:29 sa
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int a,b,c,sum,ans;
int main(int argc, char const *argv[]) {
  ios;
  cin>> a>>b>>c;
  while(a--){
    int x;
    cin>>x;
    if(x<=b) sum=sum+x;
    if(sum>c) ans++,sum=0;
  }
  cout<<ans<<endl;
  return 0;
}
