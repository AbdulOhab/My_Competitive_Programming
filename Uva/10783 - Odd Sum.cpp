#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j, n, a, b;
    int sum,test_case=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        test_case++;
        sum=0;
        cin>>a>>b;
        if(a%2==0)
            a=a+1;
        if(b%2==0)
            b=b-1;
        for(j=a; j<=b; j=j+2)
            sum=sum+j;

        printf("Case %d: %d\n",test_case,sum);
    }
    return 0;
}
