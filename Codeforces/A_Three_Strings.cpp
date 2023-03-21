/**
 *    @author: Ab_ohab
 *    created: 30.03.2021 09:20:29
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include<cmath>
#include<math.h>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

void solve()
{
  string a,b,c;
  cin>>a>>b>>c;
  for(int i=0;i<a.size();i++)
  {
    if(c[i]!=b[i] and c[i]!=a[i])
    {
    puts("NO");
    return;
    }
  }
  puts("YES");
  return;
}

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a;
  cin>>a;
  while(a--)
  {
    solve();
  }
  return 0;
}
