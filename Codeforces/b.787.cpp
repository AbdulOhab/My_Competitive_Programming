#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long s;
    cin >> s;
    int x, z, ans;
    ans = 999;
    while(s > 99)
    {
        x = s % 1000;
        z = max(753 - x, x - 753);
        s = s / 10;
        ans = min(z, ans);

    }
    cout << ans << endl;
}
