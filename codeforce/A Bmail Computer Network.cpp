#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;
int arr[200000],n;

void round(int anti)
{
	if(anti!=1)
	{
		round(arr[anti]);
	}
	cout<<anti<<" ";
}

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=2;i<=n;i++) cin>>arr[i];
	round(n);
	return 0;
}
