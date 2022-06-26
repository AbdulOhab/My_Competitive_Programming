/**
 *    @author: Ab_ohab
 *    created: 05.04.2021 14:04:29 Mo
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <array>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  int a;
  string s;
  cin>>a>>s;
  for(int i=0;i<a;i++)
  {
    if(s[i]=='0')
    {
      a=i+1;
    }
  }
  cout<<a<<endl;
  return 0;
}
