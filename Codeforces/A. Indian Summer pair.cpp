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
  std::vector<pair<string,string>> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i].first>>v[i].second;
  }
  sort(v.begin(),v.end());
	int size=unique(v.begin(),v.end())-v.begin();
	cout<<size<<"\n";
	return 0;
}
