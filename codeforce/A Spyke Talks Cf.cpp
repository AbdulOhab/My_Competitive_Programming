#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  ll n, k;
  int arr[10001];
  cin >> n;
  int flag=0;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(ar,ar+n);
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)continue;
      if(arr[i]==arr[i+1])flag++;
      if(arr[i]==arr[i+2])
      {
          cout<<-1;return 0;
      }
  }
   cout<<flag<<endl;
}
