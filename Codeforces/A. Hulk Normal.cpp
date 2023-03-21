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
	cout<<"I hate ";
  for(int i=2;i<=n;i++)
  {
    if(i%2==0) cout<<"that I love ";
    else cout<<"that I hate ";
  }
  cout<<"it";
	return 0;
}
