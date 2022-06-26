#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    string s;

    while(n--)
    {
        cin>>s;
        if(s.lenfth()>10)
        {
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }
        {
            cout<<s<<endl;
        }
        cout<<endl;
    }
    return 0;
}
