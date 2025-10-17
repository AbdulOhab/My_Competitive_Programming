#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s;

    cin>>s;
    int l=s.size();
    string ans ="yes";

//    for(int i=0;i<l;i++)
//    {
//        if(s[i]==s[i+1])
//        {
//         ans="no";
//        }
//
//    }
    for (int i = 0; i < l; i++)
    {
        for (int j = i+1; j < l; j++)
        {
            if (s[i] == s[j]) ans = "no";
        }
    }
    cout<<ans<<endl;

    return 0;
}
