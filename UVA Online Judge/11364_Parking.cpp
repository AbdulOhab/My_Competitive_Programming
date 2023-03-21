#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  //ios;
  #ifndef ONLINE_JUDGE
  freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
  freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
  #endif
  int Number_of_testcase;
  cin>>Number_of_testcase;
  while(Number_of_testcase--)
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    ll ans=0;
    sort(arr,arr+n);
    ans+=arr[n-1]-arr[0];
    reverse(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
      int t=arr[i]-arr[i+1];
      //cout<<t<<endl;
      ans+=t;
    }
    cout<<ans<<endl;
  }
  return 0;
}
