#include <bits/stdc++.h>
#include<queue>
using namespace std;

int main()
{
  int t,a,b;
  queue<int >v;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      cin>>a;
      switch(a)
      {
      case 1:
          cin>>b;
          v.push(b);
          break;
      case 2:
        v.pop();
        break;

      case 3:
        cout<<v.front()<<endl;
        break;
      }
  }

  return 0;
}
