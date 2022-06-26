// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// using ull = unsigned long long;
//
// int main(int ab_ohab, char const *abohab[]){
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
//   int t;
//   cin>>t;
//   while(t--)
//   {
//     int n,x;
//     cin>>n>>x;
//     set<int>v;
//     for(int i=0;i<n;i++)
//     {
//       int b;
//       cin>>b;
//       v.insert(b);
//     }
//     int len=v.size();
//     if(len==x) cout<<"Good"<<endl;
//     else if(len>x) cout<<"Average"<<endl;
//     else cout<<"Bad"<<endl;
//   }
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
      int b;
      cin>>b;
      v.push_back(b);
    }
    sort(v.begin(),v.end());
    int len=unique(v.begin(),v.end())-v.begin();
    if(len==x) cout<<"Good"<<endl;
    else if(len>x) cout<<"Average"<<endl;
    else cout<<"Bad"<<endl;
  }
	return 0;
}
