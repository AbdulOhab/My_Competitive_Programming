#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    string a,b;
    int f,i;
    int flag=0;
// vector<char>x;
// vector<char>y;
   cin>>a>>b;
//f=strlen(a);
    reverse (a.begin(), a.end());

    for(i=0; i<b.size(); i++)
    {
        if(a[i]==b[i])flag++;
        else break;
    }
    if(flag==a.size())
    {
        cout<<"YES";
    }
    else
        cout<<"NO";


    return 0;
}
