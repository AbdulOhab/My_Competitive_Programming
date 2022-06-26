#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
int main()
{
	optimize()
	int T;
	cin>>T;
  while (T--) {
    int a, b, c, d, k;
		cin >> a >> b >> c >> d >> k;
    int an=abs(a-c)+abs(b-d);
    if(an>k) cout<<"No"<<endl;
    else if((k-an)%2) cout<<"No"<<endl;
    else cout << "YES" << endl;
  }
	return 0;
}
