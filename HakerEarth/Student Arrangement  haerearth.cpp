#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,m,k,i,h;
   int arr[1000];
   int flag=0;
   cin>>n>>m>>k;
   int capacity=m*k;
   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   }

for(int j=0;j<n;j++)
{
  if(arr[i])
  {
    flag++;
  }
}
cout<<flag;
  return 0;
}
