#include<bits/stdc++.h>
using namespace std;
string s;
int f[26];
int main()
{
    getline(cin,s);
    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            f[s[i]-'a']=1;
        }
    }
    int i;
    for(i=0; i<26; i++)
    {
        if(f[i]==0)
        {
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}
