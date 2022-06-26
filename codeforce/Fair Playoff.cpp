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
  int arr[4],arr1[4];
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

  copy(begin(arr), end(arr), begin(arr1));
  sort(arr1,arr1+4);

  int fair1 = max(arr[0],arr[1]);
  int fair2 = max(arr[2],arr[3]);

  if((fair1 == arr1[2] or fair1 == arr1[3]) and (fair2 == arr1[2] or fair2 == arr1[3]))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}

int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
