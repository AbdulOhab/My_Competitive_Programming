#include <bits/stdc++.h>
#include<vector>
using namespace std;


int main()
{
    char str[101];
    int flag=0,len;

    cin>>str;

    len=strlen(str);

    sort(str,str+len);

    for(int i=0; i<len; i++)
    {
        if(str[i]!=str[i+1])
        {
            flag++;
        }

    }
    if(flag%2==0)
        printf("CHAT WITH HER!\n");

    else
        printf("IGNORE HIM!\n");
    return 0;
}
