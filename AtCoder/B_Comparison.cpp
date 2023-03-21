#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
int main()
{
  string a,b;
  std::cin >> a>>b;
  if(a==b)
  {
    cout<<"EQUAL"<<endl;
  }
  else if(a.size()>b.size())
  {
    cout<<"GREATER"<<endl;
  }
  else if(a.size()<b.size())
  {
    cout<<"LESS"<<endl;
  }
  else if(a.size()==b.size())
  {
    if(a>b)
    {
      cout<<"GREATER"<<endl;
    }
    else if(a<b)
    {
      cout<<"LESS"<<endl;
    }
  }
  return 0;
}
