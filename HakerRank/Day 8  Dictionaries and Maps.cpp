#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
using namespace std;

int main()
{
  map<string,long> m;
  long  n,number;
  string name;
  cin>>n;

  for(auto i=0;i<n;i++)
  {
    cin>>name;
    cin>>number;
    m[name]=number;
  }
while(cin>>name)
{
   if (m.find(name)!=m.end())
   cout << name << "=" << m.find(name)->second<<endl;
   else  cout << "Not found" << endl;

}
  return 0;
}
