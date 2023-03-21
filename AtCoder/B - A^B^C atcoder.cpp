#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
    ull a,b,c;

    cin>>a>>b>>c;
    ull d,e;
    string s;
    d=pow(b,c);
    e=pow(a,d);
    s=to_string(e);

    cout<<s.back()<<endl;
    //cout<<e<<endl;
  return 0;
}
