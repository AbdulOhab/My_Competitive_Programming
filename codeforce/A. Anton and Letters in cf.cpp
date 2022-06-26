#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <set>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
  string s;
  set <char> a;
  getline(cin,s);
  for(int i=0;i<s.length();i++)
  {
    //if(s[i]==123 || s[i]==125 || s[i]== ' ')
    if(isalpha(s[i]))
    {
      a.insert(s[i]);
    }
  }
  cout<<a.size();

}
//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//    char s[1001];
//    gets(s);
//
//    int i,z=0,j,count=0;
//    int len=strlen(s);
//    sort(s,s+len);
//    for(i=0; i<len-1; i++)
//    {
//
//        if(s[i] == ',' ||s[i] == ' ')
//        {
//            continue;
//        }
//        else
//        {
//            if(s[i]>=97&&s[i]<=122)
//            {
//                count++;
//                if(s[i]==s[i+1]) count--;
//            }
//
//        }
//    }
//
//    cout << count << endl;
//    return 0;
//}
