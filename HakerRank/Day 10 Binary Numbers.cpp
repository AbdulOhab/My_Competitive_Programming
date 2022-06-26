#include<bits/stdc++.h>
using namespace std;

int main()
{
    int deci;
    int i = 0, k = 0,s=0;

    scanf("%d",&deci);

    while(deci)
    {
        if(deci % 2==1)
        {
            s++;
            if(s>k)
            {
                k=s;
            }
        }
    else
    {
        s=0;
    }
    deci /= 2;
    }
    cout<<k;

return 0;
}
