#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <climits>
//#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {

  int n,h,x;
  cin>>n>>h>>x;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int mx=arr[0];
  for(int j=0;j<n;j++)
  {
    if(mx<arr[j])
    {
      mx=arr[j];
    }
  }
  //cout<<mx;
  int Chef=mx+x;
  if(Chef>=h)
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
  return 0;
}
