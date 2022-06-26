#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, t;
    int ios = 0;
    cin >> n >> k;
    for (int j=0; j<n; j++)
    {
        cin >> t;
        if (t % k == 0)
            ios++;
    }
    cout << ios << "\n";
    return 0;
}
