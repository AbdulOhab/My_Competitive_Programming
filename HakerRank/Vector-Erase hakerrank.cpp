//Vector-Erase
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, pos, right, left;

    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++)
        cin >> c[i];

    cin >> pos;
    cin >> left >> right;

    c.erase(c.begin() + pos - 1);
    c.erase(c.begin() +left - 1, c.begin() + right - 1);

    cout << c.size() << endl;
    for (int i = 0; i <c.size(); i++)
        cout << c[i] << " ";

    return 0;
}

