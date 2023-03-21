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

const int mx=1e5+456;
int arr[mx];
int l[mx],r[mx];

int main(int argc, char const *argv[])
{
   optimize();
   int  n , t,last=0;
   cin >> n;
   for ( int i = 1 ; i <= n ; i++)
   {
     cin >> arr[i];
     l[i]=last+1;
     r[i]=last+arr[i];
     last=r[i];
   }
   cin >> t;
   while(t--)
   {
     int q;
     cin>>q;
     int low=1,high=n;
     while(low<=high)
     {
       int mid = (low + high)/2;
       if(q>=l[mid] and q<=r[mid])
       {
         cout << mid << endl;
         break;
       }
       if( q > r[mid] ) low = mid + 1;
       else high = mid - 1;
     }
   }
   return 0;
}
