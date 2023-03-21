#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int a;cin>>a;
    int ans=0;
    int ans1=0;
    for(int i=0;i<a;i++)
    {
      int s;
      cin>>s;
      if(s==2)
      {
        ans1++;
      }
      else
      {
        ans++;
      }
    }
    //cout<<"ans";
    cout<<ans<<endl;
  }
  return 0;
}
