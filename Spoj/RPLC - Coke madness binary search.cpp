#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mx = 1e7;
ll arr[mx];
int a;
bool c(ll val)
{
  for(int i=1;i<=a;i++)
  {
    val+=arr[i];
    if(val<=0) return 0;
  }
  return 1;
}
int main()
{
   optimize();
   int test;
   cin>>test;
   int tc=1;
   while (test--) {
     cin>>a;
     for(int i=1;i<=a;i++)
     {
       cin>>arr[i];
     }
     ll l=0,r=1e14,ans;
     while(l<=r)
     {
       ll mid=(r+l)>>1;
       if(c(mid))
       {
         ans = mid;
         r = mid - 1;
       }
       else l = mid + 1;
     }
      cout << "Scenario #" << tc++ << ": " << ans << endl;
   }
   return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
//
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'
//
// const int mx = 1e6+123;
// long long a[mx];
// int n;
//
// bool check ( long long val )
// {
//     for ( int i = 1; i <= n; i++ ) {
//         val += a[i];
//         if ( val <= 0 ) return 0;
//     }
//
//     return 1;
// }
//
// int main()
// {
//     optimize();
//
//     int T;
//     cin  >> T;
//     for ( int tc = 1; tc <= T; tc++ ) {
//         cin >> n;
//         for ( int i = 1; i <= n; i++ ) cin >> a[i];
//         long long l = 1, r = 1e14, ans;
//
//         while ( l <= r ) {
//             long long mid = ( l + r ) >> 1;
//
//             if ( check ( mid ) ) {
//                 ans = mid;
//                 r = mid-1;
//             }
//             else l = mid+1;
//         }
//
//         cout << "Scenario #" << tc << ": " << ans << endl;
//     }
//
//     return 0;
// }
