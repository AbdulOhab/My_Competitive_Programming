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

  string s;
  cin>>s;
  int a=3,b=3;
  if(s[0]=='a' || s[0]=='h')
  {
    a--;
  }
  if(s[1]=='1' or s[1]=='8')
  {
    b--;
  }
  cout<<(a*b)-1<<endl;
  return 0;
}
