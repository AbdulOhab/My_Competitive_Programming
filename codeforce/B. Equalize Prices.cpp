#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,k,n;
	cin>>t;
	int i,j;
	for(i=0;i<t;i++){
		cin>>n>>k;
		int mn=INT_MAX;
		int mx=INT_MIN;
		int l;
		for(j=0;j<n;j++){
			cin>>l;
			mn = min(mn,l+k);
			mx = max(mx,l-k);
		}
		if(mx>mn) cout<<-1<<endl;
		else cout<<mn<<endl;
	}
}
