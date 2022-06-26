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

  int n;
  vector<int>v1;
  vector<int>v2;
  std::vector<int>::iterator it;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v1.push_back(a);
    v2.push_back(a);
  }
  sort(v1.begin(), v1.end(), greater<int>());
  // for (int i = 0; i < v1.size(); i++)
  //       cout << v1[i] << "
  int f=v1[0];
  int flag(0);
  for(auto j=0;j<n;j++)
  // {
  //   if(f=v2[j]) break;
  //   else flag++;
  // }
  it =find(v2.begin(),v2.end(),f);
  int index=distance(v2.begin(),it);
  cout<<index+1<<" "<< v1[1]<<endl;
  return 0;
}
