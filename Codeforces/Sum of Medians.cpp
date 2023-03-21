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
  int a,b,c,d;
  cin>>a>>b;
  int len=a*b;
  int arr[len+1];
  for(int i=0;i<len;i++)
  {
    cin>>arr[i];
  }
  ll ans=0;
  int t=a/2+1;
  for(int i = len-t; b-- ; i-=t )
  {
  ans+=arr[i];
  //cout<<arr[i]<<" ";
  }
  cout<<ans<<endl;
}
int main(int argc, char const *argv[])
{
   optimize();
   int T=1;
   //cin>>T;
   while(T--) solver();
   return 0;
}
