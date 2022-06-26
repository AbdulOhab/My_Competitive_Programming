#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[])
{
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i)
    {
        long long n;
        cin >> n;
        int cnt2 = 0, cnt3 = 0, cnt5 = 0;
        while (n % 2 == 0)
        {
            n /= 2;
            ++cnt2;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            ++cnt3;
        }
        while (n % 5 == 0)
        {
            n /= 5;
            ++cnt5;
        }
        if (n != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt2 + cnt3 * 2 + cnt5 * 3 << endl;
        }
    }

    return 0;
}
