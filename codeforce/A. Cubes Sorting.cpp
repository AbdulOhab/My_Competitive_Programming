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

int a[1000000+5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        bool can=false;
        for (int i=1; i<n; i++)
        {
            if (a[i]>=a[i-1])
            {
                can=true;
                break;
            }
        }
        if (can) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
