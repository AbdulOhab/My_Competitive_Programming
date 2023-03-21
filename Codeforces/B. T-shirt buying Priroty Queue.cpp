#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

const int mx = 2e5+123;
int arr[mx];
int a[mx];
int b[mx];
int main(int ab_ohab, char const *abohab[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n;
    for ( int i = 1; i <= n; i++ ) cin >> arr[i];
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    for ( int i = 1; i <= n; i++ ) cin >> b[i];

    priority_queue< int, vector<int>, greater<int> > q[5][5];

    for(int j=1; j<=n; j++)
    {
        q[a[j]][b[j]].push(arr[j]);
    }
    cin>>m;

    while (m--)
    {
        int c;
        cin>>c;
        int ans=INT_MAX;
        int f,b;

        for ( int i = 1; i <= 3; i++ )
        {
            if ( !q[c][i].empty() && q[c][i].top() < ans )
            {
                ans = q[c][i].top();
                f = c, b = i;
            }
        }

        for ( int i = 1; i <= 3; i++ )
        {
            if ( !q[i][c].empty() && q[i][c].top() < ans )
            {
                ans = q[i][c].top();
                f = i, b = c;
            }
        }
        if(ans == INT_MAX ) ans=-1;
        else
        {
            q[f][b].pop();
        }
        cout<<ans<<" ";
    }
    return 0;
}
