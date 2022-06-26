#include<stdio.h>
int main ()
{
    int a,b,n,i=1;
    scanf("%d",&n);

    while(n)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n", i, a+b);
        i++;
        n--;

    }

   return 0;

}
