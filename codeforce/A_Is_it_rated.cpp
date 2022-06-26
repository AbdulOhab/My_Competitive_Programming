/**
 *    @author: Ab_ohab
 *    created: 02.04.2021 10:04:29 fr
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

main(int argc, char const *argv[]) {
  ios;
  int a;
  cin>>a;
  int t=0;
  int t1=0;
  std::vector<int> v;
  std::vector<int> v1;
  for(int i=0;i<a;i++)
  { int a,b;
    cin>>a>>b;
    v.push_back(a);
    v1.push_back(b);
  }
  int len=v.size();
  for(int i=0;i<len;i++)
  {
      if(v[i]!=v1[i])
      {
        cout<<"rated\n";
        return 0;
      }
  }
  for(int j=0;j<len;j++)
  {
      if(v[j]>v1[j-1])
      {
        cout<<"unrated\n";
        return 0;
      }
    }
  cout<<"maybe\n";
  // int len=v.size()*2;
  // for(int i=0;i<len;i++)
  // {
  //   if(a==b)
  //   {
  //   }
  //   else if(a!=b)
  //   {
  //     t++;
  //   }
  //
  // }
  // if(t==0)
  // {
  //   cout<<"unrated\n";
  // }
  // else if(t==1)
  // {
  //   cout<<"maybe\n";
  // }
  // else if(t>=2)
  // {
  //   cout<<"rated\n";
  // }
  return 0;
}
