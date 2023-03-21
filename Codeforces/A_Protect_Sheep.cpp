#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n,m;
  cin>>n>>m;
  char s[600][600];
  for(auto i=0;i<n;i++)
  {
    cin>>s[i];
  }
  for(auto i=0;i<n;i++)
  {
    for(auto j=0;j<m;j++)
    {
      if(s[i][j]=='.')
      {
        s[i][j]='D';
      }
      if(s[i][j]=='W')
      {
        if(s[i-1][j]=='S' || s[i+1][j]=='S' || s[i][j-1]=='S' || s[i][j+1]=='S')
        {
          cout<<"No";
          return 0;
        }
      }
    }
  }
  cout<<"Yes"<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<s[i]<<endl;
  }
  return 0;
}
