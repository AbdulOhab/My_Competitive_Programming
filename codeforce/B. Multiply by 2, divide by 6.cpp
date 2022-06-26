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
   int T;
   cin>>T;
   while (T--) {
     long long n;
     cin>>n;
     int a=0;
     while (n!=1) {
       if(n%6 == 0)
       {
         a++;
         n/=6;
       }
       else if(n%3 == 0 )
       {
         a++;
         n*=2;
       }
       else
       {
         a=-1;
         break;
       }
     }
     cout<<a<<endl;
   }
   return 0;
}
