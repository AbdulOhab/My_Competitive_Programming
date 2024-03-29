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

void solver()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  sort(arr,arr+n);
  int m1=0,m2=0;
  for(int i=0;i<n;i++)
  {
    if(m1==arr[i]) m1++;
    else if(m2==arr[i]) m2++;
  }
  cout<<m1+m2<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   int t;
   cin>>t;
   while(t--) solver();
   return 0;
}
