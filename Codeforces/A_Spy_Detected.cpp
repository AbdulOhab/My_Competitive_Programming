#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin>>n;
  while(n--)
  {
    int m;
    cin>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
      cin>>arr[i];
    }
    int ar1=arr[0];
    int ar2=arr[1];
    if(ar1==ar2)
    {
      for(int i=2;i<m;i++)
      {
        if(arr[i]!=ar1)
        {
          cout<<i+1<<endl;
          break;
        }
      }
    }
    else
    {
      int ar3=arr[2];
      if(ar1==ar3)
      {
        cout<<2<<endl;
      }
      else
      {
        cout<<1<<endl;
      }
    }
  }
  return 0;
}
