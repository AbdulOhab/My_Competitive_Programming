#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {

  int n,w;
  cin>>n>>w;
  int fixed_time=4*60-w;
  //cout<<fixed_time;
  int flag=0;
  int cnt=0;
  for (int i = 1; i <=n; i++) {
    flag+=i*5;
    //cout<<flag<<endl;
    if(fixed_time<flag)
    {
      //cnt++;
      break;
    }
    else {
      //break;
      cnt++;
    }
  }
  cout<<cnt<<endl;
  return 0;
}
