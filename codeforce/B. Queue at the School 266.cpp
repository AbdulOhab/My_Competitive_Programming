#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    string v;
    cin>>a>>b;
    cin>>v;

    for(auto j=0; j<b; j++)
    {
        for(auto i=0; i<a-1; i++)
        {
            if(v[i]=='B' and v[i+1]=='G')
            {
                v[i]='G';
                v[i+1]='B';
                i=i+1;
            }
        }
    }
    cout<<v;
    return 0;
}

