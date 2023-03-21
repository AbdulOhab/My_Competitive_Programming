#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    for(int i=0;i<a*b;i++)
    {
        if(c==1)
        {
            a--;
        }
        else
        {
            b--;

        }

    }
    if(b==0)
    {
        cout<<"Takahashi"<<endl;
    }
    else if(a==0)
    {
        cout<<"Aoki"<<endl;
    }
    return 0;
}
