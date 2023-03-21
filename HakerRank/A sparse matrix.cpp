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
   optimize();
   ll a,b;
   cin>>a>>b;
   ll Number = 0;
   ll Zero = 0;
   ll sparseMatrix[a][b];
   for(ll i = 0; i < a; i++){
     for(ll j = 0; j < b; j++){
       cin>>sparseMatrix[i][j];
     }
   }

   for(ll i = 0; i < a; i++){
     for(ll j = 0; j < b; j++){
       if(sparseMatrix[i][j]==0){
         Zero++;
       }
     }
   }
   if(Zero>a*b/2){
     cout<<"Yes"<<endl;
   }
   else{
     cout<<"No"<<endl;
   }
   return 0;
}
