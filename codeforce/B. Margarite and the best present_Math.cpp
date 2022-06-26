#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int ans(int a)
{
	if(a%2==0) return a/2;
	else return a/2-a;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int l,r;
		cin>>l>>r;
		cout<<ans(r)-ans(l-1)<<endl;
	}
}
// int main(int ab_ohab, char const *abohab[]){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
//   int n;
// 	cin>>n;
//   cin.ignore();
// 	for(int i=0;i<n;i++)
//   {
//     ll l,r;
//     cin>>l>>r;
//     ll ans=0;
//     for(int i=l;i<=r;i++)
//     {
//       if(i%2==0)
//       {
//         ans+=i;
//       }
//       else {
//         int sbtrect=i-i*2;
//         ans+=sbtrect;
//       }
//     }
//     cout<<ans<<endl;
//   }
// 	return 0;
// }
