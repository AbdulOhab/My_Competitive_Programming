#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {

  int a,b;
  cin >> a>>b;
  int c=a+b;
  if(b>=8 and c>=15)
  {
      cout<<1<<endl;
  }
  else if(b>=3 and c>=10 )
  {
      cout<<2<<endl;
  }
  else if(c>=3)
  {
      cout<<3<<endl;
  }
  else
  {
    cout<<4<<endl;
  }
  return 0;
}
