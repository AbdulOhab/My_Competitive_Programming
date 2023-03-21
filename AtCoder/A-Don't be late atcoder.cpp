#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d,s,t;
    int flag=0,ct=0;

    cin>>d>>s>>t;


    for(int i=0; i<=s; i++)
    {
        flag=t*i;
        if(flag<d)
        {
            ct++;
        }

    }
    if(ct<=s)
        cout<<"Yes";
    else
        cout<<"No";


    return 0;
}

