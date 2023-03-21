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


int main(int argc, char const *argv[])
{
    int way[30000];
    memset(way,0,sizeof(way));
    int n=5;
    int coin[] = {1,5,10,25,50};
    way[0] = 1;
    for(int i=0;i<n;i++){
      for(int j=1;j<30000;j++){
        if(j>=coin[i]){
          way[j] += way[j-coin[i]];
        }
      }
    }
    // for(int i=0;i<100;i++) cout<<way[i]<<" ";
    int t;
    while(cin>>t) cout<<way[t]<<endl;

   return 0;
}
