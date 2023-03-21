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

void solver()
{
  int n;
  cin>>n;
  vector<int> v;
  vector<int> v2;
  for(int i=0;i<n;i++)
  {
    int t;
    cin>>t;
    v.push_back(t);
  }
  //reverse(all(v));
  int updat=v[n-1];
  //cout<<updat;
  for(int i=n-1;i>=0;i--)
 {
   if(v[i]>=updat) updat=v[i];
   if(updat>0 and updat>=v[i])
   {
     v2.push_back(1);
     updat--;
   }
   else
   {
     v2.push_back(0);
   }
 }
 reverse(all(v2));
 for(auto u : v2) cout<< u <<" ";
 cout<<endl;
}
int main(int argc, char const *argv[])
{
   optimize();
   int test;
   cin>>test;
   while (test--) {
     solver();
   }
   return 0;
}
