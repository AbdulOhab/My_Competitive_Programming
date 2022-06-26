#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

const int mx = 1e5+123;
int a[mx];

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  priority_queue <int> q;

    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) cin >> a[i];

    for ( int i = 0; i < n; i++ ) {
        q.push ( a[i] );
        if ( q.size() >= 3 ) {
            int a1 = q.top();
            q.pop();

            int a2 = q.top();
            q.pop();

            int a3 = q.top();
            q.pop();

            cout << 1LL * a1 * a2 * a3 << endl;

            q.push ( a1 );
            q.push ( a2 );
            q.push ( a3 );
        }
        else cout << -1 << endl;
    }

	return 0;
}
