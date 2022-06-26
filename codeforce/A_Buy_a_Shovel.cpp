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
  int k,r;
  cin>>k>>r;
  int i=1;
  while(1)
  {
    if((k*i)%10 == r || (k*i)%10==0)
    {
      cout<<i<<endl;
      break;
    }
    i++;
  }
  return 0;
}
