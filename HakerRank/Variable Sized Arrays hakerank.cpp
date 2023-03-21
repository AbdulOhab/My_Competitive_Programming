#include <bits/stdc++.h>
#include <vector>
#include <iostream>>

using namespace std;

int main()
{

    int n,q,k,s,a,b;
    cin>>n>>q;
    int* seq[n];
    for(int i=0; i<n; i++)
    {
        cin>>k;

        seq[i]=new int[k];

        for(int j=0; j<k; j++)

        cin>>seq[i][j];
    }
    while(q--)
    {
        cin>>a>>b;
        cout<<seq[a][b]<<endl;
    }
    return 0;
}
//int main()
//{
//    int n,q;
//    cin>>n>>q;
//    vector< vector <int >> v;
//    for(int i=0; i<n; i++)
//    {
//        int r;
//        cin>>r;
//        for(int j=0; j<r; j++)
//        {
//            cin>>v[i][j];
//        }
//    }
//    for(int t=0; t<q; t++)
//    {
//        int i1,j1;
//        cin>>i1>>j1;
//        cout<<v[i1][j1];
//    }
//return 0;
//}
