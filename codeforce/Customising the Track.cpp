#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

void solver()
{
  ll n;
  cin>>n;
  ll ans=0;
  for(int i=0;i<n;i++)
  {
    ll t;
    cin>>t;
    ans+=t;
  }
  cout<<ans%n*(n-ans%n)<<endl;
}
int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   while(T--) solver();
   return 0;
}
