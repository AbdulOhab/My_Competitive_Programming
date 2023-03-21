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
  cin>>a;
  ll t1=0,t2=0;
  for(int i=0;i<a;i++)
  {
    int v;
    cin>>v;
    if(v>0) t1++;
    else if(v<0) t2++;
  }
  //int d=(int)(a/2+0.5);
  if(t1*2>=a) cout << 1;
  else if(t2*2>=a)  cout << -1;
  else cout<<0<<endl;
  return 0;
}
