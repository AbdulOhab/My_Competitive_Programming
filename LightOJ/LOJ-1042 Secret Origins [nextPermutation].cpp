#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
const double PI = acos(-1);
const double eps = 1e-9;
#define MOD 1000000007
#define mem(a,val) memset(a,val,sizeof(a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


string dec_bin(ll n)
{
    string ans;
    while(n>0)
    {
        ans+=((n%2) + '0');
        n/=2;
    }
    for(; ans.length()<=30;)
        ans+='0';
    reverse(ans.begin(),ans.end());
    return ans;
}

ll bin_to_dec(string n)
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
string bubbleSort(string s,int x)
{
    for(int i=x;i<s.length();i++)
        for(int j=i+1;j<s.length();j++)
            if(s[i]>s[j])
                swap(s[i],s[j]);
    return s;
}
string nextPermutation(string s)
{
    for(int i=s.length()-1;i>0;i--)
    {
        if(s[i]>s[i-1]){
            swap(s[i],s[i-1]);
            s=bubbleSort(s,i+1);
            break;
        }
    }
    return s;
}


int main(int argc, char const *argv[])
{
   optimize();
   int T;
   cin>>T;
   for (size_t i = 1; i <= T; i++) {
     ll s;
     cin>>s;
     string K = dec_bin(s);
     string y = nextPermutation(K);
     cout << "Case " << i << ": " << bin_to_dec(y)  << endl;
   }
   return 0;
}
