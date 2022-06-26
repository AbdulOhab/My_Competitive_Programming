//A.Game With Sticks
//A. Arrival of the General
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
    int a,b;
    cin>>a>>b;
    int low;
    low=min(a,b);
    if(low & 1)
    {
        printf("Akshat");
    }
    else
    {
        printf("Malvika");
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        swap(n, m);
    }
    if (n % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }
    return 0;
}
