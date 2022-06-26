#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {
  int a;
  string s;
  cin>>a>>s;

  int plus=0;
  int minaus=0;
  for(int i=0;i<a;i++)
  {
    if(s[i]=='+') plus++;
    else plus--;

    if(plus==-1)
    {
      plus=0;
    }
  }
  cout<<plus<<endl;
  return 0;
}
