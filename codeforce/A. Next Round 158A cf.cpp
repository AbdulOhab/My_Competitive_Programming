#include <iostream>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    //map<long,long> m;
    long  n,t,name,m[100000];
    int c=0;
    cin>>n>>t;

    for(auto i=0; i<n; i++)
    {
        cin>>m[i];
    }
    for(auto i=0; i<n; i++)
    {
        if(m[i]>0 && m[i]>=m[t-1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

