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
   ll x1,x2;
   ll y1,y2;
   cin>>x1>>x2>>y1>>y2;

   ll l1,l2;
   l1=abs((x1+8)-(y1+8));
   l2=abs((x2+8)-(y2+8));
   cout<<max(l2,l1)<<endl;
  return 0;
}
