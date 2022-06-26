/**
 *    @author: Ab_ohab
 *    created: 2.04.2021 09:47:29 fr
**/
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;
typedef long long ll;
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool is_magical(string number) {
	for (int i = 0; i < (int)number.size(); i++)
		if (number[i] != '1' && number[i] != '4')
			return false;

	if (number[0] == '4')
		return false;

	if (number.find("444") != number.npos)
		return false;

	return true;
}
int main(int argc, char const *argv[]) {
  ios;
  string s;
  cin>>s;
  bool t=false;
  if(is_magical(s))
  {
    //cout<<"NO"<<endl;
    cout<<"YES"<<endl;
  }
  else
  {
    ///cout<<"YES"<<endl;
    cout<<"NO"<<endl;
  }
  return 0;
}
