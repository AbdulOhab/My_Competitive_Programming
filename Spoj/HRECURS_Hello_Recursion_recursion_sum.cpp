#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int sum(int Array[],int n){
  if(n<=0)
  {
    return 0;
  }
  return (sum(Array,n-1)+Array[n-1]);
}

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int a;
    cin>>a;
    int arr[a];
    for(int j=0; j<a; j++)
    {
     cin>>arr[j];
    }
    //printf("Case %d: %d\n",i,sum(arr,a) );
    cout<<"Case "<<i<<": "<<sum(arr,a)<<endl;
    }
  return 0;
}
// cin.clear();
// cin.ignore();
