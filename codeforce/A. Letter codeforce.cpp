//A. Letter
#include<algorithm>
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
    int t,b,l,r, m,n;
    cin>>m>>n;
    r=-1;
    l=n;
    t=m;
    b=0;
    vector<string>rect;
    for (int i=0; i <m; i++)
    {
        rect.push_back("");
        cin>>rect[i];
    }

    for (int i=0; i <m; i++)
    {
        for (int j=0; j < n; j++)
        {
            if (rect[i][j]=='*')
            {
                if (j>r)r=j;
                if (j < l)l=j;
                if (i<t)t=i;
                if (i>b)b=i;
            }
        }
    }
    for (int i=t; i <=b; i++)
    {
        for (int j=l; j<=r; j++)
        {
            cout<<rect[i][j];
        }
        cout<<endl;
    }
}
