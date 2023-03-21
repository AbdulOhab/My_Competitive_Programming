#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int a;
    int x=0,y=0,z=0;

    cin>>a;
    int b[100][100];

    for(int i=0; i<a; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>b[i][j];
        }

        x=x+b[i][0];
        y=y+b[i][1];
        z=z+b[i][2];

    }

    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
