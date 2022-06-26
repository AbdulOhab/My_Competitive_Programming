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

//binary search solution
ll a,b,c;
ll getsum(ll i)
{
  return (a*i*i)+(b*i)+c;
}

int main()
{
  optimize();
  int test;
  cin>>test;
  while(test--)
  {
    ll k;
    cin>>a>>b>>c>>k;
    ll l=0,r=1e6,ans;
    while (l<=r) {
      ll mid=( l + r ) >> 1;
      if( getsum(mid) >= k)
      {
        ans = mid;
        r = mid-1;
      }
      else l = mid+1;
    }
    cout<<ans<<endl;
  }
  return 0;
}
//// Brute Force ac solution
// ll getsum(int a,int b,int c,int i)
// {
//   return a*(i*i)+b*i+c;
// }
// int main(int argc, char const *argv[])
// {
//    optimize();
//    int test;
//    cin>>test;
//    while(test--)
//    {
//      int a,b,c,d;
//      cin>>a>>b>>c>>d;
//      ll fl,i;
//      for(i=0;i<=d;i++)
//      {
//        fl=getsum(a,b,c,i);
//        if(fl>=d) break;
//      }
//      cout<<i<<endl;
//    }
//     return 0;
// }
