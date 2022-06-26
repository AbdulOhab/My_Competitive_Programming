#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(){
  int n;
  cin>>n;
  set<int>v;
  for(int i=0;i<n;i++)
  {
    int a,b;
    cin>>a;
    v.insert(a);
  }
  cout<<v.size()<<endl;
}
