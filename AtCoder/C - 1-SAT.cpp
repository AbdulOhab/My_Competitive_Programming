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

int n;
string a[200010];
map<string,int> m;
int main(int argc, char const *argv[])
{
   optimize();
   cin>>n;
   for (size_t i = 0; i < n; i++) {
     cin>>a[i];
     m[a[i]]++;
   }

   for( int i = 1;i<=n;i++){
     if(m['!'+a[i]]!=0){
       cout<<a[i];
       return 0;
     }
   }
   cout<<"satisfiable"<<endl;
   return 0;
 }