#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int i,lenght;
  string  n;
  //vector<char> v;
  cin>>n;
  //v.push_back(n);
  //lenght=;
  for(i=0;i<=n.length();i++)
  {
    if(n[i]=='H' || n[i]=='Q' || n[i]=='9')
    {
    cout<<"YES"<<endl;
    return 0;
    }
  }
  cout<<"NO"<<endl;
  return 0;
}
