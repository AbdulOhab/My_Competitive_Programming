/**
 *    @author: Ab_ohab
 *    created: 27.03.2021 00:38:29
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

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll num;
  while(cin >> num)
  {
    if(num==1)
    {
      cout<<"Special"<<endl;
    }
    else if(num==0)
    {
      return 0;
    }
    else
    {
      int i=2;
      ull t=0;
      //int num=100;
      while(t<num)
      {
        t=i*i*i*i*i*i;
        i++;
      }
      //cout<<t<<endl;
      if(num==t)
      {
        cout<<"Special"<<endl;
      }
      else
      {
        cout<<"Ordinary"<<endl;
      }
      //cout<<t<<endl;
    }
  }
  return 0;
}
