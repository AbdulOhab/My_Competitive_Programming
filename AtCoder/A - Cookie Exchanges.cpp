#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int a,b,c;
    int count=0;
    cin>>a>>b>>c;
    if(a%2==1 or b%2==1 or c%2==1)
    {
        cout<<0;
    }
    else if(a==b and b==c  and c==a)
    {
        cout<<-1<<endl;
    }
    else
    {
        while(1)
        {
            int A=b/2+c/2;
            int B=a/2+c/2;
            int C=a/2+b/2;
            ++count;
            a=A;
            b=B;
            c=C;

             if(a%2==1 or b%2==1 or c%2==1)
                break;
        }
    cout<<count<<endl;
    }
}
