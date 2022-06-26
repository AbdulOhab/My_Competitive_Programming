#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {

  int input;
  cin>>input;
  int n,k1,k2,w,b;
  for (int i = 0; i < input; i++) {
    cin>>n>>k1>>k2>>w>>b;
    int dominoes=w+b;
    int cells =k1+k2;
    if(w>cells/2 || b>(2*n-k1-k2)/2)
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout<<"YES"<<endl;
    }
  }
  return 0;
}
// int T;
// 	scanf("%d",&T);
// 	while(T--)
// 	{
// 		int a,b,c,d,e;
// 		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
// 		if((b+c)/2>=d && (2*a-b-c)/2>=e) printf("YES\n");
// 		else printf("NO\n");
//
// 	}
