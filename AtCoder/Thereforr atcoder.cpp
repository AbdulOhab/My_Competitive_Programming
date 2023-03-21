#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,a;
  cin>>t;
  if(t>=0 && t<10)
  {
    if(t==2 || t==4 ||t==5 || t==7 || t==9)
    {
      cout<<"hon"<<endl;
    }
    else if(t==0 || t==1 ||t==6 || t==8)
    {
      cout<<"pon"<<endl;
    }
    else if(t==3)
    {
      cout<<"bon"<<endl;
    }
  }
  else if(t>=10 &&t<=999)
  {
    a = t% 10;
    if(a==2 || a==4 ||a==5 || a==7 || a==9)
    {
      cout<<"hon"<<endl;
    }
    else if(a==0 || a==1 ||a==6 || a==8)
    {
      cout<<"pon"<<endl;
    }
    else if(a==3)
    {
      cout<<"bon"<<endl;
    }
  }
  return 0;
}
