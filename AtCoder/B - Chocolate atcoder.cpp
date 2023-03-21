#include<bits/stdc++.h>
#include<cstdio>
using namespace std;

const int MAX_N=100;
int N,x,d;
int a[MAX_N];
int main()
{

    cin>>N>>d>>x;

    for(int i=0;i<N;i++)
    {
        scanf("%d",a+i);
    }

    int flag=0;
    for(int i=0;i<N;i++)
    {
        int tmp=(d-1)/a[i]+i;

        flag=+tmp;
    }

    cout<<flag<<endl;
    return 0;

}
