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
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>v1;
  vector<int>v2;
  for(int i=0;i<n;i++){
  int a;
  cin>>a;
  v1.push_back(a);
}
  for(int i=0;i<m;i++)
  {
  int b;
  cin>>b;
  v2.push_back(b);
}
 sort(all(v1));
 sort(all(v2));

 int cnt=0,i=0,j=0;
 while (i<n && j<m) {
   if( v1[i]-k > v2[j] ) j++;
   else if( v1[i]+k < v2[j]) i++;
   else i++,j++,cnt++;
 }
 cout<<cnt<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
     solve();
   return 0;
}
