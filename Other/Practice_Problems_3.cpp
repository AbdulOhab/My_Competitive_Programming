#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

ll s(int n)
{
  long long sum=0;
  for(int i=0;i<n;i++)
  {
    sum=i*i;
  }
  return sum;
}
int main(int argc, char const *argv[]) {

  for(int i=1;i<=100;i++)
  {
    cout<<s(i)<<" + ";
  }
  return 0;
}
