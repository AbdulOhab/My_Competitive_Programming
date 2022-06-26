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

void solve(){
  int n ;
  cin>>n;
  if(n==1 or n==2 or n==4)
  {
    cout<<-1<<endl;
  }
  else if(n%3==0)
  {
    cout<<n/3<<" 0 0"<<endl;
  }
  else if(n%3==1)
  {
    cout<<(n-7)/3<<" 0 1"<<endl;
  }
  else
  {
    cout<<(n-5)/3<<" 1 0"<<endl;
  }
}
int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin>>t;
   while (t--) {
     solve();
   }

   return 0;
}
