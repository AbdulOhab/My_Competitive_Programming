#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

main()
{
  int a,b,c;
  cin>>a>>b>>c;
    if(c==0)
    {
      if(a>b)
      {
        cout<<"Takahashi";
      }
      else
      {
        cout<<"Aoki";
      }
    }
    if(c==1)
    {
      if(a>=b)
      {
        cout<<"Takahashi";
      }
      else
      {
        cout<<"Aoki";
      }
    }
      return 0;
  }
