/**
 *    @author: Ab_ohab
 *    created: 02.04.2021 11:37:29 thursday
**/
//codeforces
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  int a;
  cin >> a;
  while(a--)
  {
    int b,n;
    cin>>b>>n;
    ll cnt=0;
    while(n>0 and b>0)
    {
      if(n>b)
      {
        cnt+=n/b;
        //cout<<" cnt "<<cnt<<endl;
        n-=(n/b)*b;
        //cout<<" n "<<n<<endl;
      }
      else{
        cnt+=b/n;
        b-=(b/n)*n;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
