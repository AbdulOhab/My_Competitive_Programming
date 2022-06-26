#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin>>n;

    while(n--)
    //for(int i=0;i<n;i++)
    {
      string s;
      cin>>s;
      string s1,s2;
      int len=s.size();
      for(int i=0;i<len/2;i++)
        {
            s1+=s[i];
            s2+=s[len-i-1];
        }
        //cout<<s1<<" "<<s2<<endl;
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        //cout<<s1<<" "<<s2<<endl;
        if(s1 == s2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
