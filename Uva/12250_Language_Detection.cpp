#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  ios;
  #ifndef ONLINE_JUDGE
  freopen("D:/Coding CP/Abdul_Ohab_InputFile.txt", "r", stdin);
  freopen("D:/Coding CP/Abdul_Ohab_OutputFile.txt", "w", stdout);
  #endif
  string s;
  int i=1;
  while(cin>>s)
  {
    if(s=="HELLO")
    {
      cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
    }
    else if(s=="HOLA")
    {
      cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
    }
    else if(s=="HALLO")
    {
      cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
    }
    else if(s=="BONJOUR")
    {
      cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
    }
    else if(s=="CIAO")
    {
      cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
    }
    else if(s=="ZDRAVSTVUJTE")
    {
      cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
    }
    else if(s=="#")
    {
      return 0;
    }
    else{
      cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
    }
    i++;
  }
  return 0;
}
