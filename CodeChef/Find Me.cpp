#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
using namespace std;
void solve()
{
  int an,bn, T;
  cin>>bn>>an;
  for(int i = 1; i <= bn; i++)
  {
    int arr;
    cin>>arr;
    if(arr==an)
    {
      cout<<1<<endl;
      return;
    }
  }
  cout<<-1<<endl;
}

int main()
{
	std::ios::sync_with_stdio(false);
  solve();
	return 0;
}
