/**
 *    @author: Ab_ohab
 *    created: 03.04.2021 14:04:29 sa
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include<string>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[])
{
    ios;
    string s;
    char k;
    string l="qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans;
    cin>>k;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        int index=l.find(s[i]);
        if(k == 'R')
        {
            ans+=l[index-1];
            //cout<<s[index-1];

        }
        else
        {
            ans+=l[index+1];
            //cout<<s[index+1];
        }
    }
    cout<<ans<<endl;
    return 0;
}
