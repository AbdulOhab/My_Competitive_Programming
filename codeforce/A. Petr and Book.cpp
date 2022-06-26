#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int n;
  cin>>n;
  int arr[7];
  for(int j=0;j<7;j++)
  {
    cin>>arr[j];
  }
  int i;
  while(n>0)
  {
    for(i=0;i<7;i++)
    {
    n-=arr[i];
    if(n<=0) break;
    }
  }
  cout<<i+1;
	return 0;
}
