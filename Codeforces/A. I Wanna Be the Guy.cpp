#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <set>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
  int s,t,u;
  set<int>arr;
  cin>>s>>t;
  for(int i=0;i<t;i++)
  {
    int a;
    cin>>a;
    arr.insert(a);
  }
  cin>>u;
  for(int j=0;j<u;j++)
  {
    int b;
    cin>>b;
    arr.insert(b);
  }
  if(arr.size()==s)
  {
      cout<<"I become the guy."<<endl;
  }
  else
  {
     cout<<"Oh, my keyboard!"<<endl;

  }
  return 0;
}
