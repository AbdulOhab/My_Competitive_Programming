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

ll test=0;
void solve()
{
  char a,b;
  int n;
  cin>>a>>b>>n;

  ll arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  bool flag = true;
  bool flag2 = true;
  test++;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i][j] < 0){
        flag = false;
      }
      if (arr[i][j] != arr[n-i-1][n-j-1]) {
        flag2 = false;
        break;
      }
    }
  }

  if(flag and flag2){
    cout<<"Test #"<<test<<": Symmetric."<<endl;
  }
  else{
    cout<<"Test #"<<test<<": Non-symmetric."<<endl;
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
