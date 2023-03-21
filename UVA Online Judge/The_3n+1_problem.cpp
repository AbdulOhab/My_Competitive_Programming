#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int FirstrCycle(long int n)
{
    long int i=1;
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n=n/2;
        }
        else
        {
            n=(3*n)+1;
        }
        i++;
    }
    return i;
}
int main()
{
    int x,y,high,low,mx;
    while(cin>>x>>y)
    {
        if(x<y)
        {
            low=x;
            high=y;
        }
        else
        {
            low=y;
            high=x;
        }

        mx=FirstrCycle(low);
        for(int i=low+1; i<=high; i++)
        {
            int l=FirstrCycle(i);
            if(l>mx)
            {
                mx=l;

            }
        }
        cout<<x<<" "<<y<<" "<<mx<<"\n";
    }
    return 0;
}
//anadur One:
// #include <cstring>
// #include <map>
// #include <deque>
// #include <queue>
// #include <stack>
// #include <sstream>
// #include <iostream>
// #include <iomanip>
// #include <cstdio>
// #include <cmath>
// #include <cstdlib>
// #include <ctime>
// #include <algorithm>
// #include <vector>
// #include <set>
// #include <complex>
// #include <list>
// #include <climits>
// #include <cctype>
// #include <bitset>
//
// using namespace std;
//
// #define all(x) x.begin(),x.end()
// #define allr(x) x.rbegin(),x.rend()
//
// void fastInOut();
//
// int eas(int x) {
// 	if (x == 1)
// 		return 1;
// 	if (x & 1)
// 		return eas(3 * x + 1) + 1;
// 	else
// 		return eas(x / 2) + 1;
// }
// int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "rt", stdin);
// //freopen("output.txt", "wt", stdout);
// #endif
// 	fastInOut();
// 	int n, m;
// 	while (cin >> n >> m) {
// 		int mx = -1e9;
// 		for (int i = min(n, m); i <= max(n, m); i++)
// 			mx = max(mx, eas(i));
// 		cout << n << " " << m << " " << mx << endl;
// 	}
// }
// void fastInOut() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(NULL), cout.tie(NULL);
// }
