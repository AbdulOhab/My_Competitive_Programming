#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,f;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            cin>>f;
            if((f+k)%7==0)
            {
                flag++;
            }
        }
        cout << flag<<"\n";
    }
    return 0;
}
