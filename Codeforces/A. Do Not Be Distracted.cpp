//A. Do Not Be Distracted!
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve()
{
	int N;
	string s;
	cin>>N>>s;
	int flag=0;
	char c=s[0];
	for(int i=1 ; i<N ; i++)
	{
		if(s[i]!= c)
		{
			if(count(s.begin()+i,s.end(),c)==0)
			{
				c=s[i];
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0) cout<<"YES\n";
	else cout<< "No\n";
}
int main(int argc, char const *argv[])
{
   optimize();
   int test;
   cin>>test;
	 while(test--)
	 {
		 solve();
	 }
   return 0;
}
/*
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB
NO
NO
YES
YES
YES*/
