#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  //::sync_with_stdio(false);a
  //cin.tie(NULL);
  int n;
  cin >>n;
  int sum=0;
  int evencnt=0;
  vector<int>v = { 3 ,5 ,7 ,11 ,13 ,17 ,19 ,23 ,29 ,31 ,37 ,41 ,43 ,47};
  //vector<int>v;
  std::vector<int>::iterator it;
  // for(int i=0;i<n;i++)
  // {
  //   int b;
  //   cin >>b;
  //   v.push_back(b);
  // }
  for(int i=0;i<n;i++)
  {
    int b;
    cin >>b;
    //std::vector<int>::iterator it = std::find(v.begin(), v.end(), b);
    //it = std::find (v2.begin(),v2.end(),b);
    auto it = std::find(v.begin(), v.end(), b);
    if(it==b)
    {
      sum+=b;
    }
    else
    {
      evencnt++;
      cout<<b<<endl;
      sum+=b;

    }
  }
  //cout<<sum-evencnt<<endl;
  //cout<<sum<<"sum"<<endl;
  //<<evencnt<<endl;
  return 0;
}
