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
    int x,y;
    cin>>x>>y;

    if(x>y)
    {
        int t =y+3;
        if(t>x)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
          cout<<"No"<<endl;
        }
    }
    else
    {
        int t =x+3;
        if(t>y)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
          cout<<"No"<<endl;
        }
    }

    return 0;
}

