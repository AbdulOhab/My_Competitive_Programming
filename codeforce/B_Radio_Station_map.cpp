#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n,m;
	cin>>n>>m;
  map<string,string>IP;
	for (int i =0; i<n; i++) {
    string name,ip;
		cin>>name>>ip;
    IP[ip]=name;
  }
	while(m--)
	{
		string name,ip_qurey;
		cin>>name>>ip_qurey;
		ip_qurey.pop_back();
		cout<<name<<" "<<ip_qurey<<"; #"<<IP[ip_qurey]<<endl;
		}
	return 0;
}
