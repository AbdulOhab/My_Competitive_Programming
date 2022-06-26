#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
  long long int n;
  string s;
  cin>>n;
  while(n--)
  {
    cin>>s;
    if(s.length()>10)
    {
      cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
    }
    else
    {
      cout<<s<<endl;
    }
    cout<<"\n";
  }
  return 0;
}
