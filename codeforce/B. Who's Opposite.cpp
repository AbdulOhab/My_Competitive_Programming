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

bool check(int a, int b, int c)
{
    if (a + b <= c || a + c <= b || b + c <= a) return false;
    else return true;
}

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  int n=abs(a-b)*2;
  if(c>n || a>n || b>n) cout<<-1<<endl;
  else
  {
    ll d=n/2 + c;
    while(d>n)
    {
      d-=n;
    }
    cout<<d<<endl;
  }
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
