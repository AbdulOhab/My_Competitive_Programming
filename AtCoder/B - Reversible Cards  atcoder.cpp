//B - Reversible Cards
#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <math.h>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    ull a,b;
    ull t,flag1=0,flag2=0;
    vector<ull>v1;
    vector<ull>v2;

    cin>>t;
    //ull len=t*2;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);

    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0;i<t;i++)
    {
        if(v1[i]==v2[i])
        {
            flag1++;
        }
        else
        {
            flag2++;
        }
    }
    cout<<flag1+flag2<<endl;

    return 0;
}
//int main()
//{
//    ll a,b;
//    int t;
//    set<int>v;
//
//    cin>>t;
//    int len=t*2;
//    for(int i=0;i<len;i++)
//    {
//        cin>>a;
//        v.insert(a);
//
//    }
//    cout<<v.size()<<endl;
//
//    return 0;
//}
