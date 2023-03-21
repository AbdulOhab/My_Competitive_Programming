#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(int argc, char const *argv[])
{
   optimize();
   int n;
   cin>> n;
   vector<pair<ll,ll>> p(n);
   for(auto &x : p){
     cin>>x.first >> x.second;
   }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      for (int k = j+1; k < n; k++) {
        if((p[j].first-p[i].first)*(p[k].second-p[i].second)-(p[k].first-p[i].first)*(p[j].second-p[i].second)!=0){
          cnt++;
        }
      }
    }
  }
  cout<<cnt<<endl;
  return 0;
}
