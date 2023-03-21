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

const int N = 2e5+5 ;

int n ,a[N] ;
bool flag[N] ;
int main(){
    optimize()
    cin >> n ;
    for(int i=0;i<n;++i) cin >> a[i] ;
    for(int i=0;i<n;++i){
        if(i+1<n && a[i]>a[i+1]){
            flag[i] ^= 1 ;
            flag[i+1] ^= 1 ;
        }
        cout << flag[i] << " " ;
    }
    return 0;
}
