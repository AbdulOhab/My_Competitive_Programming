#include <bits/stdc++.h>
using namespace std;

int T, a, b, c, k, ca=1;

int main() {
    cin >> T;
    while (T--) {
        cin >> a >> b >> c >> k;
        int sum = a + b + c;
        cout << "Case " << ca++ << ": ";
        if (sum % 3 == 0 && k % 3 == 0) {
            cout << "Peaceful" << endl;
        } else {
            cout << "Fight" << endl;
        }
    }
    return 0;
}
