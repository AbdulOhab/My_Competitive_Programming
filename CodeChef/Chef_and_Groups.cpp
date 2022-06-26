#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int printT()
{
    ll n;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        string s;
        cin>>s;
        int jy=0;
        int len=s.length();
        for(int j=0; j<len; j++)
        {
                if(s[j]=='1')
                {
                    jy++;
                    if(s[j]==s[j+1])jy--;
                }
        }
        cout<<jy<<endl;
    }
    cout << endl;

}
int main()
{
    printT();
}
