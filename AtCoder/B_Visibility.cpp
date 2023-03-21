/**
 *    @author: Ab_ohab
 *    created: 28.03.2021 11:55:29
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

const int N = 110;
string s[N];
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m,x,y;
  cin>>n>>m>>x>>y;
  x--,y--;
  for(int i=0;i<n;i++)
  {
    cin>>s[i];
    //scanf("%s", s[i] + 1);
  }
  int cnt=0;
  int myling=0;
  for(int i=x;i<n;i++)
  {
    if(s[i][y]=='.') cnt++;
    else break;
  }

  for(int i=x;i>=0;i--)
  {
    if(s[i][y]=='.') cnt++;
    else break;
  }

  for(int i=y;i<m;i++)
  {
    if(s[x][i]=='.') cnt++;
    else break;
  }
  for(int i=y;i>=0;i--)
  {
    if(s[x][i]=='.') cnt++;
    else break;
  }
  if(s[x][y]=='.')cnt-=3;
  cout<<cnt<<endl;

  return 0;
}
/*
n m x y
3 5 1 4
#....
#####
....#*/
