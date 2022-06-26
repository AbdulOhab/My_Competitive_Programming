#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k=4;
        cin>>n;
        while(n%(k-1)!=0)
        {
            k*=2;
        }
        cout<<n/(k-1)<<endl;
    }
}
