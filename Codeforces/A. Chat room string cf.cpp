///58A
#include<bits/stdc++.h>
using namespace std;
string s,H;
int main()
{
    cin>>s;
    H="hello";
    int flag=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==H[flag])
        {
            flag++;
        }
    }
    cout<<flag<<endl;
    if(flag>=5)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
