#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int t=1;
  while(n--)
  {
    cout<<"Case "<<t<<":"<<endl;
    int x1,x2,y1,y2;
    int x,p,Q;
    cin>>x1>>y1>>x2>>y2;
    cin>>x;
    for (int j = 1; j <= x; j++)
    {
      cin>>p>>Q;
      if( p>x1 and p<x2 and Q>y1 and Q<y2)
      {
        cout<<"Yes"<<endl;
      }
      else
      {
        cout<<"No"<<endl;
      }
    }
    t++;
  }
  return 0;
}
