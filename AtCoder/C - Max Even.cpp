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

void solve()
{
  ll n;
  cin>>n;
  vector<ll> v;
  for(ll i=0;i<n;i++){
    ll num;
    cin>>num;
    v.push_back(num);
  }
  //for(auto i:v)cout<<i<<endl;
  ll A = 0;
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      if(i==j){
        continue;
      }
      else{
        ll B = v[i] + v[j];
        if( B % 2 == 0){
          if(B>=A){ A = B;}
        }
      }
    }
  }
  if(A<=0) cout<< "-1"<<endl;
  else cout<<A;
}

int main(int argc, char const *argv[])
{
   optimize();
   int T=1;
   //cin>>T;
   // cin.ignore(); must be there when using getline(cin, s)
   while (T--) {
     solve();
   }
   return 0;
}
