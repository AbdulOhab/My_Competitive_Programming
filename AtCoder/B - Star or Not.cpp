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
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

void solve()
{
  ll n;
  cin>>n;

  std::vector<int> v(n+1);
   for (size_t i = 1; i <= n-1; i++) {
     ll a,b;
     cin>>a>>b;
     v[a]++;
     v[b]++;
   }
   for (size_t i = 1; i <=n; i++) {
     if(v[i] == n-1){
       cout<<"Yes"<<endl;
       return;
     }
   }
   std::cout << "No" << '\n';
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   int T = 1;
   //int T; cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
