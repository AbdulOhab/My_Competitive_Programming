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
  ll a,b;
  cin>>a>>b;
  if(a==b) cout << 0 << " " << 0 << endl;
  else
  {
    ll t = abs(a-b);
    ll an = min(a%t, t-a%t);
    cout<< t << " " << an <<endl;
  }

}
int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   while(T--) solver();
   return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll dif=abs(a-b);
        if(a==b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        ll x=a%dif;
        ll y=b%dif;
        if(x!=y)cout<<0<<" "<<0<<endl;
        else
        {
            ll ans=min(dif-x,x);
            cout<<dif<<" "<<ans<<endl;
        }
    }
}
