#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
  int n;
  cin>>n;
  int i=1;
  while(n--)
  {
    ll a,b,c;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c)
    {
      cout<<"Case "<<i<<": yes"<<endl;
    }
    else if(b*b+c*c==a*a)
    {
      cout<<"Case "<<i<<": yes"<<endl;
    }
    else if(c*c+a*a==b*b)
    {
      cout<<"Case "<<i<<": yes"<<endl;
    }
    else{
      cout<<"Case "<<i<<": no"<<endl;
    }
    i++;
  }
}
// 2
// 36 77 85
// 40 55 69
