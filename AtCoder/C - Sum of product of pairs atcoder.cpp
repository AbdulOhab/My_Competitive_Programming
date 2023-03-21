#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    ll a[200005],sum;
    ll mod=1e9+7;

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans+a[i]*sum)%mod;
        sum = sum+ a[i];
        sum = sum%mod;
    }
    cout << ans;
}
//#include <iostream>
//using namespace std;
//
//// required function
//int findProductSum(int A[], int n)
//{
//    int array_sum = 0;
//    for (int i = 0; i < n; i++)
//        array_sum = array_sum + A[i];
//
//    int array_sum_square = array_sum * array_sum;
//    int individual_square_sum = 0;
//    for (int i = 0; i < n; i++)
//        individual_square_sum += A[i]*A[i];
//
//
//    return (array_sum_square - individual_square_sum)/2;
//}
//
//// Driver code
//int main()
//{
//    long long int n,i,j;
//    int arr[100000];
//    cin>>n;
//
//    for(i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    cout<< findProductSum(arr, n)<<endl;
//    return 0;
//}
