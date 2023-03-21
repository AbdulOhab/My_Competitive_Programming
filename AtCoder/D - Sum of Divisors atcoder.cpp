#include <bits/stdc++.h>
using namespace std;
using l = long long;


int main() {
    l n;
    cin >> n;

    l res = 0;

    for (int i = 1; i <= n; i++) {
        l terms = n/i;
        l start = i;S
        l  end = i * terms;
        res += (start + end) * terms / 2;
    }

    cout << res << endl;
    return 0;
}

// int main()
// {
//     int n;
//     cin>>n;
//
//     llong ans=0;
//     for(llong i=1; i<=n; ++i)
//     {
//         llong tmp=n/i;
//         ans+=i*tmp*(tmp+1)/2;
//     }
//
//     cout<<ans<<endl;
// }
