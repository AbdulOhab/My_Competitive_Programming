/**
 *    @author: Ab_ohab
 *    created: 1.04.2021 15:37:29 thursday
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
  int k;
  vector<int>wa;
  cin>>k;
  for(auto i=0;i<12;i++)
  {
    int temp;
    cin>>temp;
    wa.push_back(temp);
  }
  int n=wa.size();
  sort(wa.begin(),wa.end());
  int sum=0;

  if(k==0)
  {
    cout<<0<<endl;
  }
  else{
    for (size_t i = 11; i>=0; i--) {
    sum+=wa[i];
    if(sum>=k)
    {
      cout<<12-i<<endl;
      break;
    }
    if(i==0)
    {
      cout<<-1<<endl;
      break;
    }
  }
}
  return 0;
}
