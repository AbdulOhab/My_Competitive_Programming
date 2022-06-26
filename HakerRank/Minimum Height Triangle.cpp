#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//Minimum Height Triangle
int main(int argc, char const *argv[])
{
    optimize();
    int area,base;
    cin>>base>>area;
    cout<<ceil((float)(2*area)/base)<<endl;
   return 0;
}
