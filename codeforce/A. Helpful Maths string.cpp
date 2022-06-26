#include<bits/stdc++.h>
using namespace std;
using ll=long long int;

int main()
{
    string s;
    vector<ll>H;
    cin>>s;
    ll flag=s.size();
    for(ll i=0; i<flag; i++)
    {
        if(s[i]!='+')
        {
            H.push_back(s[i]-'0');
        }

    }
    sort(H.begin(),H.end());
    cout<<H[0];
    for(ll i=1; i<H.size(); i++)
    {
        cout<<"+"<<H[i];
    }
    cout<<endl;
}
//int main()
//{
//	ll t=1;
//	while(t--)
//	{
//		solve();
//	}
//}
