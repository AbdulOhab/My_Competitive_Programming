//A. Avoiding Zero
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
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

void solve()
{
  int t;
  cin>>t;
  int arr[t];
  ll ans=0;
  for(int i=0;i<t;i++)
  {
    cin>>arr[i];
    ans+=arr[i];
  }

  if(ans==0) cout<<"NO"<<endl;
  else
  {
    cout<<"YES"<<endl;
    if(ans>0) sort(arr,arr+t, greater<int> ());
    else sort(arr,arr+t);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
  }
}
int main(int argc, char const *argv[])
{
   optimize();
   int n;
   cin>>n;
   while(n--) solve();
  return 0;
}
