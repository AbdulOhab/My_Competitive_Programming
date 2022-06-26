#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main()
{
    int n, q, a, b, s = 0;
    cin >> n >> q;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    while (q--)
    {
        cin >> a >> b;
        if (a == 2)
        {
            if (b <= s)
            {
                puts("1");
            }
            else
            {
                puts("0");
            }
        }
        if (a == 1)
        {
            if (arr[b-1] == 1)
            {
                arr[b-1] = 0;
                s--;
            }
            else
            {
                arr[b-1] = 1;
                s++;
            }
        }
    }
// for(int i=0;i<n;i++)
// {
//   cout<<arr[i]<<" ";
// }
    return 0;
}
