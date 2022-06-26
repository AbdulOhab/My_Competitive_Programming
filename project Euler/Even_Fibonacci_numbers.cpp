//Even Fibonacci numbers
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
  ull n,a;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    ull first=1,second=2;
    ull s=0;
    while(second<=a)
    {
       if(second%2==0) s+=second;
        auto nx=first+second;
        first=second;
        second=nx;
    }
    cout<<s<<endl;
  }
  return 0;
}
