#include <bits/stdc++.h>

using namespace std;

signed main()
{
    //mdsaqib;
    string s,t;
    cin >> s >> t;
    int n=s.size();
    int m=t.size();
    int ans=1005;
    for(int i=0; i<n-m+1; i++)
    {
        int temp=0;
        for(int j=0; j<m; j++)
        {
            if(s[i+j]!=t[j])temp++;
        }
        ans=min(ans,temp);
    }
    cout << ans;
}

