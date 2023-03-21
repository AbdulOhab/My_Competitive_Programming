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
  ll PQA,product;
  ll flag  = 0;
  ll sum = 0;
  cin>>PQA>>product;
  int arr[PQA];
  for(int i=0;i<PQA;i++){
    cin>>arr[i];
    sum = sum + arr[i];
    if(arr[i]>flag){
      flag = arr[i];
    }
  }
  for(int i=0;i<product-1;i++){
    sum = sum+flag;
  }
  cout<<sum<<endl;
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
