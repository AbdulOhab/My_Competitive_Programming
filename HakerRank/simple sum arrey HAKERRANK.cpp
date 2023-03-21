#include <bits/stdc++.h>

using namespace std;

int simple(int n, vector <int> ar) {
    int sum=0;
    for(int i = 0; i < n; i++){
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++){
       cin >> ar[i];
    }
    int result = simple(n, ar);
    cout <<result;
    return 0;
}
