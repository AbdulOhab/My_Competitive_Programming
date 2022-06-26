#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

class SyllableCountEstimator{
public:

    int check(char c) {
      if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) return 1;
      return 0;
    }

   int estimate(string W) {
     string s = W;
     int count = 0;
     for(int i=0; i<W.size(); i++)
       if(check(W[i] )) count++;

     for(int i=1; i<W.size(); i++) {
       if((W[i] == 'o' && W[i-1 ] == 'o') || (W[i] == 'a' && W[i-1 ] == 'o') || (W[i] == 'u' && W[i-1 ] == 'a')) count--;
     }

     for(int i=2; i<W.size(); i++) {
       if(W[i-2] == 'i' && W[i-1] == 'o' && W[i] == 'u') count--;
     }
     if(W[W.size()-1] == 'e') count--;
     if(W.size()>2 && !check(W[W.size() -3]) && W[W.size() -2] == 'l' && W[W.size() -1] == 'e' ) count++;
     if(count <= 0) count = 1;
     return count;
   }
};

int main(){
  string s;
  int flag=0;
  int k=0;
  cin>>s;
  int len=s.size();
  for(int i=0;i<len;i++)
  {
    if(s[i]=='a' and s[i+1]=='u')
    {
      flag++;
    }
    else if(s[i]=='o' and s[i+1]=='a')
    {
      flag++;
    }
    else if(s[i]=='o' and s[i+1]=='o')
    {
      flag++;
    }
    else if(s[i]=='i' and s[i+1]=='o' and s[i+1]=='u')
    {
      flag++;
    }
    else if(s[i-1]=='e')
    {
      flag++;
    }
    else if(s[i-1]=='e' and s[i-2]=='l')
    {
      flag--;
    }
    else if(s[i] =='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
    {
      flag++;
    }
  }
  //cout<<"flag"<<flag<<endl;
  if(flag==1)
  cout<<"1"<<endl;
  else
  cout<<flag<<endl;
}
