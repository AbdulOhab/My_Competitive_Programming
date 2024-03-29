//Balance Them Hackerearth
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
  int T;
  cin >> T;
  cin.ignore();
  while (T--) {
    string s;
    stack < char > v;
    getline(cin, s);
    bool flag =  true;
    for (int i = 0; i < s.size(); i++) {

      if(v.empty()){
        v.push(s[i]);
      }
      else{
        if(s[i] == ')' and v.top() == '('){
          v.pop();
        }
        else if(s[i] == ']' and v.top() == '['){
          v.pop();
        }
        else if(s[i] == '}' and v.top() == '{'){
          v.pop();
        }
        else{
          v.push(s[i]);
        }
      }
    }


    if (v.empty()) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
