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
  int arr[5][5]={0};
  int P,Q;
  for(int i=1;i<4;i++)
  {
    for(int j=1;j<4;j++)
    {
      cin>>arr[i][j];
    }
  }
  for(int i=1;i<4;i++)
  {
    for(int j=1;j<4;j++)
    {
      printf("%d",(arr[i][j]+arr[i][j-1]+arr[i][j+1]+arr[i-1][j]+arr[i+1][j]+1)%2);
    }
    printf("\n");
  }
  return 0;
}
