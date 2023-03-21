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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

//B-Nuts
int main()
{
  optimize();
  ll n;
  cin>>n;
  int arr[n];
  for(int &i:arr) cin>>i;
  //for(auto u:arr) cout<<u<<" ";
  ll ans=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<10) continue;
    else
    {
      int T = arr[i] - 10;
      ans+= T;
    }
  }
  cout<<ans<<endl;
  return 0;
}
