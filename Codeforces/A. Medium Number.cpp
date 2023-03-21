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
  int n = 3;
  int arr[n];
  cin>>arr[0]>>arr[1]>>arr[2];
  sort(arr, arr + n);
  cout<<arr[1]<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   // cin.ignore(); must be there when using getline(cin, s)
   while (T--) {
     solve();
   }
   return 0;
}
