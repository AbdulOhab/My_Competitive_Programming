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

constexpr long int sqr(long int y)
{
    return y * y;
}
int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   while (T--) {
     double x1,y1,x2,y2,r1,r2;
     cin>>x1>>y1>>r1>>x2>>y2>>r2;
     int dist= (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));

     if(dist == (r2-r1)*(r2-r1)) cout<<"E"<<endl;
     else if(dist < (r2-r1)*(r2-r1)) cout<<"I"<<endl;
     else cout<<"O"<<endl;
   }
   return 0;
}
