/**
 *    @author: Ab_ohab
 *    created: 02.04.2021 10:04:29 fr
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
  // while(1)
  // {
  int a,b;
  cin>>a>>b;
  // ll t=a/2;
  // ll k=t*b;
  // if(k%b==0) k--;
  // cout<<k<<endl;
  int c=(a*b)/(b-1);
  if(c%b==0) c--;
  cout<<c<<endl;
  // }
  return 0;
}
