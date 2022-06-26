// //map solution
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// using ull = unsigned long long;
//
// int main(int ab_ohab, char const *abohab[]){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
//   int a;
//   cin>>a;
//   map<string,int>v;
//   int cnt=0;
//   string s;
//   for(int i=0;i<a+1;i++)
//   {
//     getline(cin,s);
//     v[s]++;
//
//     if(v[s]>cnt) cnt=v[s];
//   }
//   cout<<cnt<<"\n";
// 	return 0;
// }
// arr or vector
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int arr[25][67];
int k;
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int a;
  cin>>a;
  for(int i=0;i<a;i++)
  {
    int a,b;
    cin>>a>>b;
    arr[a][b]++;
    if(arr[a][b]>k) k=arr[a][b];
  }
  cout<<k;
  for(int i=1;i<=a;i++)
  {
    for(int j=1;j<=i;i++)
    {
      cout<<arr[i][j]<<" ";
    }
  }
	return 0;
}
