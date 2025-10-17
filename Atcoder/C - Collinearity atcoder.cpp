#include <iostream>
using namespace std;

int n;
int x[100], y[100];

int main()
{
    int i, j, k;

    cin >> n;
    for (i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                int x1 = x[j] - x[i];
                int y1 = y[j] - y[i];
                int x2 = x[k] - x[i];
                int y2 = y[k] - y[i];
                int crs = x1 * y2 - x2 * y1;
                if (crs == 0)
                {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
