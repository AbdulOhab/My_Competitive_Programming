#include<bits/stdc++.h>
using namespace std;

int main() {

	int a, b;
	double h, m;
	cin >> a >> b >> h >> m;
	m /= 5;
	h += m / 12;
	double degree = min(fabs(h - m), 12 - fabs(h - m)) * 360 / 12;
	double rad = degree *  3.14159265358979323846 / 180;
	printf("%.20f", sqrt(a * a + b * b - 2.0 * a * b * (double)cos(rad)));
}
