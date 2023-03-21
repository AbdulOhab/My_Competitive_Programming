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
   int n;
   string s;
   cin>>n>>s;
   int takahasi=0;
   int akoi=0;
   bool t=true;
   for(int i=0;i<n;i++)
   {
       if(s[i]== '1')
       {
         if(i%2==0) cout<<"Takahashi"<<endl;
         else cout<<"Aoki"<<endl;
         break;
       }
   }
   // if(takahasi<akoi) cout<<"Takahashi"<<endl;
   // else cout<<"Aoki"<<endl;
   //cout<<"T "<<takahasi<<" A"<<" "<<akoi<<endl;
   return 0;
}
