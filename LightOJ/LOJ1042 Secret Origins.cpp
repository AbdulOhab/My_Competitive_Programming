#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

string dec_to_bin(ll n)
{
	if(n==0) return "0";
	string bits="";
	while(n>0)
	{
		bits = ((n & 1) == 0 ? '0' : '1') + bits;
		n >>= 1;
	}
	return bits;
}
int bin_to_dec(string n)
{
	ll num=0;
	reverse(n.begin(),n.end());
	for(int i=0;i<n.size();i++)
	{
		if(n[i]=='1')
		{
			num+=pow(2,i);
		}
	}
	return num;
}
// string dec_to_bin(int n) {
//     string ret = "";
//     for (int i = 31; i >= 0; i--) {
//         int k = 1 << i;
//         ret += (n & k)? '1' : '0';
//     }
//     return ret;
// }
//
// int bin_to_dec(string s) {
//     int ret = 0;
//     for (int i = 0; i < 32; i++)
//         ret = (2*ret) + s[i] - '0';
//     return ret;
// }

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int test;
  cin>>test;
	int t=1;
  while(test--)
  {
    int n;
    cin>>n;
		string bin=dec_to_bin(n);
		//cout<<bin<<endl;
		next_permutation(bin.begin(), bin.end());
		//string s=to_string(n);
		cout<<"Case "<<t++<<": "<<bin_to_dec(bin)<<endl;
  }
	return 0;
}
