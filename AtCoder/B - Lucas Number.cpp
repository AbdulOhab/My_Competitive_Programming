#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
const int man=1e6+50;
typedef unsigned long long ull;
ull arr[man];
int main(){
	int x;
	cin>>x;
	arr[0]=2,arr[1]=1;
	for(int i=2;i<=x;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout<<arr[x]<<endl;
}
