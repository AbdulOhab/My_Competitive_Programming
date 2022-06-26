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
   ull a;
  cin>>a;
  if(a%2==0)
  {
    ull t=a+2;
    ull y=t/2;
    //cout<<ceil(y)<<endl;
    cout<<y<<endl;
  }
  else
  {
    ull t=a+1;
    ull y=t/2;
    //cout<<ceil(y)<<endl;
    cout<<y<<endl;
  }
  return 0;
}
