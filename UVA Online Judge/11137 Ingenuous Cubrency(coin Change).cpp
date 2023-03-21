//357 Let Me Count The Ways
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
#define SIZE 10001

const int mx = 1e4 + 123;
ull way[mx];

int main(int argc, char const *argv[])
{
    memset(way,0,sizeof(way));
    int coin[23];
    for (int i = 1;i<=21;i++){
      coin[i-1] = i*i*i;
    }
    way[0] = 1;
    for(int i=0;i<21;i++){
      for(int j=1;j<SIZE;j++){
        if(j>=coin[i]){
          way[j] += way[j-coin[i]];
        }
      }
    }
    // for(int i=0;i<100;i++) cout<<way[i]<<" ";
    int t;
    while(cin>>t){ cout  << way[t] << endl; }
   return 0;
}
