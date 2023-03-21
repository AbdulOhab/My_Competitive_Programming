#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <set>
using namespace std;
using ull = unsigned long long;
typedef long long ll;


int main(int argc, char const *argv[]) {
  int n;
  string s;
  cin>>n>>s;

  //reverse(s.begin(),s.end());
  // for(int i=0;i<n-1;i++)
  // {
  //   //swap(s[i+1],s[i]);
  // }
  // reverse(s.begin(),s.end());
  if(n == 1)
  {
    cout<<s;
  }
  else{
    cout<<1;
    for (size_t j = 0; j <n; j++) {
      if(s[j]=='1')
      {

      }
      else
      {
        cout<<s[j];
      }
    }
  }
  //cout<<s;
  return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

	int n;
	string s;
	cin >> n >> s;
	if (n == 1) {
		cout << s << endl;
	} else {
		int cnt0 = 0;
		for (int i = 0; i < n; ++i)
			cnt0 += s[i] == '0';
		cout << 1;
		for (int i = 0; i < cnt0; ++i)
			cout << 0;
		cout << endl;
	}

	return 0;
}
