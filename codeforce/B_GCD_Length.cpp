#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ull = unsigned long long;

int n,a,b,c;
int main(int ab_ohab, char const *abohab[]){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
  cin>>n;
	while (n--) {
    cin>>a>>b>>c;
    int w1=pow(10,a-1)+pow(10,c-1);
    int w2=pow(10,b-1);
    cout<<w1<<" "<<w2<<endl;
  }
	return 0;
}
