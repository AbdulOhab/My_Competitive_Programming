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
    int n;
    int price,quality;
    cin>>n;
    bool b=0;
    for(int i=0; i<n; i++)
    {
        cin>>price>>quality;
        if(price!=quality)
        {
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}

