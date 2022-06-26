//binary search
// #include <bits/stdc++.h>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
// typedef long long ll;
// typedef double dl;
// #define endl "\n"
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
// const ll mx = 1e7;
// ll arr[mx];
// int a;
// bool c(ll val)
// {
//   for(int i=1;i<=a;i++)
//   {
//     val+=arr[i];
//     if(val<=0) return 0;
//   }
//   return 1;
// }
// int main()
// {
//    //optimize();
//    int test;
//    cin>>test;
//    int tc=1;
//    while (test--) {
//      cin>>a;
//      for(int i=1;i<=a;i++)
//      {
//        cin>>arr[i];
//      }
//      ll l=0,r=1e14,ans;
//      while(l<=r)
//      {
//        //cout<<tc++<<" "<< l<<" "<<r<<endl;
//        ll mid=(r+l)>>1;
//        if(c(mid))
//        {
//          ans = mid;
//          r = mid - 1;
//        }
//        else l = mid + 1;
//      }
//      cout << ans << endl;
//    }
//    return 0;
// }
//bruteforce
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

int main(int argc, char const *argv[])
{
   optimize();
   int test;
   cin>>test;
   while(test--)
   {
     int n,arr[10000];
     cin>>n;
     ll total=0,cnt=0;
     for(int i=0;i<n;i++){
       int t;
       cin>>t;
       total+=t;
       if(total<=0)
       {
         cnt+=abs(total)+1;
         total=1;
       }
     }
     cout<<cnt<<endl;
   }
    return 0;
}
