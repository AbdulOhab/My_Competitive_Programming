#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 10;
int main()
{
//    int a,b,c,d;
//    ll arr[N];
//    cin>>a>>b;
//
//    for(int i=0; i<b; i++)
//    {
//        cin>>c>>d;
//        arr[c]++;
//        arr[d+1]--;
//
//    }
//    int ans=0;
//    for (int i = 0; i < a; i++)
//    {
//        arr[i]+= arr[i-1];
//    }
//    for(int i=1; i<=b; i++)
//    {
//        if(arr[i]==b)ans++;
//    }
//    cout<<ans<<endl;
//
    int N, M;
    cin >> N >> M;
    int L = -1e9;
    int R = 1e9;
    for (int i = 0; i < M; ++i)
    {
        int l, r;
        cin >> l >> r;
        L = max(L, l);
        R = min(R, r);
    }
    cout << max(0, R - L + 1) << endl;
    return 0;
}

