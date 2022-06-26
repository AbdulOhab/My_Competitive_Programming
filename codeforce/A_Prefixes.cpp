#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
int main()
{
    int n;
    string s;
    int ans=0;
    cin>>n>>s;
    for(ll i=0;i<=n-2;i+=2)
    {
      if(s[i]=='a' && s[i+1]=='a')
      {
        ans++;
        s[i]='b';
      }
      else if(s[i]=='b' && s[i+1]=='b')
        {
            ans++;
            s[i]='a';
        }
    }
    cout<<ans<<endl;
    cout<<s;
}
