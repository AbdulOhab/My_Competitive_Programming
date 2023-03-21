#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,lenght,sum,t;
    string  n;
    int cot=0,flag=0;
    cin>>t;
    cin>>n;
    for(i=0; i<=n.length(); i++)
    {
        if(n[i]=='A' && n[i+1]=='B' && n[i+2]=='C')
        {
            cot++;
        }
    }

    cout<<cot<<endl;


}

