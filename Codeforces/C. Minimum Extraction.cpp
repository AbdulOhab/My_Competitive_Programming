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
  int arr[n];
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  int peek= arr[0];
  for (size_t i = 1; i < n; i++) {
    peek= max(peek,arr[i]-arr[i-1]);
    //cout<< arr[i]<<"  "<< arr[i-1]<<" "<<arr[i]-arr[i-1]<<endl;
  }
  cout<<peek<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   int T = 1;
   //int T;
   //cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
