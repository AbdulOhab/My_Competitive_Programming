#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int trianfle(int a)
{
  if(a>=0 and a<=3)
  return 0;
  else
  int t=a/2;
  return a-t;
}

int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    cout<<trianfle(a)<<endl;
  }
  return 0;
}
