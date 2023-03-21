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
    int a;
    cin>>a;

    vector<ll>v;
    vector<ll>v1;
    vector<ll>v2;
    int flag =0;

    for(auto i=0;i<a;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(auto j=0;j<a;j++)
    {
        int b;
        cin>>b;
        v1.push_back(b);
    }
    for(int j=0;j<a;j++)
    {
        flag=flag+(v[j]*v1[j]);
    }
    if(flag==0)
    {
       cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
//cout<<flag<<endl;
//    for(int j=0;j<v.size();j++)
//    {
//        cout<<v2[j]<<endl;
//    }
    return 0;
}
