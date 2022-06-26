//codechef
#include<iostream>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        int t;
        int flag2=0;
        cin>>t>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i+1]==s[i])
                flag2++;
        }
        cout<<flag2<<endl;
    }
    return 0;
}

