#include<iostream>
#include <algorithm>
using namespace std;

//typedef long long LL;
//
//inline bool check(LL i, LL j, LL k)
//{
//	if(i == j || j == k || i == k) return false;
//	return i + j > k && i + k > j && j + k > i;
//}

int main ()
{
    int n,ans,a[110];
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            for(int k=j+1; k<=n; k++)
            {
                if(a[i]!=a[j] && a[j]!=a[k] && a[i]!=a[k] && a[i]+a[j]>a[k] && abs(a[i]-a[j])<a[k]) ans++;
            }
        }
    }
//                if(check(a[i], a[j], a[k]))
//					ans ++;
    cout<<ans;

    return 0;
}
