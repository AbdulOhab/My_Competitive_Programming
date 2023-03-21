#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
typedef double dl;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   optimize();
   int a,b;
   cin>>a>>b;

   int a1 =  a/100%10;
   int a2 =  a/10%10;
   int a3 =  a%10;

   int b1 =  b/100%10;
   int b2 =  b/10%10;
   int b3 =  b%10;

   int t1= a1+a2+a3;
   int t2 = b1+b2+b3;
   if(t1>t2) cout<<t1<<endl;
   else cout<<t2<<endl;
   return 0;
}
