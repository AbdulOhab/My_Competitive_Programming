
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef long long ll;
typedef double dl;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define infile() freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
#define outfile()freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);;

void solver()
{
  ll n;
  cin>>n;
  ll arr[n];
  for(int i=1;i<=n;i++) cin>>arr[i];

  ll ans = 0;
  vector< ll > v;
  v.push_back(arr[1]);
  v.push_back(arr[2]);
  ans = ans + arr[1];
  ans = ans + arr[2];
  //for(auto i:v) cout<<i<<" ";
  for(ll i = 3; i<=n ; i++ )
  {
    v.push_back(arr[i]);
    sort(v.begin(),v.end());

    //for(auto i:v) cout<<i<<" ";
    //cout<<endl;
    int len=v.size();
    if(len%2==0)
    {
      int t = (len/2)-1;
      ans+=v[t];
      //cout<<t<<" t"<<endl;
      //cout<<"first  "<<v[t]<<endl;
    }
    else
    {
      int l = (len)/2;
      ans+=v[l];
      //cout<<l<<" t"<<endl;
      //cout<<"Second  "<<v[l]<<endl;
    }
  }
  cout<<ans<<endl;
}

int main(int argc, char const *argv[])
{
   optimize();
   int T=1;
   //cin>>T;
   while(T--) solver();
   return 0;
}


// import java.util.Scanner;
// import java.util.Arrays;
// import java.util.Collections;
// import java.util.ArrayList;
//
// class SumMedians    {
//     public static void main(String[] args)  {
//         Scanner scanner = new Scanner(System.in);
//         int N = scanner.nextInt();
//         int n, medianIndex;
//
//         int[] numbers = new int[N];
//         int[] medians = new int[N];
//         ArrayList tempList = new ArrayList();
//         int medianSum = 0, insertionIndex;
//         final int MOD = 100000;
//
//         for(n = 1; n <= N; n++) {
//             numbers[n-1] = scanner.nextInt();
//         }
//
//         tempList.add(numbers[0]);
//         medians[0] = numbers[0];
//         for(n = 2; n <= N; n++) {
//             insertionIndex = (Collections.binarySearch(tempList, numbers[n-1]) * -1) - 1;
//             tempList.add(insertionIndex, numbers[n-1]);
//
//             if(n % 2 == 1)  {
//                 medianIndex = (n + 1)/2;
//             }
//             else {
//                 medianIndex = n / 2;
//             }
//             medians[n - 1] = tempList.get(medianIndex - 1);
//         }
//
//         for(n = 0; n < N; n++)  {
//             medianSum += medians[n];
//             medianSum %= MOD;
//         }
//
//         System.out.println(medianSum);
//     }
// }
