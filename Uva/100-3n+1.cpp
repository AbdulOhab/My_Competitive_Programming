#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
//    unsigned int n;
//    int flag=1,max=0;
    int i,j;

    while((cin>>i>>j))
    {
        int x=i;
        int y=j;

        if ( i > j )
            swap(i, j);

        int flag,m=0;

        while(i<=j)
        {

            flag=1;

            unsigned int n=i;

            while(n!=1)
            {
                if ( n % 2 == 1 )
                    n = 3 * n + 1;
                else
                    n = n/2;
                flag++;
            }
            if(flag>m)
            {
                m=flag;
            }
            i++;
        }
        printf("%ld %ld %ld\n",x,y,m);
    }
    return 0;
}


