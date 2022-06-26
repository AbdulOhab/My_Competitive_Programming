#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[])
{

    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
        for(int j=i+1; j<s.size(); j++)
            for(int k=j+1; k<s.size(); k++)
                if(s[i]== 'Q' and s[j]=='A' and s[k]=='Q')
                {
                    cnt++;
                }
cout<<cnt<<endl;

return 0;
}
