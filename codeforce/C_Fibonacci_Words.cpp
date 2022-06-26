#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int len=s.size();
    bool flag = true;
    int p,q,l;
    char w;
    for (size_t i = 2; i < len; i++) {
      p=(s[i-1]-'A');
      q=(s[i-2]-'A');
      l=(p+q)%26;
      w=l+'A';
      if(s[i]!=w)
      {
        flag=false;
        break;
      }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}
