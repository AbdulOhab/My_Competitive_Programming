/*
 *    @author: Ab_ohab
 *    created: 28.03.2021 07:14:29
*/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

const int N = 110;
string s[N];
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a;
  cin>>a;
  for(int i=0;i<a;i++)
  {
    ull a;
    cin>>a;
    //ll len=a.size();
    if(a % 2 == 0 && a % 4 != 0)
    {
      cout<<"Same"<<endl;
    }
    else if(a%2!=0)
    {
      cout<<"Odd"<<endl;
    }
    else
    {
      cout<<"Even"<<endl;
    }
  }
  return 0;
}
