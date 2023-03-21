/**
 *    @author: Ab_ohab
 *    created: 06.04.2021 11:53:29 sa
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

int main(int argc, char const *argv[]) {
  ios;
  int n;
  string a,b;
  cin>>n>>a>>b;
  if(b[0]== 'w')
  {
    if(5<=n and n<=6) cout<<"53"<<endl;
    else cout<<"52"<<endl;
  }
  else{
    if(n==31) cout<<"7"<<endl;
    else if(n==30) cout<<"11"<<endl;
    else cout<<"12"<<endl;
  }
  return 0;
}
