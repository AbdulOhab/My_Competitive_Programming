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

int is_prime(int n) {
  if (n == 1) return 0; // 1 is NOT a prime
  if (n == 2) return 1; // 2 is a prime
  if (n % 2 == 0) return 0; // NO prime is EVEN, except 2
  for (int i = 3; i * i <= n; i += 2) // start from 3, jump 2 numbers
    if (n % i == 0) // no need to check even numbers
      return 0;
  return 1;
}

int main()
{
	std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll n,t=0,l=0;
  cin>>n;
  if(is_prime(n)) cout<<1<<endl;
  else cout<<0<<endl;
	return 0;
}
