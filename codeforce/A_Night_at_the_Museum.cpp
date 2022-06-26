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
  int ans = 0;
  char pos = 'a';
  int l=1;
  for(int i=0;i<s.size();i++)
  {
    int a=s[i] - 96;
    //cout<<"a"<<a<<endl;
    int b=abs(a-l);
    //cout<<"b"<<b<<endl;
    int c=(26-abs(l-a));
    //cout<<"c"<<c<<endl;
    ans+=min(b,c);
    l=a;
  }
  cout<<ans<<endl;
  return 0;
}
