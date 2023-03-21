//A. Red and Blue Beans
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  while(n--)
  {
    int r,b,d;
    cin>>r>>b>>d;
    double t=abs(r-b);
    //cout<<t/min(r,b)<<"t\n";
    if(t/min(r,b)<=d) cout<<"YES"<<"\n";
    else cout<<"NO\n";
  }
	return 0;
}
