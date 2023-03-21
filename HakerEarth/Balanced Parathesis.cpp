//Balanced Parathesis
#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a)(a).begin(), (a).end()
#define sz(x)(int) x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a, val) memset(a, val, sizeof(a))
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main(int argc, char const * argv[]) {
  optimize();
  string s;
  stack < char > v;
  getline(cin, s);
  //cin.ignore();
  for (int i = 0; i < s.size(); i++) {
    if(v.empty()){
      v.push(s[i]);
    }
    else if(v.top() == '(' && s[i]== ')'){
      v.pop();
    }
    else{
      v.push(s[i]);
    }
}
if (v.empty()) cout<<"Yes"<<endl;
else cout<<"No"<<endl;

}
