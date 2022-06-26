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

  int n;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    int len=s.size();
    int t1=0,t=0;
    for(int j=0;j<len;j++)
    {
      int t2=0;
      for(int k=0;k<len;k++)
      {
        if(s[j]==s[k])t2++;
      }
      if(t2==(len-t2))
      {
        cout<<"YES"<<endl;
        t1=1;
        break;
      }
    }

    if(!t1)
    {
      cout<<"NO"<<endl;
    }

  }
  return 0;
}
