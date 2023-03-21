#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {

  int a;
  cin>>a;
  vector<int>v;
  vector<int>v1;
  set<int>se;
  for(int i=0;i<a;i++)
  {
    int k;
    cin>>k;
    v.push_back(k);
  }
  for(int i=a-1;i>=0;i--)
  {
    if(se.count(v[i])) continue;
    v1.push_back(v[i]);
    se.insert(v[i]);
  }
  reverse(v1.begin(),v1.end());
  cout<<v1.size()<<endl;
  for (auto it = v1.begin(); it !=v1.end(); ++it)
          cout <<*it<< ' ';
  return 0;
}
