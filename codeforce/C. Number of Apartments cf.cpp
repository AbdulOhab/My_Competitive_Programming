#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    for(int i = 0; i <= n; i += 3)
    {
        for(int j = 0; j <= n; j += 5)
        {
            if((n-(i+j))%7 == 0)
            {
                cout << i/3 << " " << j/5 << " " << (n-(i+j))/7 << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}
int main()
{
    solve();
    return 0;
}
