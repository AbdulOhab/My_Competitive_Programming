#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long int n,a,b,c,kn,tc=1;
    {
        while(cin>>kn){
            if(kn<1)
                break;
            while(kn--){
                scanf("%ld %ld %ld", &a, &b, &c);
                if(a<=0 || b<=0 || c<=0)
                    printf("Case %ld: Invalid\n", tc++);
                else if(a<b+c && b<a+c && c<a+b){
                    if(a==b && b==c)
                        printf("Case %ld: Equilateral\n", tc++);
                    else if(a==b || b==c || c==a)
                        printf("Case %ld: Isosceles\n", tc++);
                    else
                        printf("Case %ld: Scalene\n", tc++);
                }
                else
                    printf("Case %ld: Invalid\n", tc++);
            }
        }
        return 0;
    }
}
