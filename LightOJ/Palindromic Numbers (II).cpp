
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

 int main(int argc, char const *argv[])
 {
    optimize();
    int T;
    cin>>T;
    int l = 1;
    while (T--) {
      string s;
      cin>>s;
      string t = s;
      reverse(t.begin(), t.end());
      if(s == t) cout << "Case " << l++ << ": Yes" << endl;
      else cout << "Case " << l++ << ": No" << endl;
    }
    return 0;
 }
