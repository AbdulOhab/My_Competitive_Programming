/**
 *    @author: Ab_ohab
 *    created: 05.04.2021 21:04:29 sa
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
const int N=101;
int main(int argc, char const *argv[]) {
  ios;
  int s;
  int srr[N][N];
  cin>> s;
  vector<int> ans;
  for (size_t i = 1; i <=s; i++) {
    int x=0;
    for (size_t j=1;j<=s;j++)
    {
      cin>>srr[i][j];
      if(srr[i][j]==1 || srr[i][j]==3) x++;
    }
    if(x==0) ans.push_back(i);
  }
  cout<<ans.size()<<endl;
  for (auto i = ans.begin(); i!=ans.end(); i++) {
  cout<<*i<<" ";
 }
  return 0;
}
