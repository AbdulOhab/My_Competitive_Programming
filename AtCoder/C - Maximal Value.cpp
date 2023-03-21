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
  int a,n;
  int flag = 0;
  cin>>a;
  std::vector<int> v(a-1);
  for (size_t i = 0; i < a-1; i++) {
    cin>>v[i];
  }
  std::vector<int> v;
  cout<<flag<<endl;

}

int main(int argc, char const *argv[])
{
   optimize();
   int T = 1;
   while (T--) {
     solve();
   }
   return 0;
}
