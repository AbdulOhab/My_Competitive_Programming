#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int

using namespace std;
void solve()
{
  int n,t=0,l=0;
  cin>>n;
  int s=0;
  int f=true;
  for(int j=1;j<=n;j++)
  {
    if(f==true)
    {
    for(int i = 1; i <= 5; i++)
    {
      cout<<++s<<" ";
    }
    cout<<endl;
    f= false;
    }
    else if(f==false)
    {
      s+=5;
      for(int i = 5; i >= 1; i-- )
      {
        cout<<s--<<" ";
      }
      s=+5*j;
      cout<<endl;
      f=true;
    }
  }
  //for(auto u:v) cout<<u<<" ";

}

int main()
{
	std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  solve();
	return 0;
}
