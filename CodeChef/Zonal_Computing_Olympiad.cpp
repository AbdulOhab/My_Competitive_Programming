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
  int n;
  cin>>n;
  ll arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  ll mx=-1,t;
  for(ll j=0;j<n;j++)
  {
    t=arr[j]*(n-j);
    if(t>mx)
    {
      mx=t;
    }
  }
  cout<<mx<<endl;
  return 0;
}
