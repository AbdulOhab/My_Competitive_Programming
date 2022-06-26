//Apartments
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>v1;
  vector<int>v2;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v1.push_back(a);
  }
  for(int i=0;i<m;i++)
  {
    int b;
    cin>>b;
    v2.push_back(b);
  }
  sort(v2.begin(),v2.end());
  sort(v1.begin(),v1.end());
  int cnt=0;
  int i=0,j=0;
  while(i<n and j<m)
	{
    if(v1[i]-k>v2[j])
    {
      j++;
    }
    else if(v1[i]+k<v2[j])
    {
      i++;
    }
    else
    {
      j++;
      i++;
      cnt++;
    }
	}

  cout<<cnt;
  return 0;
}

// while(i<n and j<m)
// {
//   if(v1[i]-v2[j]<=k)
//   {
//     i++;
//     j++;
//     cnt++;
//   }
//   else if(v1[i]<v2[j])
//   {
//     i++;
//   }
//   else
//   {
//     j++;
//   }
// }
