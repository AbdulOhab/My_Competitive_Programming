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
  int n;
  cin>>n;
  double sum=0;
  int b=-999999999;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin>>a;
    b = max(b,a);
    sum+=a;
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(9);
  std::cout << b + (double)(sum-b)/(n-1)<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin >> t;
   while (t--)
   {
     solve();
   }
   return 0;
}
