#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num;
	scanf("%d", &num);
	while(num--)
	{
		string s;
		cin>>s;
    for(int i = 0 ; i < s.length()/2 ; ++i )
    swap(s[i], s[s.length() - i - 1]);
    cout << s << endl;
	}
  return 0;
}
