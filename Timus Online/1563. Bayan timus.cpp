#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string s[n];
  //string *arr = new string[n];
  int t=0;
  for(int i=0;i<n;i++)
  {
    getline(cin, s[i]);
  }

  for(int i=0;i<n;i++)
  {
  for(int j=n+1;j<n;i++)
  {
    if(s[i]==s[j])
    {
      break;
      t++;
    }
    else
    {
      break;
    }
  }
}
cout<<t;
  // for(int j=0;j<n;j++)
  // {
  //   cout<<s[j];
  // }

  return 0;
}
