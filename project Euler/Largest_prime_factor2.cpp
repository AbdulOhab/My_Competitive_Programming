#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);

int main() {
   optimize();
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;
        long long div = 2LL;
        while(div<=floor(sqrt(n))){
            if(n%div==0LL){
                n  /= div;
            }else{
                div++;
            }
        }
        cout<<n<<endl;
    }
    return 0;
}
