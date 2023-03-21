#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(){
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int a,b;
    cin>>a>>b;
    int res=__gcd(a,b);
    cout<<"Case "<<i<<": "<<res+1<<endl;
  }
}
