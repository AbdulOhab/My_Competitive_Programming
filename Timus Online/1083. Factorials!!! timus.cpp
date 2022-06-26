#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
  string k;
  int n;
  long long  v=1;
  cin>>n;
  cin>>k;
  int h=k.length();
  int l=n%h;
  if(l)
  for(int i=n;i>=l;i-=h)
  {
    v=v*i;
  }
  else
  for(int i=n;i>=h;i-=h)
  {
    v=v*i;
  }

  cout<<v<<endl;;
  return 0;
}
