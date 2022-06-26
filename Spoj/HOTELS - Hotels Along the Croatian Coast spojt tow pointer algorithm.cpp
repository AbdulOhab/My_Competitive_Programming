//HOTELS - Hotels Along the Croatian Coast
#include<bits/stdc++.h>
#include<algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
using ull=unsigned long long;
typedef long long ll;

bool compare(int a,int b)
{
    return a > b;
}

int main()
{
  ll N,M;
  std::cin >> N>>M;
  int arr[N];
  for(int i=1;i<=N;i++)
  {
    std::cin >> arr[i];
  }

  //std::sort(arr, arr+N,compare);
  //for(int i=0;i<N;i++)
  ll p=1;
  ll p2=1;
  ll ans=0;
  ll ar1=arr[1];

  while(p<=N)
  {
      if(ar1<=M)
      {
          ans=max(ans,ar1);
          p++;
          ar1=ar1+arr[p];
      }
      else
      {
          p2++;
          ar1=ar1-arr[p2-1];
      }
  }

  // ll current=0;
  // ll finalvalue=0;
  // ll l=0;
  // while(current<N)
  // {
  //   finalvalue+=arr[current];
  //   while (l<N and current>m)
  //   {
  //     finalvalue-=arr[l];
  //     l++;
  //
  //   }
  // }
  // for (int i = 0; i<M; i++)
  //   {
  //       if (current + arr[i]<=M)
  //       {
  //           current +=arr[i];
  //       }
  //       else
  //       {
  //           ll remain = N - currentWeight;
  //           finalvalue += arr[i].p*N;
  //           break;
  //       }
  //   }
   std::cout <<ans << '\n';
   // for (int const &i: arr)
   // {
   //      std::cout << i << ' ';
   // }
 return 0;
}
