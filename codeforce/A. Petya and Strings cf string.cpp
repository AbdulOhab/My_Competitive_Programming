#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int c(string str)
{
    int i,sum=0;
    for (i = 0; str[i] != '\0'; i++)
    {
        sum = + str[i];
    }
    return sum;
}
int main()
{
    string a,b;
    cin>>a>>b;

    for(int i=0; i<a.size(); i++)
       {
           if(a[i]>='A' && a[i]<='Z') a[i]=(char)(a[i]+32);
           if(b[i]>='A' && b[i]<='Z') b[i]=(char)(b[i]+32);
       }
     if(a==b)
     {
      cout << "0" << endl;
      return 0;
     }
    if(a<b)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    else if(a>b)
    {
        cout<<"1"<<endl;
        return 0;
    }

    // for(int i=0; i<=a.length(); i++)
    //     if(a[i]==b[i]){}
    //     cout<<"0";
    // int main ()
    // {
    //     char a[100],b[100];
    //     cin >> a >> b;
    //     cout << stricmp(a,b);
    // }


    return 0;
}
