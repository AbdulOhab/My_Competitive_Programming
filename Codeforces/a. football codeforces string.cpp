#include <bits/stdc++.h>
using namespace std;

int main()
{
  string c;
  int b;
  bool flag = false;
  cin>>c;
  for(int i=0;i<=c.length();i++)
  {
    if(c[i] == c[i+1]){
      b++;
      }
    else{
      b=1;
    }
    if(b == 7 )
    {
      flag = true;
      break;
    }
  }
  if(flag == true)
  cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
  return 0;
}
