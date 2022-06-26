#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
   long long int a,b[100000],c[100000],d;
   int i,j,k;
   cin>>a;
   for(i=0;i<a;i++){
       cin>>b[i];
   }
   for(j=0;j<a;j++){
       cin>>c[j];
   }
   for(k=0;k<a;k++){
      d=b[k]+c[k];
    cout<<d<<" ";
   }

}
