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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,d,temp;
	while(cin>>a>>b>>c>>d)
	{
    if(a==0 and b==0 and c==0) break;

    int ans=1080;
		if(b>a) ans+=((40-(b-a))*9);
		else ans+=((a-b)*9);

		if(b>c) ans+=((40-(b-c))*9);
		else ans+=((c-b)*9);

		if(c<d) ans+=((40-(d-c))*9);
		else ans+=((c-d)*9);

    cout<<ans<<endl;
	}
	return 0;
}
