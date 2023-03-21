#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n,t;
  cin>>n;
  map<int,int>v;
  int mx=0;
  for (size_t i = 0; i < n; i++) {
    cin>>t;
    v[t]++;
    mx=max(mx,v[t]);
  }
  //for(auto u:v) cout<<u.first<<" "<<u.second<<endl;
  cout<<mx<<"\n";
	return 0;
}
//viya solution
// #include<bits/stdc++.h>
// using namespace std;
//
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//
// const int mx = 5e3+123;
// int a[mx];
//
// int main()
// {
//
//     optimize();
//
//     map<int, int> freq;
//     int n;
//     cin >> n;
//     for ( int i = 0; i < n; i++ ) {
//         cin >> a[i];
//         freq[a[i]]++;
//     }
//
//     int ans = 0;
//
//     for ( int i = 0; i < n; i++ ) ans = max ( ans, freq[a[i]] );
//     cout << ans << endl;
// }
//the solution is executed with error 'out of bounds'
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// using ull = unsigned long long;
//
// int main(int ab_ohab, char const *abohab[]){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
//   int nt;
//   cin>>nt;
//   int arr[nt];
//   for(int i=0;i<nt;i++)
//   {
//     cin>>arr[i];
//   }
//   int ans=0;
//   sort(arr,arr+nt);
//   for(int i=0;i<nt;i++)
//   {
//     if(arr[i]<arr[i+1])
//     {
//       ans++;
//     }
//     if(arr[i]<arr[i+1] and arr[i+1]<arr[i+2])
//     {
//       ans--;
//     }
//   }
//   cout<<ans<<endl;;
// 	return 0;
// }
