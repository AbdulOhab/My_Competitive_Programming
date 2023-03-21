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
  int n,t,f,ans;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  cin>>t;
  while(t--)
  {
    cin>>f;
    ans = upper_bound(arr,arr+n,f)-arr;
    cout <<ans<<endl;
  }
}

int main(int argc, char const *argv[])
{
   optimize();
   solve();
   return 0;
}
