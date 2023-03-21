#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    string s;
    cin>>n;
    cin>>s;
    if(s.size()<=n)
    {
        cout<<s;
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        cout<<s[i];
      }
      	cout<<"..."<<endl;
    }
    return 0;
}
