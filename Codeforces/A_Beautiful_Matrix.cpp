/**
 *    @author: Ab_ohab
 *    created: 04.04.2021 22:04:29 Sa
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
  int arr[10][10];
  int P,Q;
  for(int i=1;i<6;i++)
  {
    for(int j=1;j<6;j++)
    {
      cin>>arr[i][j];
      if(arr[i][j]==1)
      {
        P = i;
        Q = j;
      }
    }
  }
  cout<<abs(P-3)+abs(Q-3)<<endl;
  return 0;
}
