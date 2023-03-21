#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
     int a,b;
     cin>>a>>b;
     if(b == 0) cout<<"denominator cannot be zero"<<endl;
     else cout<<(double)a/b<<endl;
   }
   return 0;
}
