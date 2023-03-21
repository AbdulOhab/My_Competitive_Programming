/**
 *    @author: Ab_ohab
 *    created: 02.04.2021 10:04:29 fr
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
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  int a;
  cin>>a;
  int arr[a];
  for(int i=0;i<a;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+a);
  for(int j=0;j<a;j++)
  {
    cout<<arr[j]<<" ";
  }
  return 0;
}
