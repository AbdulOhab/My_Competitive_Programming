#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    long n,i=0;

    while(scanf("%lld",&n))
    {
      if(n==0)
      {
        break;
      }
      // else if(n>9)
      // {
      //       cout<<n;
      // }

        while(n>9)
        {
            i=n%10;
            n=n/10;
            n=n+i;
        }
       cout<<n<<endl;
    }

}
