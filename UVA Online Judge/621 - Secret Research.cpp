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
   int n;
   cin>>n;
   while(n--)
   {
     string i;
     cin>>i;
     int len=i.size();
     if (i == "1" || i == "4" || i == "78") cout << "+"<<endl;
     else if ( i[len - 1] == '5' && i[len - 2] == '3') cout << "-"<<endl;
     else if ( i[0] == '9' && i[len - 1] == '4') cout << "*"<<endl;
     else cout << "?"<<endl;
   }
   return 0;
}
