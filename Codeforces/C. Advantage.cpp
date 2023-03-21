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
  int n;
  cin>>n;
  int arr[n];
  int arr2[n];
  int arr3[n];

  for(int i=0;i<n;i++){
    int t;
    cin>>t;
    arr[i] = t;
    arr2[i] = t;
  }

  sort(arr, arr+n,greater<int>());
  int first = arr[0];
  int secoond = arr[1];

  for(int i=0;i<n;i++){
    if(first> arr2[i]){
      arr3[i] = (arr2[i]-first);
    }
    else{
      arr3[i] = (first-secoond);
    }
  }
  for(auto i:arr3) cout<<i<<" ";
  cout<<endl;
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
