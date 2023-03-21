#include<bits/stdc++.h>
using namespace std;

void solve(){
  int j=1;
  int a;
  cin>>a;
  long long int sum=1;
  if(a==1)
  {
    int p;
    cin>>p;
    cout <<"Case "<<j<<": "<< p*p << "\n";
    return;
  }
  for(int i=0;i<a;i++)
  {
    int b;
    cin>>b;
    sum*=b;
  }
  cout <<"Case "<<j <<": "<< sum << "\n";
  j++;
}
int main()
{
    int n;

    cin>>n;
    while(n--)
    {
      solve();
    }
    return 0;
}
