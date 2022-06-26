/**
 *    @author: Ab_ohab
 *    created: 31.03.2021 10:50:29
**/
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int arrN[10005];
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N,Q;
  int t=1;
  while(cin>>N>>Q, N||Q)
  {
    for(int i=0;i<N;i++)
    {
      cin>>arrN[i];
    }
    sort(arrN,arrN+N);
    cout<<"CASE# "<<t++<<":\n";
    while(Q--)
    {
      int n;
      cin>>n;
      auto iter=lower_bound(arrN,arrN+N,n);
      if(iter == arrN+N || *iter!=n)
      {
        cout<<n<<" not found\n";
      }
      else
      {
        cout<<n<<" found at "<<(iter-arrN)+1<<endl;
      }
    }
    }

  return 0;
}

//not worked first.
// #include <bits/stdc++.h>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
//
// int main(int argc, char const *argv[]) {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
//
//   int N,Q;
//   int t=1;
//   while (1)
//   {
//   cin>>N>>Q;
//   if(N==0 and Q==0)
//   {
//     return 0;
//   }
//     int arrN[N];
//     int arrQ[Q];
//     //for(auto i:arrN)
//     for(int i=0;i<N;i++)
//     {
//       cin>>arrN[i];
//     }
//     sort(arrN,arrN+N);
//     //for(auto j:arrQ)
//     for(int j=1;j<=Q;j++)
//     {
//       cin>>arrQ[j];
//     }
//     cout<<"CASE# "<<t++<<":"<<endl;
//       for(int i=1;i<=Q;i++)
//       {
//         int t=arrQ[i];
//         auto iter=lower_bound(arrN,arrN+N,t);
//         if(binary_search(arrN,arrN+N,t))
//         {
//           cout<<t<<" found at "<<(iter-arrN)+1<<endl;
//         }
//         else
//         {
//           cout<<t<<" not found\n";
//         }
//       }
//     }
//
//   return 0;
// }
