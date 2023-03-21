#include <bits/stdc++.h>
using namespace std;

int main()
{
string a,b;
int flag=0,c;

cin>>a>>b;
int length=a.length();
for(int i=0;i<length;i++)
{
  if(a[i]==b[i])
  {
    flag++;
  }
}
c=length-flag;
cout<<c<<endl;
return 0;
}
