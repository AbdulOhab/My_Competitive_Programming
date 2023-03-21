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

  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='.') break;
    else cout<<s[i];
  }
  cout<<endl;
  return 0;
}
