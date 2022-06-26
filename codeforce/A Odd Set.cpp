#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
  int n;
  cin>>n;
  int x=0;
  for(int i=0;i<2*n;i++)
  {
    int t;
    cin>>t;
    if(t % 2 == 1 ) x++;
  }
  if(x==n) cout << "Yes" <<endl;
  else cout << "No" << endl;
}
int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin>>t;
   while (t--) {
     solve();
   }
   return 0;
}
