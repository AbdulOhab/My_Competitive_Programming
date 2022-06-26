#include<cstdio>
#include<iostream>
using namespace std;
int main ()
{
    long int name,label[1000];
    long int cill,i,j;
    cin >>name;
    for(i=0; i<name; i++)
    {
        cin>>cill;
        label[i]=cill;
    }
    for(j=name-1; j>=0; j--)
    {
        cout<<label[j]<<" ";
    }
    return 0;
}