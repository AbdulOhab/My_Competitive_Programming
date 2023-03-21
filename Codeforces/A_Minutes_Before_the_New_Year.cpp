#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define EDay 24*3600

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int hour,second;
    cin>>hour>>second;
    cout<<1440-60*hour-second<<endl;
  }
}
