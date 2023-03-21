#include <bits/stdc++.h>

typedef long double ld;
typedef long long ll;

using namespace std;

#define MAXN (1 << 20)

int n, m;
vector<int> a[MAXN];
int h[MAXN];
int g[MAXN];

int main() {
	cin >> n >> m;
	memset(g, 0, sizeof(g));
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}

	for (int i = 0; i < m; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		a[v1].push_back(v2);
		a[v2].push_back(v1);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < a[i].size(); j++) {
			if (h[a[i][j]] >= h[i]) {
				g[i] = 1;
			}
		}
	}

	int ret = 0;
	for (int i = 1; i <= n; i++) {
		ret += 1 - g[i];
	}

	cout << ret << endl;
	return 0;
}
