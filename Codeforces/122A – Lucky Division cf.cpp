//#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

int main()
{
    int n;
    cin>>n;

    if(n%47==0||n%74==0||n%744==0||n%474==0||n%4==0||n%7==0||n%77==0||
            n%44==0||n%444==0||n%777==0||n%447==0||n%477==0||n%747==0||n%774==0)
    {
        std::cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
