#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
typedef long long ll;

int main() {
  ll a;
  cin>>a;
  int a1,a2,a3,b1,b2,b3,D,C;
  int f,s;
  for(int i=0;i<a;i++)
  {
    cin>>D>>C;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;

    int s=a1+a2+a3;
    int f=b1+b2+b3;
    int f,s;
    if(s>=150 and f>=150)
    {
      f=t+t2+D+D;
      s=t+t2+C;
    }
    else
    {
      f=t+t2+D+D;
      s=t+t2+C+D;
    }
    //cout<<f<<"F"<<endl;
    //cout<<s<<"s"<<endl;
    // if(f=s)
    // {
    //   cout<<"NO"<<endl;
    // }
    if(s<f)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
