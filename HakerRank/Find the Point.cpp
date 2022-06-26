// find the reflection point with the formula r = 2q - p;
// Furthermore we can unwrap the vectors into the x and y component so we get
// rx = 2qx - px;
// ry = 2qy - py;

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
   int t;
   cin>>t;
   while(t--)
   {
     int p1,p2,q1,q2;
     cin>>p1>>p2>>q1>>q2;
     cout<<(2*q1-p1)<<" "<<(2*q2-p2)<<endl;
   }
   return 0;
}
