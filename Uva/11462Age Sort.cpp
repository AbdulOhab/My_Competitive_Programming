#include<cstdio>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int arr[2000005];
int main()
{
    int n;
    int i,j;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(i=0; i<n; i++)
        {
            cout<<arr[i];
            if(i<n-1)
            printf(" ");
        }
         cout<<endl;
    }
    return 0;
}
