#include<cstdio>
#include<iostream>
using namespace std;
int p[111111];
int c[111111];
int main()
{
    int t,x,y,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y>>a>>b;
        bool flag=false;

        for(int k=0;k<b;k++){
        cin>>p[k]>>c[k];
        }

        for(int k=0;k<b;k++)
        {
           if(p[k]>=(x-y) && c[k]<=a)
           bool flag=true;
           break;
        }
     cout << (flag ? "LuckyChef" : "UnluckyChef") << '\n';
    }
    return 0;
}
