#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
using namespace std;
#define endl "\n"
#define ll long long int

ll getsum(ll n)
{
	//return ( n * ( n + 1 ) ) / 2;
	return ( n * ( n + 1 ) ) >> 1; //or bitwise
}

int main()
{
		ios_base::sync_with_stdio(0);
	  cin.tie(0);
	  cout.tie(0);
		int T;
		cin>>T;

		while(T--)
		{
	    ll y;
	    cin>>y;
			ll low=0;
			ll high=1e5;
			ll ans=-1;
		  while(low <= high) {
				ll mid = low + (high-low)/2;
				if(getsum(mid)==y)
				{
					ans = mid;
					break;
				}
				if(getsum(mid)<y)
				{
					low=mid+1;
				}
				else
				{
					high=mid-1;
				}
			}
				if(ans==-1) cout<<"NAI"<<endl;
				else cout<<ans<<endl;
		}
		return 0;
}
// //brue force TLE
// int main()
// {
// 	ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cout.tie(0);
// 	int T;
// 	cin>>T;
// 	// cin.ignore(); must be there when using getline(cin, s)
// 	while(T--)
// 	{
//     int y;
//     cin>>y;
//     int sum=y;int t=0;
//     for(int i=1;i<=y;i++)
//     {
//       sum-=i;
//       t++;
//       if(sum<=0) break;
//     }
//     int l=t;
//     int lik=l*(l+1)/2;
//     if(lik!=y) cout<<"NAI"<<endl;
//     else cout<<l<<endl;
// 	}
// 	return 0;
// }
