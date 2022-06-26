/**
 *    @author: Ab_ohab
 *    created: 29.03.2021 12:20:29
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

class BallotCounting
{
 public:
   int count(string s)
   {
     int n=s.size();
     int t=n/2;
     int A_count=0;
     int B_count=0;
     for(int i=0; i<n; i++)
     {
         if(s[i]=='A')A_count++;
         else B_count++;
         if(A_count>t || B_count>t) return i+1;
     }
     return n;
   }
};
int main(int argc, char const *argv[]) {
  BallotCounting obj;
  int a;
  cin>>a;
  while(a--)
  {
    string s;
    cin>>s;
    cout<<obj.count(s)<<endl;
  }
}
