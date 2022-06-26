/**
 *    @author: Ab_ohab
 *    created: 31.03.2021 21:12:29
**/
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
//topcoder

class MarriageAndTravelingChallenge
{
public:
  string solve(string S)
  {
    int i = 0;
    int add = 1;
    string ans;
    while (i < S.size())
    {
      ans.push_back(S[i]);
      i += add;
      add++;
    }
    return ans;
  }
};
int main()
{
  MarriageAndTravelingChallenge obj;
   string str = "saalllaaaammmmm";
   //string str = "aaa";
   cout<<obj.solve(str);
}
// #include<bits/stdc++.h>
// #include <iostream>
//
// using namespace std;
//
// int main()
// {
//     string s;
//     cin>>s;
//     int n;
//     n=s.size();
//     int temp=0;
//
//     for(int i =0;i<n;i++)
//     {
//         temp+=i;
//         cout<<s[temp];
//     }
//
//     return 0;
// }
