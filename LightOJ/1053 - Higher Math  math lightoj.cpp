#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

typedef long long ul;
typedef unsigned int ll;
const ll N = 1e5 + 10;

ll a;
ll x,y,z,v[N];
vector<ll>k;
int main()
{
    cin>>a;
    ll c=1;
    while(a--)
    {
        cin>>x>>y>>z;
    if(((x*x)+(y*y)==z*z)||
       ((y*y)+(z*z)==x*x) ||
       ((z*z)+(x*x)==y*y)){
            printf("Case %d: yes\n",c);
        }
        else
        {
            printf("Case %d: no\n", c);
        }
        c++;
    }
    return 0;
}

int main()
{
    unsigned int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        unsigned int a[4];
        cin >> a[0] >> a[1] >> a[2];
        sort(a,a+3);
        if(((a[0]*a[0])+(a[1]*a[1])) == (a[2]*a[2]))
            cout << "Case " << i << ": yes" << '\n';
        else cout << "Case " << i << ": no" << '\n';
    }

