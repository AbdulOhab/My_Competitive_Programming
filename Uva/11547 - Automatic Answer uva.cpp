#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t,n;
  scanf("%d", &t);
  for(int i= 0; i< t; i++) {
        scanf("%d", &n);
        int div=(n*63+7492)*5-498;
        int n=div/10;
        int ans=n%10;
        int k=abs(ans);

        printf("%d\n",k);
    }
}
