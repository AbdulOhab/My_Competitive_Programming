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
  long int a,b;
  cin>>a>>b;
  //int n1=0;
  //int n2=0;
  //n1=n1+a;
  //n2=n2+b;
  // cout<<n1<<endl;
  // cout<<n2<<endl;
  //for(int i=1;i<=max(a,b);i++)
  int i=1;
  while(1)
  {
    if(i%2)
    {
      if(a<i)  {
        cout<<"Vladik"<<endl;
        break;
      }
      a=a-i;
    }
    else
    {
      if(b<i)
      {
        cout<<"Valera"<<endl;
        break;
      }
      b=b-i;
    }
    i++;
  }
  //cout<<n1<<endl;
  //cout<<n2<<endl;
  // if(n1==0)
  // {
  //   cout<<"Valera"<<endl;
  // }
  // else
  // {
  //   cout<<"Vladik"<<endl;
  // }
  return 0;
}
