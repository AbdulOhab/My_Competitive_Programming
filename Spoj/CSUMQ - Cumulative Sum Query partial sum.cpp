#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=1e5+123;

int psum[mx];
int main()
{
     optimize();
     int n;
     cin>>n;
     for(int i= 1; i<=n; i++)
     {
       int t;
       cin>>t;
       psum[i] = psum[i-1] +  t;
     }
     //for(auto u:psum) cout<<u<<" ";
     int Q;
     cin>>Q;
     while(Q--)
     {
       int l, h;
       cin >> l >> h;
       l++,h++;
       cout << psum[ h ] - psum[ l - 1 ] <<endl;
     }
     return 0;
}
