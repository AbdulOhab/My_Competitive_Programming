#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

bool isVowel ( char c )
{
    return ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
}

int main(int ab_ohab, char const *abohab[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<string> v;
    int flag[]= { 5,7,5};
    for(int i=0; i<3; i++)
    {
        // string s;
        // getline(cin,s);
        // cin.ignore();
        // v.push_back(s);
        string s;
        char c;
        cin >> c;
        getline ( cin, s );
        s = c + s;

        v.push_back ( s );
    }
    //for(auto u:v) cout<<u<<"\n";
    for(int j=0; j<3; j++)
    {
        int t=0;
        for(auto u:v[j])
        {
            if(isVowel(u)) t++;
        }
        if(t!=flag[j]) return cout<<"NO\n",0;
    }
    cout<<"YES\n";
    return 0;
}
