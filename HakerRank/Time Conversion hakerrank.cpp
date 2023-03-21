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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

string print(int h){
    if(h<10) return "0"+to_string(h);
    else return to_string(h);
}

int main()
{
  optimize();
  char c1,c2;
  int a1,a2,a3;
  string s;
  cin>>a1>>c1>>a2>>c2>>a3>>s;
  int h;
  if(s == "PM" and a1!=12) a1=a1+12;
  else if((s == "AM" and a1==12)) a1=(a1+12)%24;
  cout<<print(a1)<<c1<<print(a2)<<c2<<print(a3)<<endl;
  return 0;
}

// int main()
// {
//   optimize();
//   string s;
//   cin>>s;
//
//   string K="cfvd";
//   if(s[8] == 'A')
//   {
//     cout<<s<<endl;
//   }
//   else
//   {
//     cout<<s+K<<endl;
//   }
//   return 0;
// }
