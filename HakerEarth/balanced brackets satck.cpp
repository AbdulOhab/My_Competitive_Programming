#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isBalanced ( char c1, char c2 )
{
    return  ( c1 == '(' && c2 == ')' )
    || ( c1 == '{' && c2 == '}' ) ||
    ( c1 == '[' && c2 == ']' );
}
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;

    stack<char> st;
    bool ans = 1;
    for ( auto u : s )
    {
      if ( u == '(' || u == '{' || u == '[' )
      {
        st.push(u);
      }
      else
      {
        if ( st.empty() )
        {
          ans=0;
          break;
        }
        else
        {
          if ( isBalanced( st.top(), u ) )
          {
            st.pop();
          }
          else
          {
            ans=0;
            break;
          }
        }

      }
    }
    if ( !st.empty() ) ans = 0;

    if ( ans ) cout << "YES\n";
    else cout << "NO\n";

  }
	return 0;
}
