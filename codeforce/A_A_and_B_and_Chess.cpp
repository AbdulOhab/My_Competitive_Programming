/**
 *    @author: Ab_ohab
 *    created: 05.04.2021 20:31:29 sa
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  vector<string>s;
  for (size_t i = 0; i <8; i++) {
    string str;
    getline(cin,str);
    s.push_back(str);
  }
  int Lower_case=0;
  int Upper_case=0;
  for (size_t i = 0; i <8; i++) {
    for (size_t j=0;j<8;j++)
    {
      if(s[i][j]=='Q') Upper_case+=9;
      if(s[i][j]=='q') Lower_case+=9;
      if(s[i][j]=='R') Upper_case+=5;
      if(s[i][j]=='r') Lower_case+=5;
      if(s[i][j]=='B') Upper_case+=3;
      if(s[i][j]=='b') Lower_case+=3;
      if(s[i][j]=='N') Upper_case+=3;
      if(s[i][j]=='n') Lower_case+=3;
      if(s[i][j]=='P') Upper_case+=1;
      if(s[i][j]=='p') Lower_case+=1;
      // if(s[i][j]=='K') Upper_case+=0;
      // if(s[i][j]=='k') Lower_case+=0;
    }
  }
  // cout<<Upper_case<<endl;
  // cout<<Lower_case<<endl;
  if(Upper_case==Lower_case)
  {
    cout<<"Draw"<<endl;
    return 0;
  }
  if(Upper_case>Lower_case)
  {
    cout<<"White"<<endl;
    return 0;
  }
  else
  {
    cout<<"Black"<<endl;
    return 0;
  }
  return 0;
}
