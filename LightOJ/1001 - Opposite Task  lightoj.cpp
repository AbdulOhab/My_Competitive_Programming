#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,j;
  cin>>n;
  while(n--)
  {
    cin>>j;
    if(j>=10 )
    {
      // int f=j%2;
      // int k=j/2;
      // int t=f+k;
      cout<<j-10<<" "<<j-(j-10)<<endl;
    }
    else
     cout<<"0 "<<j<<endl;
  }


  return 0;
}
