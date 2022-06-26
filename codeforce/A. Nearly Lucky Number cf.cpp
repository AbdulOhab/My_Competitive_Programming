#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main()
{
  long long n;
  int flag=0,k;
    cin>>n;

    //sz=sizeof(v)/sizeof(v[0]);
    // for(i=0; i<=sz; i++)
    // {
    //
    while(n!= 0)
    {
      k=n%10;
        if(k == 4 || k== 7)
        {
            flag++;
        }
        n=n/10;
    }
    if(flag== 4 || flag== 7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


        return 0;
    }
