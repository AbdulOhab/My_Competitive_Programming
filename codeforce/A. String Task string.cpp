#include <bits/stdc++.h>
using namespace std;

int main()
{
  int i,lenght;
  string  s,k;
  cin>>s;
  // std::vector<string> v;
  // v.push_back(n);
  //int o=s.length();;
  for(i=0;i<s.length();i++)
  {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'|| s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
        {
            continue;
        }
    else
     {
       k+= '.';
       k+=tolower(s[i]);
     }

  }
  cout<<k<<endl;
  return 0;
}
