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

int NOD[1123];

int main(int argc, char const *argv[])
{
    optimize();
    int limit=1e3;
    for(int i = 1;i <= limit; i++)
    {
      for(int j=i ; j<=limit; j+=i)
      {
        NOD[j]++;;
      }
    }
    //for(auto u:NOD) cout<<u<<" "<<endl;

    vector<pair<int,int>> v;

    for(int i = 1 ; i<=limit; i++)
    {
      v.push_back( { NOD[i], -i } );
    }
    sort ( v.begin(), v.end() );
    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        int n;
        cin >> n;

        cout << "Case " << tc << ": " << v[n-1].second * -1 << endl;
    }
    return 0;
}
