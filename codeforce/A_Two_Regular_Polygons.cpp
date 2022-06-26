/**
 *    @author: Ab_ohab
 *    created: 27.03.2021 12:04:29
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
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='.')
    {
      cout<<"0";
    }
    else if(s[i]== '-' and s[i+1]== '.')
    {
      cout<<"1";
      i++;
    }
    else if(s[i]== '-' and s[i+1]== '-')
    {
      cout<<"2";
      i++;
    }
  }
  return 0;
}
