#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n,m,a,s,t;
    cin>>n>>m>>a;
    if(n%a==0) s=n/a;
    else s=n/a+1;
    if(m%a==0) t=m/a;
    else t=m/a+1;

    cout<<s*t<<endl;
    return 0;
}
