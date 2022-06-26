#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    bool x = true;
    int len=s.size();
    for(int i=0; i<len; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            i+=2;
            if(x == false)
            {
                cout<<" ";
            }
            continue;

        }
        else
        {
            cout<<s[i];
            x = false;
        }
    }
    return 0;
}
