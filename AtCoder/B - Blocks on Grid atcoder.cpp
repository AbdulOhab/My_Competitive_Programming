#include <bits/stdc++.h>
using namespace std;
int a[108][108];
int main()
{
	int n,m,mn=1000,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			mn=min(a[i][j],mn);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			sum+=a[i][j]-mn;
		}
	}
	cout<<sum;
	return 0;
}
