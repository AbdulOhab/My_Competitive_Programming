#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();
\
   ll n;
   cin>>n;
   ll a[n];
   unordered_map<ll,ll>m;
   for(ll i=0;i<n;i++)
   {
     cin>>a[i];
     m[a[i]]++;
   }
   ll ans = 0;
   //for(auto u:m) cout<<u.first<<" "<<u.second<<endl;
   for(auto u : m)
   {
     if(u.second > 1)
     {
       ans = ans + ((u.second)*(u.second-1))/2;
     }
   }
   cout<<((n*(n-1)/2))-ans<<endl;
   return 0;
}
