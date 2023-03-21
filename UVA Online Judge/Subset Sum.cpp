#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define endl "\n"

int subset_sum(int arr[],int size,int sum){
  int dp[size+1][sum+1];

  for(int i=0;i<=size;i++){
    for(int j=0;j<=sum;j++){
      if(i== 0 and j==0){
        dp[i][j] = 1;
      }
      else if(i == 0 and j!=0){
        dp[i][j] = 0;
      }
      else if(arr[i-1]>j){
        dp[i][j] = dp[i-1][j];
      }
      else{
        dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
      }
    }
  }

  for(int i=0;i<=size;i++){
    for(int j=0;j<=sum;j++){
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }

  return dp[size][sum];
}

int main(int argc, char const *argv[])
{
   int arr[] = {1,3,4,7,10};
   int sum = 9;
   int size = sizeof(arr)/sizeof(arr[0]);
   //cout<<size<<endl;

   cout<<subset_sum(arr,size,sum)<<endl;


   return 0;
}
