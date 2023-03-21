///43A
#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n,c=0,c2=0;
    cin>>n;
    string s,s1,s2;
    cin>>s1;
    c++;
    n--;
    while(n--)
    {
        cin>>s;
        if(s==s1)
        {
            c++;
        }
        else
        {
            c2++;
            s2=s;
        }

    }
    s=c>c2?s1:s2;
    cout<<s<<endl;
    return 0;
}




