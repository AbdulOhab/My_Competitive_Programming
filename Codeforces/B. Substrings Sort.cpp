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

bool comp(string a,string b)
{
   return a.size()<b.size();
}

void solve()
{
  int n;
  cin>>n;
  string arr[n];
  for (size_t i = 0; i < n; i++) {
    cin>>arr[i];
  }
  sort(arr,arr+n,comp);

  //for(auto u:arr) cout<< u <<endl;
  bool flag=1;
  for (size_t i = 1; i < n; i++) {
    if(arr[i].find(arr[i-1]) == string::npos) flag=0;
  }
  if(flag)
  {
    cout<<"YES"<<endl;
    for(auto u:arr) cout<<u<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }



}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   int T = 1;
   // int T;
   // cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
