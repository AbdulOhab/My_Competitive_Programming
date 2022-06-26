#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long eps=13-6;
int main()
{
	optimize();
	int T;
	cin>>T;
	int tc=1;
	while(T--)
	{
    double AB,AC,BC,R;
    cin>>AB>>AC>>BC>>R;

    double ratio=R/(R+1);
    fraction();
    cout << "Case " << tc++ << ": " << AB*sqrt(ratio) << endl;
	}
	return 0;
}
