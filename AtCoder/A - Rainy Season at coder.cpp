#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    int flag=0;
    int now=0;
    cin>>s;
    int lngth=s.length();

    if(lngth<=3)
    {
        for(int i=0; i<lngth; i++)
        {
            if(s[i]=='R')
            {
                flag++;
            }
            else
            {
                flag=0;
            }
           now=max((now),(flag));
        }
        cout<<now<<endl;
    }
    else
        return 0;
}
