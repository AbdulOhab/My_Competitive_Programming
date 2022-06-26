#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
    int a;
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            int t;
            cin>>t;
            if(t>0) cnt+=t;
        }
        cout<<"Case "<<i<<": "<<cnt<<endl;
    }
    return 0;
}
