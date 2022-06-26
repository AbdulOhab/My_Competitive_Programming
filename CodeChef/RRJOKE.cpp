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
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

int main()
{
  optimize();
  //ll  t=1;
  int l;
  cin>> l;
  while(l--)
  {
    int t;
    cin>>t;
    int arr[t+t];
    for(int i=1; i<=t+t; i++)
    {
      cin>>arr[i];
    }
    int fl=0;
    for(int j=1;j<=t;j++)
    {
      fl=fl^j;
    }
    cout<<fl<<endl;
  }
  return 0;
}
