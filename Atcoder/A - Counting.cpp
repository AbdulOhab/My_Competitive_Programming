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
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
  int a,b;
  cin>>a>>b;
  if(b>a)
  {
  int ans =b-a;
  cout<<ans+1;
  }
  else
  {
  cout<<"0"<<endl;
  }
}

int main(int argc, char const *argv[])
{
   optimize();
   int T = 1;
//   int T;
//   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
