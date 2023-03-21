#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
int main(int argc, char const *argv[])
{
  int a,b;
  cin>>a;
  vector<int> v;
  for(int i=0;i<a;i++){
    int a;
    cin>>a;
    v.push_back(a);
  }
  sort(v.begin(),v.end());
  cout<<min(v[a-2]-v[0],v[a-1]-v[1])<<endl;
}
