#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;
int isPrime;
ll rfib(ll n)
{
  ll ans =0;
  int j=0;
  for(int i=0;i<10000;i++)
  {
    for (int i=2; i<10000; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
              ans+=i;
              j++;
              if(j==n)
              {
                break;
              }
            }
        }
  }
  return ans;
}
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  ll n;
  cin>>n;
  cout<<rfib(n)<<endl;
	return 0;
}
