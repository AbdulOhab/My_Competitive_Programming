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
   int n;
   cin>>n;
   vector<int> v;
   for(int i=0;i<n;i++)
   {
     int arr;
     cin>>arr;
     v.push_back(arr);
   }
   int Q;
   cin>>Q;
   while(Q--)
   {
     int t;
     cin>>t;
     int lo=lower_bound(v.begin(),v.end(),t)-v.begin();
     //cout<<v[lo]<<"lower"<<endl;
     int up=upper_bound(v.begin(),v.end(),t)-v.begin();
     //cout<<v[up]<<"Upper "<<endl;
     if(lo==0)
     {
       cout << "X ";

     }
     else
     {
       cout<<v[ lo - 1] <<" ";
     }

     if(up==n)
     {
       cout << "X"<<endl;
     }
     else
     {
        cout << v[ up ] <<endl;
     }
   }

   return 0;
}
