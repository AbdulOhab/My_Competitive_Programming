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

  int a,b;
  cin>>a>>b;
  bool color=false;
  for(int i=0;i<a;i++)
  {
    for (int j=0;j<b;j++)
    {
      char s;
      cin>>s;
      if(s=='C' || s=='M' || s=='Y')
    	{
    			color=true;
			}
    }
  }
  if(color)
  {
      cout<<"#Color"<<endl;
  }
  else
  {
    cout<<"#Black&White"<<endl;
  }
  return 0;
}
