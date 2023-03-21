#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
#include <cstdio>
using namespace std;

//int main()
//{
//    char a[1000];
//
//    int len,i,word=1;
//
//    gets(a);
//
//    len=strlen(a);
//
//    for(i=0; i<len; i++)
//    {
//        if(a[i] !=' ,')
//            word=word+1;
//            break;
//    }
//
//
//}
int min()
{
    int len,t= 1;

    string k;
    cin>>k;

    len=k.length();

    for(int i=0; i<len;  i++)
    {
        if(k[i]!= ',')
            t=t+1;
        break;
    }
    printf("%d",t);
    //return 0;

}
