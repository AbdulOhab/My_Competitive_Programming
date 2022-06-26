#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  char arr[]={'A','B'};
  int n;
  cin>>n;
  int java=1;
  while(n--)
  {
    int s,k;
    cin>>s>>k;
    cout<<"Case "<<java<<":\n";
    string permuation="";
    int t=0;
    for(int i=0;i<s;i++)
    {
      permuation+=65+t;
      t++;
    }
    int flag=0;
    do{
      cout<<permuation<<"\n";
      flag++;
      if(flag==k) break;
    }
    while (next_permutation(permuation.begin(),permuation.end()));
    //cout<<permuation;
    java++;
  }
	return 0;
}
