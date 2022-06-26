#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[1000];
    int N,j,i;
    cin >> N;

    for(i=1; i<=N; i++)
    {   int t;
        cin>>t;
        A[t]=i;
    }
    for(j=1;j<=N;j++)
    {
            cout<<A[j]<<endl;
    }
    return 0;
}
