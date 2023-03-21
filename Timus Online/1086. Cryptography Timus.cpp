#include<bits/stdc++.h>
#include<math.h>
#include <stdlib.h>
#define MAX 100000000
using namespace std;

int prime(int n)
{
    int i, j,flag,count=0;
    for( j=2; j<=MAX; j++)
    {

        flag=0;
        for (i = 2; i <=sqrt(j); i++)
        {
            if (j % i== 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag== 0)
        {
            count++;
        }
        if(flag==n)
        {
            printf("%d\n",j);
            break;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&n);
    }
    for( int i=0; i<n; i++)
    {
        prime(arr[i]);
    }
    return 0;
}

// main sloution
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100000000

void prime(int n)
{
    int i,j,temp,count=0;

    for(i=2;i<=MAX;i++)
    {
        temp=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
        {
            count++;
        }
        if(count==n)
        {
            printf("%d\n",i);
            break;
        }
    }
}

int main()
{
   int n,i;

   scanf("%d",&n);
   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
       prime(arr[i]);
   }

   return 0;
}
