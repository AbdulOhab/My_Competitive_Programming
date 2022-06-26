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
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);


int main(int argc, char const *argv[])
{
   optimize();
   int n,l,m=0;
   cin>>n>>l;
   int arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
   }
   sort(arr,arr+n);
   for(int i=0;i<n-1;i++)
   {
     if(arr[i+1]-arr[i]>m)
     {
       m=arr[i+1]-arr[i];
     }
   }
   double x=arr[0],y=(double)m/2;
   double ans= max(x,y),t=l-arr[n-1];
   double an=max(ans,t);
   cout<<fixed<<setprecision(10)<<an<<endl;
   return 0;
}
