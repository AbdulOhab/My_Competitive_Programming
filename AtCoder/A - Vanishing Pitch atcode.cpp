#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
    int v,t,s,d;

    std::cin>>v>>t>>s>>d;

    if(d<v*t || d>v*s)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
