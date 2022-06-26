#include <iostream>
#include <cstdio>
#include <math.h>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll k=0;
    ll l;
    for(int i=1;i<=n;i++)
    {
        std::cin>>l;
        k=k+l;
    }
    std::cout<<k*k<<endl;

    return 0;
}
