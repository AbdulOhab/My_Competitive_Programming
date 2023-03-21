#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {
	int n;
	int pos_max,pos_min;
	int input;
	int result;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		std::cin >> input;
		if(input==1)
		{
			pos_min=i;
		}
		if(input==n)
		{
			pos_max=i;
		}
	}
	// cout<<pos_max<<endl;
	// cout<<pos_min<<endl;
	cout<<max(max(n-pos_max,pos_max-1),max(n-pos_min,pos_min-1))<<endl;
	return 0;
}
// int main(int argc, char const *argv[]) {
// 	int n;
// 	cin >> n;
// 	int one, two;
//   int tab[n];
// 	for(int i = 1; i <= n; i++){
// 		cin >> tab[i];
// 		if(tab[i] == 1){
// 			one = i;
// 		}
// 		else if(tab[i] == n){
// 			two = i;
// 		}
// 	}
// 	int ans;
// 	if(two > one){
// 		ans = max(two - 1, n - one);
// 	}
// 	else if(one > two){
// 		ans = max(one - 1, n - two);
// 	}
//
// 	cout << ans << endl;
// }
// int main() {
//   int a;
//   cin>>a;
//   int arr[a];
//
//   int MaX=INT_MIN;
//   int MiN=INT_MAX;
//   int position1,position2;
//
//   for(auto i=0;i<a;i++)
//   {
//     int b;
//     cin>>arr[i];
//     if(arr[i]>MaX)
//     {
//       MaX=arr[i];
//       position1=i+1;
//     }
//     if(arr[i]<MiN)
//     {
//       MiN=arr[i];
//       position2=i+1;
//     }
//   }
//   cout<<max(a-min(position1,position2),max(position1,position2)-1)<<endl;
//   return 0;
// }
