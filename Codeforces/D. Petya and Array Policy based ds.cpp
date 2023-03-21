#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree< ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


const int mx= 2e5+123;
ll arr[mx],sum[mx];
int main()
{
   optimize();
   ll n,t;
   cin>>n>>t;
   for(int i = 1; i<= n; i++) cin>>arr[i];
   for ( int i = 1; i <= n; i++ ) sum[i] = arr[i] + sum[i-1];

   ordered_set si;
   map<long long ,int > cnt;

   si.insert(0); //s0 value
   cnt[0]++;

   long long ans=0;
   for(int i = 1; i<= n; i++)
   {
     ans += ( i - si.order_of_key(sum[i]-t) - cnt[sum[i]-t] );
     si.insert ( sum[i] );
     cnt[sum[i]]++;
   }
   cout<<ans<<endl;
   return 0;
}
