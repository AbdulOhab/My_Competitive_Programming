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
  vector<int>v;
	for(int i= 0 ; i<n ; i++)
  {
    int t;
    cin>>t;
    v.push_back(t);
  }
	//for(auto i:v) cout<<i<<" ";
  int seraja=0;
  int dima=0;
	for(int i=0;i<n;i++)
  {
    if(i%2==1)
    {
      if(v[0]>v.back())
      {
        seraja+=v[0];
        v.erase(v.begin());
      }
      else
      {
        seraja+=v.back();
        v.pop_back();
      }
    }
    else
    {
      if(v[0]>v.back())
      {
        dima+=v[0];
        v.erase(v.begin());
      }
      else
      {
        dima+=v.back();
        v.pop_back();
      }
    }
  }
  cout<<dima<<" "<<seraja<<endl;
	return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// using ull = unsigned long long;
//
// int main(int ab_ohab, char const *abohab[]){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
//   int n;
// 	cin>>n;
//   vector<int>v;
// 	for(int i= 0 ; i<n ; i++)
//   {
//     int t;
//     cin>>t;
//     v.push_back(t);
//   }
//
//   int seraja=0;
//   int dima=0;
//   int f=1;
//   while (!v.empty())
//   {
//     if(f==1)
//     {
//       if(v[0]>v.back())
//       {
//         seraja+=v[0];
//         v.erase(v.begin());
//       }
//       else
//       {
//         seraja+=v.back();
//         v.pop_back();
//       }
//       f=2;
//     }
//     else
//     {
//       if(v[0]>v.back())
//       {
//         dima+=v[0];
//         v.erase(v.begin());
//       }
//       else
//       {
//         dima+=v.back();
//         v.pop_back();
//       }
//       f=1;
//     }
//   }
//   cout<<seraja<<" "<<dima<<endl;
// 	return 0;
// }
