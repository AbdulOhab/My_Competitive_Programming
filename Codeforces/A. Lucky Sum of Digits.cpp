#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
    int t;
    cin>>t;
    string s;
    while(t>0)
    {
        if(t%7==0)
        {
            s+='7';
            t-=7;
        }
        else
        {
            s+='4';
            t-=4;
        }
    }
    if(t)return cout<<-1,0;
    cout<<s;
    return 0;
}
