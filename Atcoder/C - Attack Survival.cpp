#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c;
    vector<int> n(a);

    for(int i=0; i<c; i++)
    {
        cin>>d;
        d--;
        n[d]++;
    }

    for(int i=0; i<a; i++)
    {
        if(b-c+n[i]>0)
            puts("Yes");
        else
            puts("No");
    }

    return 0;
}
