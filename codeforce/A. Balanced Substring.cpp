//A. Balanced Substring]
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

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  int l=-1,r=-1;
  for(int i=0;i<n-1;i++)
  {
    if(s[i]!=s[i+1])
    {
      l=i+1;
      r=i+2;
      break;
    }
  }
  cout<<l<<" "<<r<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int T;
   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
//A. Balanced Substring
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

void solve()
{
  int n;
  string s;
  cin>>n>>s;
  string t="baba";
  int flag=0;
  for(int i=0;i<n;i++)
  {
    if((s[i]=='a' && s[i+1]=='b') or (s[i]=='b' && s[i+1]=='a'))
    {
      cout<< i+1 <<" "<<i+2<<endl;
      flag=1;
      break;
    }
  }
  if(flag==0) cout<<-1<<" "<<-1<<endl;

}

int main(int argc, char const *argv[])
{
   optimize();
   //infile();
   //outfile();
   //int T = 1;
   int T;
   cin>>T;
   while (T--) {
     solve();
   }
   return 0;
}
