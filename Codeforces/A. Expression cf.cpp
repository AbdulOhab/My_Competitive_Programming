#include <bits/stdc++.h>
using namespace std;
using ull=unsigned long long;
typedef long long ll;
int main()
{
    vector<int> v;
    ll a,b,c;
    cin>>a>>b>>c;

    v.push_back(a+b*c);
    v.push_back(a*(b+c));
    v.push_back(a*b*c);
    v.push_back((a+b)*c);
    v.push_back(a+b+c);
    cout<<*max_element(v.begin(), v.end())<<endl;
    return 0;
}
