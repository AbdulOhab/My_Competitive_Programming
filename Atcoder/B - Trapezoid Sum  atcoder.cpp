#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
const ll N = 1e5 + 10;
#define rep(i,n) for(int i=0;i<(n);i++)
//int sum(ll a,ll b)
//{
//    ll total = 0;
//    ll counter = x;
//    total=(a+b) * (b-a+1) / 2;
//    while(counter <= y ){
//
//        total += counter;
//        ++counter;
//    }
//    return total;
//}
//int main()
//{
//    int n,t;
//    cin>>n;
//    int fast[N],last[n];
//    vector<int>v;
//    for(int i=1; i<=n; i++)
//    {
//        cin>>fast[i];
//        cin>>last[i];
//
//    }
//    ll flag=0;
//
//    for(int i=1;i<=n; i++)
//    {
//        flag+=sum(fast[i],last[i]);
//
//    }
//    cout<<flag<<endl;
//
//
//    return 0;
//}
int main()
{44
    int n;
    cin>>n;
    ll sm = 0;
    rep(i,n)
    {
        ll a,b;
        cin>>a>>b;
        sm += (a+b) * (b-a+1) / 2;
    }
    cout << sm << endl;
}
//int main() {
//  int n;
//  cin >> n;
//  vector<ll> a(n), b(n);
//  rep(i,n){
//    cin >> a.at(i) >> b.at(i);
//  }
//  ll ans = 0;
//  rep(i,n){
//    ans += (a.at(i)+b.at(i))*(b.at(i)-a.at(i)+1)/2;
//  }
//  cout << ans << endl;
//}
