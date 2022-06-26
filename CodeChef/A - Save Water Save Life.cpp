#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  int a;
  cin>>a;
  while(a--)
  {
    int H,X,Y,C;
    cin>>H>>X>>Y>>C;
    int cutdown_water=Y/2;
    int available_water=X+cutdown_water;
    int jalagey=H*available_water;
    if(C>=jalagey)
    {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
	return 0;
}
