//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <cstring>
//#include <iostream>
//#include <vector>
// using namespace std;
// using ull = unsigned long long;
// typedef long long ll;
//
// int main()
//{
//    int n;
//    cin >> n;
//    vector<int> v;
//    for (int i=1; i <=n; i++)
//    {
//        int co;
//        cin >>co;
//        v.push_back(co);
//    }
//    int s, t;
//    cin >> s >> t;
//
//    if(s==t)
//    {
//        cout<<0<<endl;
//        return 0;
//    }
//    int f1=0,f2;
//    if( s < t )
//    {
//        for( auto i =s-1; i<t-1; i++)
//        {
//            f1+=v[i];
//        }
//        for(int i=t; i<n; i++) f2+=v[i];
//        for(int i=0; i<s; i++)f2+=v[i];
//
//        cout<<min(f1,f2);
//
//    }
//    int f3=0,f4=0;
//    if( s > t )
//    {
//        for( auto i =s-2; i>=t-1; i--)
//        {
//            f3+=v[i];
//        }
//        for(int i=t; i<n; i++) f4+=v[i];
//        for(int i=0; i<s; i++)f4+=v[i];
//
//        cout<<min(f3,f4);
//
//    }
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n;
  int v[1000];
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> v[i];
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << 0;
    return 0;
  }
  int f1 = 0, f2 = 0;
  if (a < b) {
    for (int i = a - 1; i < b - 1; i++) {
      f1 += v[i];
    }
    for (int i = b - 1; i < n; i++)
      f2 += v[i];
    for (int i = 0; i < a - 1; i++)
      f2 += v[i];

    cout << min(f1, f2);
  }
  int f3 = 0, f4 = 0;
  if (a > b) {
    for (int i = a - 2; i >= b - 1; i--) {
      f3 += v[i];
    }
    for (int i = a - 1; i < n; i++)
      f4 += v[i];
    for (int i = 0; i < b - 1; i++)
      f4 += v[i];

    cout << min(f3, f4);
  }
  return 0;
}
