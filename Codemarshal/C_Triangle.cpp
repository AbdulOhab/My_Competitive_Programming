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

int main() {
  ios;
  int a,b,c;
  cin>>a>>b>>c;
  if(a==b || b==c)
  {
    cout<<"Equilateral Triangle\n";
  }
  else if(a==b || b==c || c==a)
  {
    cout<<"Isosceles Triangle\n";
  }
  else{
    cout<<"Bad Triangle\n";
  }
  return 0;
}
//no 3
