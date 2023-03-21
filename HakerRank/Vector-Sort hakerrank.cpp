#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{

   int n,a;
   cin>>n;
   vector<int> v;
   for ( int i = 0;i<n;i++)
   {
       cin>>a;
       v.push_back(a);

   }

   sort(v.begin(), v.end());

   for (auto x : v)
        cout << x << " ";
  return 0;
}
