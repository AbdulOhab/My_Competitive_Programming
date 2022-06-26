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
     string s;
     cin>>s;
     for(int i=0;i<s.length();i++)
     {
       if(s[i]== 'A' ) cout<<"("<<" ";
       else if(s[i]== 'B' ) cout<<")"<<" ";
       if(s[i]== 'C' ) cout<<"("<<" ";
     }
     cout<<endl;
   }

   return 0;
}
