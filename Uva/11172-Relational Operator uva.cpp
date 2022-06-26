#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
 int a,b,c;
 scanf("%d",&a);
 while(a--)
 {
   scanf("%d %d", &b, &c);
   if(b>c)
     printf(">\n");
   else if(b<c)
     printf("<\n");
   else
     printf("=\n");

 }
  return 0;
}
