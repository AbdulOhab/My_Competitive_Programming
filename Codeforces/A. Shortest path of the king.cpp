#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	char a,b,c,d;
  cin>>a>>b>>c>>d;
	cout<<max(abs(a-c),abs(b-d))<<endl;

	while(a!=c || b!=d)
	{
		if(a<c) cout<<"R",a++;
		if(a>c) cout<<"L",a--;
		if(b>d) cout<<"D",b--;
		if(b<d) cout<<"U",b++;

		cout<<endl;
	}
	return 0;
}
