#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//#ifndef ONLINE_JUDGE
	//freopen("D:/Coding_CP/Abdul_Ohab_InputFile.txt", "r", stdin);
	//freopen("D:/Coding_CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
	//#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[0]<<endl;
  return 0;
}
