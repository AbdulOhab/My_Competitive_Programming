#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main()
{
  int n;
  long long temp,ans=1;
  double lock;

  cin>>n;
  for(int i=0;i<n;i++)
  {
    scanf("%lld",&temp);
    if(temp==0)
    {
      cout<<0;
      return 0;
    }
    lock=lock+log10(temp);
    ans *=temp;
  }
  if (lock>18.0 || ans>1000000000000000000)
     {
         cout<<-1;
         return 0;
     }
     cout<<ans;
     return 0;
}
