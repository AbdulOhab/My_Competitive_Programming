//B 	Weak Password
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

int main(int argc, char const *argv[])
{
   optimize();
   string s;
   cin>>s;

   if(s[0] == s[1] and s[1] == s[2] and s[2] == s[3])
   {
     cout<<"Weak"<<endl;
   }
   else
   {
     int v = s[0]-'0';
     bool flag = true ;
     for(int i=0;i<4;i++)
     {
      if(s[i] != ((v+i)%10) + '0'){
        flag = false;
      }
      }
      if(flag) cout << "Weak" <<endl;
      else cout << "Strong" <<endl;
   }
   return 0;
}
