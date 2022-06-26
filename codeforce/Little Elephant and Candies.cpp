#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,N,C,A,d;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>N>>C;
        for(int j=0; j<N; j++)
        {
            cin>>d;
            C-= d ;
        }
        cout<<(C<0 ? "No":"Yes")<<endl;
    }

    return 0;
}
