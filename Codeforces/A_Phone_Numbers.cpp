#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {
  int a;
  string s;
  cin>>a>>s;

  int ei=0;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='8')
    {
      ei++;
    }
  }
  //cout<<ei;
  int len=s.size();
  if(ei!=0)
  {
    if(ei>=a/11) cout<<a/11<<endl;
    else cout<<ei<<endl;
  }
  else
  {
    cout<<"0"<<endl;
  }
  return 0;
}
