#include <bits/stdc++.h>
using namespace std;
int d;
int main()
{
  int c;
  int k[1000],l[1000];
  cin>>c;
  for(int i=0;i<c;i++)
  {
    cin>>k[i]>>l[i];
    //int k[a],l[b];
    if(k[i]!=l[i])
    {
      d++;
    }

  }
cout<<d;

  return 0;
}
