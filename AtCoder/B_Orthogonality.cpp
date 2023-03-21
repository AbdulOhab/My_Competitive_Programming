#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
  int n;
  cin>>n;
  ll arr1[n],arr2[n];
  ll l=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>arr2[i];
  }
  for(int j=0;j<n;j++)
  {
    l+=arr1[j]*arr2[j];
  }
  if(l==0)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"No"<<endl;
  }
  return 0;
}
