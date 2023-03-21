#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
unsigned int gcd(unsigned int u, unsigned int v)
{
    // simple cases (termination)
    if (u == v)
        return u;
    if (u == 0)
        return v;
    if (v == 0)
        return u;

    // look for factors of 2
    if (~u & 1) // u is even
        if (v & 1) // v is odd
            return gcd(u >> 1, v);
        else // both u and v are even
            return gcd(u >> 1, v >> 1) << 1;
    if (~v & 1) // u is odd, v is even
        return gcd(u, v >> 1);

    // reduce larger argument
    if (u > v)
        return gcd((u - v) >> 1, v);
    return gcd((v - u) >> 1, u);
}

int  main()
{
    ull n,j=1;
    cin>>n;
    while(n>0)
    {
        ull b,c,result=0,lo=0;
        ull a;
        cin>>a>>b>>c;

        for(int i=0; i<=c; i++)
        {
            lo =gcd(a+i,b+i);
            if( lo == 1)
            {
                result ++;
            }
        }
        cout << "Case "<< j << ": "<< result<< endl;
        j++;
        n--;
    }
    return 0;
}
