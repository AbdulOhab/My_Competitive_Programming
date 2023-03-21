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

ll n,ans=LLONG_MAX;
void solve()
{

  //ll n,ans;
  cin>>n;

  int r = sqrtl(n);

  for(int i=1;i<=r;i++){

    if(n%i) continue;
    ll d1= i, d2=n/i;
    ans = min(ans,d1+d2 -2);
  }
  cout<<ans;
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
