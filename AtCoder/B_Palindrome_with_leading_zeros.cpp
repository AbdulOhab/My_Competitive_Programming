#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
  ios;
  string s,t;
  cin>>s;
  int len=s.size();
  if(len==0 || len==1)
  {
    return 0;
  }
  //string s1="0";
  // reverse(s.begin(),s.end());
  //cout<<"first"<<s<<endl;
  if(s.back()=='0')
  {
    //s.insert(0,s1);
    s.pop_back();
  }
  // if(s.front() =='0')
  // {
  //   s.erase(s.begin());
  // }
  t=s;
  //cout<<"last"<<s;
  reverse(s.begin(),s.end());
  if(s==t)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"No"<<endl;
  }
  return 0;
}
