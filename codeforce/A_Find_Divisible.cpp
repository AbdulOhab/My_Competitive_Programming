#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main() {
  int n;
  cin>>n;
  long long int a,b;
  for(int i=0;i<n;i++)
  {
    cin>>a>>b;
    if((a+a)<=b)
    {
      cout << a << " " << a+a <<endl;
    }
  }
  return 0;
}
