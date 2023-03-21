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
  for(int i= 0;i<n;i++){
    cin>>arr[i];
  }
  int n1 = arr[0];
  int r  = arr[n-1];
  for(int j=0;j<n;j++){
    if(n%2 == 0){
      if( n1>0 and r == (n-1) and arr[n/2+1]<r){
        cout<<"Yes"<<endl;
      }
    }
    else{
      if( n1>0 and r == (n-1) and arr[n/2]<r){
        cout<<"Yes"<<endl;
      }
    }
  }

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
