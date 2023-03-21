#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n,k;
  cin>>n>>k;
  int ans2=0;
  int ans5=0;
  int ans8=0;
  int red=n*2;
  for(int i=1;i<=red;i++)
  {
    int l=i*k;
    if(l>=red)
    {
      ans2+=i;
      break;
    }
  }
  int green=n*5;
  for(int i=1;i<=green;i++)
  {
    int l=i*k;
    if(l>=green)
    {
      ans5+=i;
      break;
    }
  }
  int blue=n*8;
  for(int i=1;i<=blue;i++)
  {
    int l=i*k;
    if(l>=blue)
    {
      ans8+=i;
      break;
    }
  }
  cout<<ans2+ans5+ans8<<endl;
	return 0;
}
