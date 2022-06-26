// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// using ull = unsigned long long;
//
// bool cmp ( const pair<int,int> &p1, const pair<int, int> &p2  )
// {
//     if ( p1.first > p2.first ) return 1;
//     if ( p1.first == p2.first ) return ( p1.second < p2.second );
//     return 0;
// }
//
// int main(int ab_ohab, char const *abohab[])
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int n,k;
//     int ans=0;
//     cin>>n>>k;
//     std::vector<pair<int,int>>v(n);
//
//     for ( int i = 0; i < n; i++ )
//     {
//         cin >> v[i].first >> v[i].second;
//     }
//
//     sort ( v.begin(), v.end(),cmp);
//
//     for ( auto u : v )
//     {
//         if ( u == v[k-1] ) ans++;
//     }
//     cout << ans << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v (n);

    for ( int i = 0; i < n; i++ ) {
        cin >> v[i].first >> v[i].second;
        v[i].first *= -1;
    }

    sort ( v.begin(), v.end() );

    int ans = 0;

    for ( auto u : v ) {
        if ( u == v[k-1] ) ans++;
    }
    cout << ans << endl;

}
