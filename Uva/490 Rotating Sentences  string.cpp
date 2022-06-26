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
int main()
{
    int len,word= 0;

    char k[1000];
    gets(k);

    len=strlen(k);
    char g= '"';

    for(int i=0; i<len; i++)
    {
        if(k[i]!=' ,')
            word++;
       // i++;

    }

    printf("%d",word);
    //return 0;

}
//int main()
//{
//    int len,word= 1,i;
//
//    string k;
//    cin>>k;
//
//    len=k.length();
//    while(len--)
//    {
//        for(i=0; i<len; i++)
//        {
//            if(k[i]!=' ,' && k[i+1]==' ,')
//                word=word+1;
//
//        }
//
//    }
//
// printf("%d",word);
//}
